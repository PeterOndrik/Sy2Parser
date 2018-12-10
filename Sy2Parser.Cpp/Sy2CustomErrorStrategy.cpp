#include "Sy2CustomErrorStrategy.h"
#include "Parser.h"
#include "ParserRuleContext.h"
#include "NoViableAltException.h"
#include "InputMismatchException.h"
#include "FailedPredicateException.h"
#include "UnwantedTokenException.h"
#include "MissingTokenException.h"

using namespace antlr4;

void Sy2CustomErrorStrategy::reportNoViableAlternative(antlr4::Parser *recognizer, const antlr4::NoViableAltException &e)
{
	TokenStream *tokens = recognizer->getTokenStream();
	std::string input;

	if (tokens != nullptr) 
	{
		if (e.getStartToken()->getType() == Token::EOF) 
		{
			input = "<EOF>";
		}
		else 
		{
			input = tokens->getText(e.getStartToken(), e.getOffendingToken());
		}
	}
	else 
	{
		input = "<unknown input>";
	}

	std::string msg = "no viable alternative at input " + escapeWSAndQuote(input);
	recognizer->notifyErrorListeners(e.getOffendingToken(), msg, std::make_exception_ptr(e));
}

void Sy2CustomErrorStrategy::reportInputMismatch(antlr4::Parser *recognizer, const antlr4::InputMismatchException &e)
{
	std::string msg = "mismatched input " + getTokenErrorDisplay(e.getOffendingToken()) + " expecting " + e.getExpectedTokens().toString(recognizer->getVocabulary());
	recognizer->notifyErrorListeners(e.getOffendingToken(), msg, std::make_exception_ptr(e));
}

void Sy2CustomErrorStrategy::reportFailedPredicate(antlr4::Parser *recognizer, const antlr4::FailedPredicateException &e)
{
	const std::string& ruleName = recognizer->getRuleNames()[recognizer->getContext()->getRuleIndex()];

	std::string msg = "rule " + ruleName + " " + e.what();
	recognizer->notifyErrorListeners(e.getOffendingToken(), msg, std::make_exception_ptr(e));
}

void Sy2CustomErrorStrategy::reportUnwantedToken(antlr4::Parser *recognizer)
{
	if (inErrorRecoveryMode(recognizer)) 
	{
		return;
	}

	beginErrorCondition(recognizer);

	Token *t = recognizer->getCurrentToken();
	std::string tokenName = getTokenErrorDisplay(t);
	misc::IntervalSet expecting = getExpectedTokens(recognizer);

	std::string msg = "extraneous input " + tokenName + " expecting " + expecting.toString(recognizer->getVocabulary());
	recognizer->notifyErrorListeners(t, msg, make_exception_ptr(UnwantedTokenException(recognizer)));
}

void Sy2CustomErrorStrategy::reportMissingToken(antlr4::Parser *recognizer)
{
	if (inErrorRecoveryMode(recognizer)) {
		return;
	}

	beginErrorCondition(recognizer);

	Token *t = recognizer->getCurrentToken();
	misc::IntervalSet expecting = getExpectedTokens(recognizer);
	std::string expectedText = expecting.toString(recognizer->getVocabulary());

	std::string msg = "missing " + expectedText + " at " + getTokenErrorDisplay(t);
	recognizer->notifyErrorListeners(t, msg, make_exception_ptr(MissingTokenException(recognizer)));
}
