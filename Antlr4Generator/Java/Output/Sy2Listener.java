// Generated from Sy2.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link Sy2Parser}.
 */
public interface Sy2Listener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#file}.
	 * @param ctx the parse tree
	 */
	void enterFile(Sy2Parser.FileContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#file}.
	 * @param ctx the parse tree
	 */
	void exitFile(Sy2Parser.FileContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#command}.
	 * @param ctx the parse tree
	 */
	void enterCommand(Sy2Parser.CommandContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#command}.
	 * @param ctx the parse tree
	 */
	void exitCommand(Sy2Parser.CommandContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#keyword}.
	 * @param ctx the parse tree
	 */
	void enterKeyword(Sy2Parser.KeywordContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#keyword}.
	 * @param ctx the parse tree
	 */
	void exitKeyword(Sy2Parser.KeywordContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#cmdValue}.
	 * @param ctx the parse tree
	 */
	void enterCmdValue(Sy2Parser.CmdValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#cmdValue}.
	 * @param ctx the parse tree
	 */
	void exitCmdValue(Sy2Parser.CmdValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#symbol}.
	 * @param ctx the parse tree
	 */
	void enterSymbol(Sy2Parser.SymbolContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#symbol}.
	 * @param ctx the parse tree
	 */
	void exitSymbol(Sy2Parser.SymbolContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(Sy2Parser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(Sy2Parser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#name}.
	 * @param ctx the parse tree
	 */
	void enterName(Sy2Parser.NameContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#name}.
	 * @param ctx the parse tree
	 */
	void exitName(Sy2Parser.NameContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#bitmask}.
	 * @param ctx the parse tree
	 */
	void enterBitmask(Sy2Parser.BitmaskContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#bitmask}.
	 * @param ctx the parse tree
	 */
	void exitBitmask(Sy2Parser.BitmaskContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#offset}.
	 * @param ctx the parse tree
	 */
	void enterOffset(Sy2Parser.OffsetContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#offset}.
	 * @param ctx the parse tree
	 */
	void exitOffset(Sy2Parser.OffsetContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#address}.
	 * @param ctx the parse tree
	 */
	void enterAddress(Sy2Parser.AddressContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#address}.
	 * @param ctx the parse tree
	 */
	void exitAddress(Sy2Parser.AddressContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#enumValue}.
	 * @param ctx the parse tree
	 */
	void enterEnumValue(Sy2Parser.EnumValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#enumValue}.
	 * @param ctx the parse tree
	 */
	void exitEnumValue(Sy2Parser.EnumValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link Sy2Parser#signature}.
	 * @param ctx the parse tree
	 */
	void enterSignature(Sy2Parser.SignatureContext ctx);
	/**
	 * Exit a parse tree produced by {@link Sy2Parser#signature}.
	 * @param ctx the parse tree
	 */
	void exitSignature(Sy2Parser.SignatureContext ctx);
}