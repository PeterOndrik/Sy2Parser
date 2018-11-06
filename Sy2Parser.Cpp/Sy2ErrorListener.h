#pragma once

#include "BaseErrorListener.h"

class Sy2ErrorListener : public antlr4::BaseErrorListener
{
public:
	Sy2ErrorListener()
	{
	}

	typedef std::function<void(size_t line, size_t column, const std::string &message)> ErrorCallbackType;
	typedef std::shared_ptr<ErrorCallbackType> ErrorCallbackPtr;

	void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override;

	void setErrorCallback(ErrorCallbackPtr callback);

private:
	ErrorCallbackPtr _errorCb;
};
