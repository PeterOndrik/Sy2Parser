#pragma once

#include "DefaultErrorStrategy.h"

class Sy2CustomErrorStrategy : public antlr4::DefaultErrorStrategy
{
protected:
	/// <summary>
	/// This is called by <seealso cref="#reportError"/> when the exception is a
	/// <seealso cref="NoViableAltException"/>.
	/// </summary>
	/// <seealso cref= #reportError
	/// </seealso>
	/// <param name="recognizer"> the parser instance </param>
	/// <param name="e"> the recognition exception </param>
	void reportNoViableAlternative(antlr4::Parser *recognizer, const antlr4::NoViableAltException &e) override;

	/// <summary>
	/// This is called by <seealso cref="#reportError"/> when the exception is an
	/// <seealso cref="InputMismatchException"/>.
	/// </summary>
	/// <seealso cref= #reportError
	/// </seealso>
	/// <param name="recognizer"> the parser instance </param>
	/// <param name="e"> the recognition exception </param>
	void reportInputMismatch(antlr4::Parser *recognizer, const antlr4::InputMismatchException &e) override;

	/// <summary>
	/// This is called by <seealso cref="#reportError"/> when the exception is a
	/// <seealso cref="FailedPredicateException"/>.
	/// </summary>
	/// <seealso cref= #reportError
	/// </seealso>
	/// <param name="recognizer"> the parser instance </param>
	/// <param name="e"> the recognition exception </param>
	void reportFailedPredicate(antlr4::Parser *recognizer, const antlr4::FailedPredicateException &e) override;

	/**
	 * This method is called to report a syntax error which requires the removal
	 * of a token from the input stream. At the time this method is called, the
	 * erroneous symbol is current {@code LT(1)} symbol and has not yet been
	 * removed from the input stream. When this method returns,
	 * {@code recognizer} is in error recovery mode.
	 *
	 * <p>This method is called when {@link #singleTokenDeletion} identifies
	 * single-token deletion as a viable recovery strategy for a mismatched
	 * input error.</p>
	 *
	 * <p>The default implementation simply returns if the handler is already in
	 * error recovery mode. Otherwise, it calls {@link #beginErrorCondition} to
	 * enter error recovery mode, followed by calling
	 * {@link Parser#notifyErrorListeners}.</p>
	 *
	 * @param recognizer the parser instance
	 */
	void reportUnwantedToken(antlr4::Parser *recognizer) override;

	/**
	 * This method is called to report a syntax error which requires the
	 * insertion of a missing token into the input stream. At the time this
	 * method is called, the missing token has not yet been inserted. When this
	 * method returns, {@code recognizer} is in error recovery mode.
	 *
	 * <p>This method is called when {@link #singleTokenInsertion} identifies
	 * single-token insertion as a viable recovery strategy for a mismatched
	 * input error.</p>
	 *
	 * <p>The default implementation simply returns if the handler is already in
	 * error recovery mode. Otherwise, it calls {@link #beginErrorCondition} to
	 * enter error recovery mode, followed by calling
	 * {@link Parser#notifyErrorListeners}.</p>
	 *
	 * @param recognizer the parser instance
	 */
	void reportMissingToken(antlr4::Parser *recognizer) override;
};
