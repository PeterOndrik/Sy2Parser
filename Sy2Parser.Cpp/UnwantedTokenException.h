#pragma once

#include "RecognitionException.h"

class UnwantedTokenException : public antlr4::RecognitionException
{
public:
	UnwantedTokenException(antlr4::Parser *recognizer);
	UnwantedTokenException(UnwantedTokenException const&) = default;
	~UnwantedTokenException();
	UnwantedTokenException& operator=(UnwantedTokenException const&) = default;
};
