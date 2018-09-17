#include "sy2parser_api.h"
#include <fstream>
#include "antlr4-runtime.h"
#include "Sy2Lexer.h"
#include "Sy2Parser.h"
#include "Sy2CustomVisitor.h"
#include "Sy2CustomListener.h"
#include "Node.h"
#include "File.h"
#include "Command.h"
#include "CmdValue.h"
#include "Symbol.h"
#include "Type.h"
#include "Name.h"
#include "Bitmask.h"
#include "Offset.h"
#include "Address.h"
#include "EnumValue.h"
#include "Signature.h"

using namespace std;
using namespace antlr4;
using namespace antlrcpp;

struct OpenParser
{
	ANTLRInputStream *sy2Input;
	Sy2Lexer *sy2Lexer;
	CommonTokenStream *sy2Tokens;
	Sy2Parser *sy2Parser;
	Sy2Parser::FileContext *sy2Tree;
	Sy2CustomListener::NodeType sy2File;
	const Model::Node<> *currentNode;
};

std::map<Sy2ParserHandle, shared_ptr<OpenParser>> handleList;
Sy2ParserHandle lastHandle = 0x1000;
Sy2CustomListener::ParsedNodeCallbackPtr parsedNodeCallback;

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
		shared_ptr<OpenParser> parser = make_shared<OpenParser>();
		parser->sy2Input = new ANTLRInputStream(stream);
		parser->sy2Lexer = new Sy2Lexer(parser->sy2Input);
		parser->sy2Tokens = new CommonTokenStream(parser->sy2Lexer);
		parser->sy2Parser = new Sy2Parser(parser->sy2Tokens);

		handleList[lastHandle] = parser;
		*handle = lastHandle;
		lastHandle++;

		//sy2Tree = sy2Parser->file();
		//Sy2CustomVisitor sy2Visitor;
		//file = sy2Visitor.visitFile(sy2Tree);
		//currentNode = &file;
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2Close(Sy2ParserHandle handle)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = handleList[handle];

	if (parser)
	{
		int result = handleList.erase(handle);
		//delete parser->sy2Parser;
		if (result == 0)
		{
			status = SY2_HANDLE_NOT_FOUND;
		}
	}
	else
	{
		status = SY2_HANDLE_NOT_FOUND;
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2AddParsedNodeCallback(Sy2ParserHandle handle, ParsedNodeCallback *callback, unsigned int nodeType)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = handleList[handle];

	if (parser)
	{
		parsedNodeCallback = make_shared<Sy2CustomListener::ParsedNodeCallbackType>(
			[parser, callback, nodeType](const Model::Node<> *node)
		{
			parser->currentNode = node->next();
			T_Sy2Node apiNode = { T_Sy2NodeType::SY2_COMMAND,  "\0", node->getDepth(), node->getLine(), node->getColumn() };
			//node.type = T_Sy2NodeType::SY2_COMMAND;
			//std::copy(std::begin(command->getValue()), std::end(command->getValue()), node.value);
			strncpy_s(apiNode.value, node->getValue().c_str(), sizeof(apiNode.value));
			callback(&apiNode);
			if (node->parent())
			{
				// it is needed reset inner index of already passed child nodes
				node->parent()->reset();
			}
		});
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2Parse(Sy2ParserHandle handle, ParsingProgressCallback *callback)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = handleList[handle];

	if (parser)
	{
		Sy2CustomListener listener;
		Sy2CustomListener::ProgressCallbackPtr progressCb = make_shared<Sy2CustomListener::ProgressCallbackType>(callback);
		listener.setProgressCallback(progressCb);
		listener.addParsedNodeCallback(parsedNodeCallback, Model::Sy2Node::SY2_COMMAND);

		parser->sy2Parser->addParseListener(&listener);
		parser->sy2Tree = parser->sy2Parser->file();
		parser->sy2File = listener.getNode();
		parser->currentNode = parser->sy2File.get();
		parser->sy2Parser->removeParseListener(&listener);
	}

	return status;
}

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2ReadNext(const Sy2ParserHandle handle, T_Sy2Node *node)
{
	Sy2ParserStatus status = SY2_SUCCESS;
	shared_ptr<OpenParser> parser = handleList[handle];

	if (parser)
	{
		const Model::Node<> *currentNode = parser->currentNode;
		if (currentNode != nullptr)
		{
			node->type = (T_Sy2NodeType)currentNode->getType();
			string value = currentNode->getValue();
			if (value.length() == 0)
			{
				node->value[0] = '\0';
			}
			else
			{
				strncpy_s(node->value, value.c_str(), value.length());
			}
			node->depth = currentNode->getDepth();
			node->line = currentNode->getLine();
			node->column = currentNode->getColumn();

			parser->currentNode = currentNode->next();
		}
		else
		{
			status = SY2_EOF;
		}
	}
	else
	{
		status = SY2_HANDLE_NOT_FOUND;
	}

	return status;
}

//SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL setGetSymbolCallback(GetSymbolCallback *callback)
//{
//	Sy2ParserStatus status = SY2_SUCCESS;
//
//	getSymCallback = make_shared<Sy2CustomListener::GetSymbolCallbackType>(
//		[callback](const Model::Symbol *symbol)
//		{
//			T_Sy2Node node = { T_Sy2NodeType::SY2_SYMBOL, 0 };
//			//std::copy(std::begin(symbol->getValue()), std::end(symbol->getValue()), node.value);
//			symbol->getValue().copy(node.value, symbol->getValue().length());
//			callback(&node);
//		}
//	);
//
//	return status;
//}
