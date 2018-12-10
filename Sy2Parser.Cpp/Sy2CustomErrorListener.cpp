#include "Sy2CustomErrorListener.h"
#include "Sy2Lexer.h"
#include "Sy2Parser.h"

using namespace std;
using namespace antlr4;

void Sy2CustomErrorListener::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e)
{
	if (_errorCb != nullptr)
	{
		(*_errorCb)(line, charPositionInLine + 1, msg, e);
	}
}

void Sy2CustomErrorListener::setErrorCallback(ErrorCallbackPtr callback)
{
	_errorCb = callback;
}
