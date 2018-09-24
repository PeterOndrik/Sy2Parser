#include "Sy2ErrorListener.h"
#include "Sy2Lexer.h"
#include "Sy2Parser.h"

using namespace std;

void Sy2ErrorListener::syntaxError(antlr4::Recognizer * /*recognizer*/, antlr4::Token * /*offendingSymbol*/, size_t /*line*/, size_t charPositionInLine, const std::string &msg, std::exception_ptr /*e*/)
{
	if (_errorCb != nullptr)
	{
		(*_errorCb)(_line, charPositionInLine + _column, msg);
	}
}

void Sy2ErrorListener::setErrorCallback(ErrorCallbackPtr callback)
{
	_errorCb = callback;
}
