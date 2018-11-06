#include "sy2parser_api.h"
#include <fstream>
#include "antlr4-runtime.h"
#include "Sy2ErrorListener.h"
#include "Sy2Lexer.h"
#include "Sy2Parser.h"
#include "Sy2CustomListener.h"
#include "Unspecified.h"

#include <Windows.h>

using namespace std;
using namespace antlr4;
using namespace antlrcpp;

typedef std::mutex Sy2CallbackMutex;
typedef std::lock_guard<Sy2CallbackMutex> Sy2CallbackMutexWrapper;

extern unsigned int dllVersion;

// Holds info about callback.
struct ParsedNodeCallbackStorage
{
	ParsedNodeCallback *apiParsedNodeCallback;
	Sy2CustomListener::ParsedNodeCallbackPtr parsedNodeCallback;
	Model::Sy2Node nodeType;
};

// Holds info about already open Sy2Parser.
struct OpenParser
{
	OpenParser() = default;
	OpenParser(const OpenParser &) = delete;
	OpenParser& operator=(const OpenParser &node) = delete;

	~OpenParser()
	{
		delete sy2Parser;
		delete sy2Tokens;
		delete sy2Lexer;
		delete sy2Input;
	}

	ANTLRInputStream *sy2Input;
	Sy2ErrorListener *sy2ErrListener;
	Sy2Lexer *sy2Lexer;
	CommonTokenStream *sy2Tokens;
	Sy2Parser *sy2Parser;
	Sy2Parser::FileContext *sy2Tree;
	Sy2CustomListener::NodeType sy2File;
	string fileName;
	const Model::Node<> *currentNode;
	Sy2ErrorListener::ErrorCallbackPtr errorCb;
	Sy2CustomListener::ProgressCallbackPtr progressCb;
	vector<ParsedNodeCallbackStorage> parsedNodeCbList;
};

typedef std::mutex Sy2HandleListMutex;
typedef std::lock_guard<std::mutex> Sy2HandleListMutexWrapper;
Sy2HandleListMutex sy2HandleListMutex;
// Holds open parser and corresponding handle.
std::map<Sy2ParserHandle, shared_ptr<OpenParser>> handleList;
// Start handle value.
Sy2ParserHandle lastHandle = 0x1000;

static void ConvertDateTime(const FILETIME * const ft, T_FileDateTime *const fileDateTime)
{
	SYSTEMTIME stUTC, stLocal;

	FileTimeToSystemTime(ft, &stUTC);
	SystemTimeToTzSpecificLocalTime(NULL, &stUTC, &stLocal);

	fileDateTime->year = stLocal.wYear;
	fileDateTime->month = stLocal.wMonth;
	fileDateTime->dayOfWeek = stLocal.wDayOfWeek;
	fileDateTime->day = stLocal.wDay;
	fileDateTime->hour = stLocal.wHour;
	fileDateTime->minute = stLocal.wMinute;
	fileDateTime->second = stLocal.wSecond;
	fileDateTime->milliseconds = stLocal.wMilliseconds;
}

static shared_ptr<OpenParser> GetParser(Sy2ParserHandle handle)
{
	shared_ptr<OpenParser> parser;

	Sy2HandleListMutexWrapper lock(sy2HandleListMutex);

	parser = handleList[handle];

	return parser;
}

static Sy2ParserStatus processNode(const Model::Node<> *node, T_Sy2Node *apiNode)
{
	Sy2ParserStatus status = SY2_SUCCESS;

	if (node != nullptr)
	{
		apiNode->type = (T_Sy2NodeType)node->getType();
		string value = node->getValue();
		if (value.length() == 0)
		{
			apiNode->value[0] = '\0';
		}
		else
		{
			strncpy_s(apiNode->value, value.c_str(), sizeof(apiNode->value) - 1);
			apiNode->value[sizeof(apiNode->value) - 1] = '\0';
		}
		apiNode->depth = node->getDepth();
		apiNode->line = node->getLine();
		apiNode->column = node->getColumn();
	}
	else
	{
		status = SY2_EOF;
	}

	return status;
}

