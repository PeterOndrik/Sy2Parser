#pragma once

#include "BaseErrorListener.h"

class Sy2CustomErrorListener : public antlr4::BaseErrorListener
{
public:
	Sy2CustomErrorListener()
	{
	}

	typedef std::function<void(size_t line, size_t column, const std::string &message, std::exception_ptr e)> ErrorCallbackType;
	typedef std::shared_ptr<ErrorCallbackType> ErrorCallbackPtr;

	void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override;

	void setErrorCallback(ErrorCallbackPtr callback);

private:
	ErrorCallbackPtr _errorCb;
};
