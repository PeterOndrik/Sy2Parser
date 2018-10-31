#pragma once

#include "BaseErrorListener.h"

class Sign2016ErrorListener : public antlr4::BaseErrorListener
{
public:
	Sign2016ErrorListener(size_t line, size_t column)
		: _line(line), _column(column)
	{
	}

	typedef std::function<void(size_t line, size_t column, const std::string &message)> ErrorCallbackType;
	typedef std::shared_ptr<ErrorCallbackType> ErrorCallbackPtr;

	void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override;

	void setErrorCallback(ErrorCallbackPtr callback);

private:
	size_t _line;
	size_t _column;
	ErrorCallbackPtr _errorCb;
};
