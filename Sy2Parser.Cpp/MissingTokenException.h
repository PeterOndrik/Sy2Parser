#pragma once

#include "RecognitionException.h"

class MissingTokenException : public antlr4::RecognitionException
{
public:
	MissingTokenException(antlr4::Parser *recognizer);
	MissingTokenException(MissingTokenException const&) = default;
	~MissingTokenException();
	MissingTokenException& operator=(MissingTokenException const&) = default;
};
