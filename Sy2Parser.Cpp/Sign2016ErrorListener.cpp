#include "Sign2016ErrorListener.h"
#include "Sign2016Lexer.h"
#include "Sign2016Parser.h"

using namespace std;
using namespace antlr4;

void Sign2016ErrorListener::syntaxError(antlr4::Recognizer * /*recognizer*/, antlr4::Token * /*offendingSymbol*/, size_t /* line */, size_t charPositionInLine, const std::string &msg, std::exception_ptr /*e*/)
{
	if (_errorCb != nullptr)
	{
		(*_errorCb)(_line, charPositionInLine + _column + 1, msg);
	}
}

void Sign2016ErrorListener::setErrorCallback(ErrorCallbackPtr callback)
{
	_errorCb = callback;
}
