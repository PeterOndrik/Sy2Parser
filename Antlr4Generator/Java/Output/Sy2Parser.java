// Generated from Sy2.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class Sy2Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		KEYWORD=1, CMD_VALUE=2, TYPE=3, ID=4, BITMASK=5, OFFSET=6, ADDRESS=7, 
		ENUM_VALUE=8, SIGNATURE=9, BIT=10, STRUCT=11, UNION=12, ENUM=13, PROC=14, 
		DATA=15, LINE_COMMENT=16, WS=17, NL=18;
	public static final int
		RULE_file = 0, RULE_command = 1, RULE_keyword = 2, RULE_cmdValue = 3, 
		RULE_symbol = 4, RULE_type = 5, RULE_name = 6, RULE_bitmask = 7, RULE_offset = 8, 
		RULE_address = 9, RULE_enumValue = 10, RULE_signature = 11;
	public static final String[] ruleNames = {
		"file", "command", "keyword", "cmdValue", "symbol", "type", "name", "bitmask", 
		"offset", "address", "enumValue", "signature"
	};

	private static final String[] _LITERAL_NAMES = {
		null, null, null, null, null, null, null, null, null, null, "'BIT'", "'STRUCT'", 
		"'UNION'", "'ENUM'", "'PROC'", "'DATA'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "KEYWORD", "CMD_VALUE", "TYPE", "ID", "BITMASK", "OFFSET", "ADDRESS", 
		"ENUM_VALUE", "SIGNATURE", "BIT", "STRUCT", "UNION", "ENUM", "PROC", "DATA", 
		"LINE_COMMENT", "WS", "NL"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Sy2.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }


		int tokenPos = 0;
		int symPosType = 0;	// 0 - BITMASK, 1 - OFFSET, 2 - ADDRESS, 3 - VALUE

	public Sy2Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class FileContext extends ParserRuleContext {
		public CommandContext command;
		public List<CommandContext> commands = new ArrayList<CommandContext>();
		public TerminalNode EOF() { return getToken(Sy2Parser.EOF, 0); }
		public List<TerminalNode> NL() { return getTokens(Sy2Parser.NL); }
		public TerminalNode NL(int i) {
			return getToken(Sy2Parser.NL, i);
		}
		public List<CommandContext> command() {
			return getRuleContexts(CommandContext.class);
		}
		public CommandContext command(int i) {
			return getRuleContext(CommandContext.class,i);
		}
		public FileContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_file; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterFile(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitFile(this);
		}
	}

	public final FileContext file() throws RecognitionException {
		FileContext _localctx = new FileContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_file);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(26); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				setState(26);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NL:
					{
					setState(24);
					match(NL);
					}
					break;
				case KEYWORD:
					{
					setState(25);
					((FileContext)_localctx).command = command();
					((FileContext)_localctx).commands.add(((FileContext)_localctx).command);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(28); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==KEYWORD || _la==NL );
			setState(30);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CommandContext extends ParserRuleContext {
		public TerminalNode NL() { return getToken(Sy2Parser.NL, 0); }
		public KeywordContext keyword() {
			return getRuleContext(KeywordContext.class,0);
		}
		public CmdValueContext cmdValue() {
			return getRuleContext(CmdValueContext.class,0);
		}
		public SymbolContext symbol() {
			return getRuleContext(SymbolContext.class,0);
		}
		public CommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_command; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterCommand(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitCommand(this);
		}
	}

	public final CommandContext command() throws RecognitionException {
		CommandContext _localctx = new CommandContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_command);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(38);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				setState(32);
				keyword();
				setState(33);
				cmdValue();
				}
				break;
			case 2:
				{
				setState(35);
				keyword();
				setState(36);
				symbol();
				}
				break;
			}
			setState(40);
			match(NL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class KeywordContext extends ParserRuleContext {
		public TerminalNode KEYWORD() { return getToken(Sy2Parser.KEYWORD, 0); }
		public KeywordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyword; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterKeyword(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitKeyword(this);
		}
	}

	public final KeywordContext keyword() throws RecognitionException {
		KeywordContext _localctx = new KeywordContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_keyword);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(42);
			match(KEYWORD);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CmdValueContext extends ParserRuleContext {
		public TerminalNode CMD_VALUE() { return getToken(Sy2Parser.CMD_VALUE, 0); }
		public CmdValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cmdValue; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterCmdValue(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitCmdValue(this);
		}
	}

	public final CmdValueContext cmdValue() throws RecognitionException {
		CmdValueContext _localctx = new CmdValueContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_cmdValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(44);
			match(CMD_VALUE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SymbolContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public NameContext name() {
			return getRuleContext(NameContext.class,0);
		}
		public SignatureContext signature() {
			return getRuleContext(SignatureContext.class,0);
		}
		public BitmaskContext bitmask() {
			return getRuleContext(BitmaskContext.class,0);
		}
		public OffsetContext offset() {
			return getRuleContext(OffsetContext.class,0);
		}
		public AddressContext address() {
			return getRuleContext(AddressContext.class,0);
		}
		public EnumValueContext enumValue() {
			return getRuleContext(EnumValueContext.class,0);
		}
		public SymbolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symbol; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterSymbol(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitSymbol(this);
		}
	}

	public final SymbolContext symbol() throws RecognitionException {
		SymbolContext _localctx = new SymbolContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_symbol);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(46);
			type();
			setState(47);
			name();
			setState(52);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BITMASK:
				{
				setState(48);
				bitmask();
				}
				break;
			case OFFSET:
				{
				setState(49);
				offset();
				}
				break;
			case ADDRESS:
				{
				setState(50);
				address();
				}
				break;
			case ENUM_VALUE:
				{
				setState(51);
				enumValue();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(54);
			signature();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public TerminalNode TYPE() { return getToken(Sy2Parser.TYPE, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitType(this);
		}
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(56);
			match(TYPE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NameContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(Sy2Parser.ID, 0); }
		public NameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterName(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitName(this);
		}
	}

	public final NameContext name() throws RecognitionException {
		NameContext _localctx = new NameContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(58);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BitmaskContext extends ParserRuleContext {
		public TerminalNode BITMASK() { return getToken(Sy2Parser.BITMASK, 0); }
		public BitmaskContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bitmask; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterBitmask(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitBitmask(this);
		}
	}

	public final BitmaskContext bitmask() throws RecognitionException {
		BitmaskContext _localctx = new BitmaskContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_bitmask);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(60);
			match(BITMASK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OffsetContext extends ParserRuleContext {
		public TerminalNode OFFSET() { return getToken(Sy2Parser.OFFSET, 0); }
		public OffsetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_offset; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterOffset(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitOffset(this);
		}
	}

	public final OffsetContext offset() throws RecognitionException {
		OffsetContext _localctx = new OffsetContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_offset);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(62);
			match(OFFSET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AddressContext extends ParserRuleContext {
		public TerminalNode ADDRESS() { return getToken(Sy2Parser.ADDRESS, 0); }
		public AddressContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_address; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterAddress(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitAddress(this);
		}
	}

	public final AddressContext address() throws RecognitionException {
		AddressContext _localctx = new AddressContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_address);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(64);
			match(ADDRESS);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumValueContext extends ParserRuleContext {
		public TerminalNode ENUM_VALUE() { return getToken(Sy2Parser.ENUM_VALUE, 0); }
		public EnumValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumValue; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterEnumValue(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitEnumValue(this);
		}
	}

	public final EnumValueContext enumValue() throws RecognitionException {
		EnumValueContext _localctx = new EnumValueContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_enumValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(66);
			match(ENUM_VALUE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SignatureContext extends ParserRuleContext {
		public TerminalNode SIGNATURE() { return getToken(Sy2Parser.SIGNATURE, 0); }
		public SignatureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_signature; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterSignature(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitSignature(this);
		}
	}

	public final SignatureContext signature() throws RecognitionException {
		SignatureContext _localctx = new SignatureContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_signature);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(68);
			match(SIGNATURE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\24I\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4"+
		"\f\t\f\4\r\t\r\3\2\3\2\6\2\35\n\2\r\2\16\2\36\3\2\3\2\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\5\3)\n\3\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\5\6"+
		"\67\n\6\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r"+
		"\3\r\3\r\2\2\16\2\4\6\b\n\f\16\20\22\24\26\30\2\2\2B\2\34\3\2\2\2\4(\3"+
		"\2\2\2\6,\3\2\2\2\b.\3\2\2\2\n\60\3\2\2\2\f:\3\2\2\2\16<\3\2\2\2\20>\3"+
		"\2\2\2\22@\3\2\2\2\24B\3\2\2\2\26D\3\2\2\2\30F\3\2\2\2\32\35\7\24\2\2"+
		"\33\35\5\4\3\2\34\32\3\2\2\2\34\33\3\2\2\2\35\36\3\2\2\2\36\34\3\2\2\2"+
		"\36\37\3\2\2\2\37 \3\2\2\2 !\7\2\2\3!\3\3\2\2\2\"#\5\6\4\2#$\5\b\5\2$"+
		")\3\2\2\2%&\5\6\4\2&\'\5\n\6\2\')\3\2\2\2(\"\3\2\2\2(%\3\2\2\2)*\3\2\2"+
		"\2*+\7\24\2\2+\5\3\2\2\2,-\7\3\2\2-\7\3\2\2\2./\7\4\2\2/\t\3\2\2\2\60"+
		"\61\5\f\7\2\61\66\5\16\b\2\62\67\5\20\t\2\63\67\5\22\n\2\64\67\5\24\13"+
		"\2\65\67\5\26\f\2\66\62\3\2\2\2\66\63\3\2\2\2\66\64\3\2\2\2\66\65\3\2"+
		"\2\2\678\3\2\2\289\5\30\r\29\13\3\2\2\2:;\7\5\2\2;\r\3\2\2\2<=\7\6\2\2"+
		"=\17\3\2\2\2>?\7\7\2\2?\21\3\2\2\2@A\7\b\2\2A\23\3\2\2\2BC\7\t\2\2C\25"+
		"\3\2\2\2DE\7\n\2\2E\27\3\2\2\2FG\7\13\2\2G\31\3\2\2\2\6\34\36(\66";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}