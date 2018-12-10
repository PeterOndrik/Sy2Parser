#include "MissingTokenException.h"
#include "Parser.h"

using namespace antlr4;

MissingTokenException::MissingTokenException(Parser *recognizer)
	: RecognitionException(recognizer, recognizer->getInputStream(), recognizer->getContext(), recognizer->getCurrentToken())
{
}

MissingTokenException::~MissingTokenException()
{
}
