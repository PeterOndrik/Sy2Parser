#include "UnwantedTokenException.h"
#include "Parser.h"

using namespace antlr4;

UnwantedTokenException::UnwantedTokenException(Parser *recognizer)
	: RecognitionException(recognizer, recognizer->getInputStream(), recognizer->getContext(), recognizer->getCurrentToken())
{
}

UnwantedTokenException::~UnwantedTokenException()
{
}
