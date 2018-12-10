#include "Sign2016CustomErrorListener.h"
#include "Sign2016Lexer.h"
#include "Sign2016Parser.h"
#include "UnwantedTokenException.h"
#include "MissingTokenException.h"
#include "LexerNoViableAltException.h"

using namespace std;
using namespace antlr4;

void Sign2016CustomErrorListener::syntaxError(antlr4::Recognizer * /*recognizer*/, antlr4::Token * /*offendingSymbol*/, size_t /* line */, size_t charPositionInLine, const std::string &msg, std::exception_ptr e)
{
	if (_errorCb != nullptr)
	{
		(*_errorCb)(_line, charPositionInLine + _column + 1, msg, e);
	}
}

void Sign2016CustomErrorListener::setErrorCallback(ErrorCallbackPtr callback)
{
	_errorCb = callback;
}