SY2PARSER_API unsigned int SY2PARSER_API_CALL sy2GetApiVersion(void)
{
	return SY2PARSER_API_VERSION;
}

SY2PARSER_API unsigned int SY2PARSER_API_CALL sy2GetDllVersion(void)
{
	return dllVersion;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2Open(const char *fileName, Sy2ParserHandle *handle)
{
	Sy2ParserStatus status = SY2_SUCCESS;

	ifstream stream(fileName);
	if (!stream.is_open())
	{
		status = SY2_FILE_NOT_FOUND;
	}
	else
	{
		Sy2HandleListMutexWrapper lock(sy2HandleListMutex);

		shared_ptr<OpenParser> parser = make_shared<OpenParser>();
		parser->sy2Input = new ANTLRInputStream(stream);
		parser->sy2ErrListener = new Sy2ErrorListener();
		parser->sy2Lexer = new Sy2Lexer(parser->sy2Input);
		parser->sy2Lexer->removeErrorListeners();
		parser->sy2Lexer->addErrorListener(parser->sy2ErrListener);
		parser->sy2Tokens = new CommonTokenStream(parser->sy2Lexer);
		parser->sy2Parser = new Sy2Parser(parser->sy2Tokens);
		parser->sy2Parser->removeErrorListeners();
		parser->sy2Parser->addErrorListener(parser->sy2ErrListener);
		parser->fileName = fileName;

		handleList[lastHandle] = parser;
		*handle = lastHandle;
		lastHandle++;
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2GetFileInfo(Sy2ParserHandle handle, T_Sy2FileInfo *fileInfo)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = GetParser(handle);

	fileInfo->size = 0;

	if (parser)
	{
		HANDLE hFile;
		FILETIME ftCreate, ftAccess, ftWrite;

		// Opening the existing file
		string fileName = parser->fileName;
		hFile = ::CreateFile(wstring(fileName.begin(), fileName.end()).c_str(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (hFile == INVALID_HANDLE_VALUE)
		{
			status = SY2_FILE_NOT_FOUND;
		}
		else
		{
			fileInfo->size = ::GetFileSize(hFile, NULL);
			if (!GetFileTime(hFile, &ftCreate, &ftAccess, &ftWrite))
			{
				status = SY2_FAILD;
			}
			ConvertDateTime(&ftCreate, &fileInfo->creation);
			ConvertDateTime(&ftAccess, &fileInfo->lastAccess);
			ConvertDateTime(&ftWrite, &fileInfo->lastWrite);
		}
		if (CloseHandle(hFile) == 0)
		{
			status = SY2_FAILD;
		}
	}
	else
	{
		status = SY2_INVALID_HANDLE;
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2Close(Sy2ParserHandle handle)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = GetParser(handle);

	if (parser)
	{
		int result = handleList.erase(handle);
		if (result == 0)
		{
			status = SY2_INVALID_HANDLE;
		}
		else
		{
			parser->parsedNodeCbList.clear();	// needed to released shared ptr of parser inside lambda otherwise OpenParser destructor won't be called
			parser.reset();
		}
	}
	else
	{
		status = SY2_INVALID_HANDLE;
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2SetParsingErrorCallback(Sy2ParserHandle handle, ParsingErrorCallback *callback, void *callbackContext)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = GetParser(handle);

	if (parser)
	{
		if (callback != nullptr)
		{
			parser->errorCb = make_shared<Sy2ErrorListener::ErrorCallbackType>(
				[handle, callback, callbackContext](size_t line, size_t column, const string &message)
				{
					callback(handle, line, column, message.c_str(), callbackContext);
				});
		}
		else
		{
			parser->errorCb.reset();
		}
	}
	else
	{
		status = SY2_INVALID_HANDLE;
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2SetParsingProgressCallback(Sy2ParserHandle handle, ParsingProgressCallback *callback, void *callbackContext)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = GetParser(handle);

	if (parser)
	{ 
		if (callback != nullptr)
		{
			parser->progressCb = make_shared<Sy2CustomListener::ProgressCallbackType>(
				[handle, callback, callbackContext](Sy2CustomListener::ProgressType progress)
			{
				callback(handle, progress, callbackContext);
			});
		}
		else
		{
			parser->progressCb.reset();
		}
	}
	else
	{
	status = SY2_INVALID_HANDLE;
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2AddParsedNodeCallback(Sy2ParserHandle handle, T_Sy2NodeType nodeType, ParsedNodeCallback *callback, void *callbackContext)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = GetParser(handle);

	if (parser)
	{
		if (callback != nullptr)
		{
			ParsedNodeCallbackStorage callbackStorage;
			callbackStorage.apiParsedNodeCallback = callback;
			callbackStorage.parsedNodeCallback = make_shared<Sy2CustomListener::ParsedNodeCallbackType>(
				[parser, handle, nodeType, callback, callbackContext](const Model::Node<> *node)
			{
				//parser->currentNode = node->next();
				parser->currentNode = node;
				T_Sy2Node apiNode = { (T_Sy2NodeType)node->getType(),  "\0", node->getDepth(), node->getLine(), node->getColumn() };
				strncpy_s(apiNode.value, node->getValue().c_str(), sizeof(apiNode.value) - 1);	// copy at most N, zero-padding if shorter
				apiNode.value[sizeof(apiNode.value) - 1] = '\0';							// ensure NUL terminated
				callback(handle, &apiNode, callbackContext);
				if (node->parent())
				{
					// it is needed reset inner index of already passed child nodes
					node->parent()->reset();
				}
			});;
			callbackStorage.nodeType = (Model::Sy2Node)nodeType;

			parser->parsedNodeCbList.push_back(callbackStorage);
		}
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2RemoveParsedNodeCallback(Sy2ParserHandle handle, T_Sy2NodeType nodeType, ParsedNodeCallback *callback)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = GetParser(handle);

	if (parser)
	{
		parser->parsedNodeCbList.erase(remove_if(parser->parsedNodeCbList.begin(), parser->parsedNodeCbList.end(), [nodeType, callback](ParsedNodeCallbackStorage cbStorage)
		{
			return cbStorage.nodeType == nodeType && cbStorage.apiParsedNodeCallback == callback;
		}), parser->parsedNodeCbList.end());
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2Parse(Sy2ParserHandle handle)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = GetParser(handle);

	if (parser)
	{
		parser->sy2ErrListener->setErrorCallback(parser->errorCb);
		Sy2CustomListener listener(parser->fileName);
		listener.setErrorCallback(parser->errorCb);
		listener.setProgressCallback(parser->progressCb);
		for (auto iCallback : parser->parsedNodeCbList)
		{
			listener.addParsedNodeCallback(iCallback.parsedNodeCallback, iCallback.nodeType);
		}
		parser->sy2Parser->addParseListener(&listener);
		parser->sy2Tree = parser->sy2Parser->file();
		parser->sy2File = listener.getNode();
		parser->currentNode = new Model::Unspecified;
		parser->sy2Parser->removeParseListener(&listener);
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2ReadNext(const Sy2ParserHandle handle, T_Sy2Node *node)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = GetParser(handle);

	if (parser)
	{
		if (parser->currentNode->getType() == T_Sy2NodeType::SY2_UNSPECIFIED)
		{
			const Model::Node<> *currentNode = parser->sy2File.get();
			status = processNode(currentNode, node);
			parser->currentNode = currentNode;
		}
		else
		{
			const Model::Node<> *currentNode = parser->currentNode->next();
			status = processNode(currentNode, node);
			parser->currentNode = currentNode;
		}
	}
	else
	{
		status = SY2_INVALID_HANDLE;
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2AbortParsing(const Sy2ParserHandle handle)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = GetParser(handle);

	if (parser)
	{
		parser->sy2Parser->abortParsing();
	}
	else
	{
		status = SY2_INVALID_HANDLE;
	}

	return status;
}
