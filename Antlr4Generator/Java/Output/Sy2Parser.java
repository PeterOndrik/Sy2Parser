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
		ENCODING=1, LITTLE_ENDIAN=2, BIG_ENDIAN=3, SIGNATURE_VERSION=4, V2016=5, 
		REG_VAR=6, REG_CMD=7, BIT=8, STRUCT=9, UNION=10, ENUM=11, PROC=12, DATA=13, 
		OFFSET=14, BITMASK=15, ENUM_VALUE=16, ADDRESS=17, SIGNATURE=18, ID=19, 
		LINE_COMMENT=20, WS=21, NL=22;
	public static final int
		RULE_file = 0, RULE_command = 1, RULE_encodingValue = 2, RULE_signValue = 3, 
		RULE_typeDefinition = 4, RULE_symbol = 5, RULE_name = 6, RULE_offset = 7, 
		RULE_bitmask = 8, RULE_address = 9, RULE_enumValue = 10, RULE_signature = 11;
	public static final String[] ruleNames = {
		"file", "command", "encodingValue", "signValue", "typeDefinition", "symbol", 
		"name", "offset", "bitmask", "address", "enumValue", "signature"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'Encoding'", "'little_endian'", "'big_endian'", "'TEngSetSignVersion'", 
		"'2016'", "'RegVar'", "'RegCmd'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "ENCODING", "LITTLE_ENDIAN", "BIG_ENDIAN", "SIGNATURE_VERSION", 
		"V2016", "REG_VAR", "REG_CMD", "BIT", "STRUCT", "UNION", "ENUM", "PROC", 
		"DATA", "OFFSET", "BITMASK", "ENUM_VALUE", "ADDRESS", "SIGNATURE", "ID", 
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


		/*
		 * Determines what information about a symbol position may follow.
		 * 0 - OFFSET, 0 - BITMASK, 2 - VALUE, 3 - ADDRESS
		 * For example:
		 *                                                Offset     Bitmask
		 * Command:       RegVar    BIT    BitFieldTag    0          0x0         S64_BitFieldTag
		 * positionType:            0      0              0          0           0
		 *
		 *                                                Offset
		 * Command:       RegVar    STRUCT PointTag       0           S64_PointTag
		 * positionType:            0      0              0           0
		 *
		 *                                                Value
		 * Command:       RegVar    ENUM   ColorTag_BLACK -1          I32
		 * positionType:                                  3
		 */
		int positionType = 0;		

		/*
		 * Determines if a token may be an identifier or a signature. The lexer rule to seach an identifier is very versatile.
		 * These all is for the better error messages.
		 * 0 - command type, 1 - symbol or typedef type, 2 - ID, 3 - position, 4 - SIGNATURE
		 */	 
		int searchFor = 0;	

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
				case ENCODING:
				case SIGNATURE_VERSION:
				case REG_VAR:
				case REG_CMD:
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
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ENCODING) | (1L << SIGNATURE_VERSION) | (1L << REG_VAR) | (1L << REG_CMD) | (1L << NL))) != 0) );
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
		public TerminalNode ENCODING() { return getToken(Sy2Parser.ENCODING, 0); }
		public EncodingValueContext encodingValue() {
			return getRuleContext(EncodingValueContext.class,0);
		}
		public TerminalNode NL() { return getToken(Sy2Parser.NL, 0); }
		public TerminalNode SIGNATURE_VERSION() { return getToken(Sy2Parser.SIGNATURE_VERSION, 0); }
		public SignValueContext signValue() {
			return getRuleContext(SignValueContext.class,0);
		}
		public TerminalNode REG_VAR() { return getToken(Sy2Parser.REG_VAR, 0); }
		public TypeDefinitionContext typeDefinition() {
			return getRuleContext(TypeDefinitionContext.class,0);
		}
		public TerminalNode REG_CMD() { return getToken(Sy2Parser.REG_CMD, 0); }
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
			setState(48);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ENCODING:
				enterOuterAlt(_localctx, 1);
				{
				setState(32);
				match(ENCODING);
				setState(33);
				encodingValue();
				setState(34);
				match(NL);
				}
				break;
			case SIGNATURE_VERSION:
				enterOuterAlt(_localctx, 2);
				{
				setState(36);
				match(SIGNATURE_VERSION);
				setState(37);
				signValue();
				setState(38);
				match(NL);
				}
				break;
			case REG_VAR:
				enterOuterAlt(_localctx, 3);
				{
				setState(40);
				match(REG_VAR);
				setState(41);
				typeDefinition();
				setState(42);
				match(NL);
				}
				break;
			case REG_CMD:
				enterOuterAlt(_localctx, 4);
				{
				setState(44);
				match(REG_CMD);
				setState(45);
				symbol();
				setState(46);
				match(NL);
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class EncodingValueContext extends ParserRuleContext {
		public TerminalNode LITTLE_ENDIAN() { return getToken(Sy2Parser.LITTLE_ENDIAN, 0); }
		public TerminalNode BIG_ENDIAN() { return getToken(Sy2Parser.BIG_ENDIAN, 0); }
		public EncodingValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_encodingValue; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterEncodingValue(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitEncodingValue(this);
		}
	}

	public final EncodingValueContext encodingValue() throws RecognitionException {
		EncodingValueContext _localctx = new EncodingValueContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_encodingValue);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(50);
			_la = _input.LA(1);
			if ( !(_la==LITTLE_ENDIAN || _la==BIG_ENDIAN) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
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

	public static class SignValueContext extends ParserRuleContext {
		public TerminalNode V2016() { return getToken(Sy2Parser.V2016, 0); }
		public SignValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_signValue; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterSignValue(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitSignValue(this);
		}
	}

	public final SignValueContext signValue() throws RecognitionException {
		SignValueContext _localctx = new SignValueContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_signValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(52);
			match(V2016);
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

	public static class TypeDefinitionContext extends ParserRuleContext {
		public TerminalNode BIT() { return getToken(Sy2Parser.BIT, 0); }
		public NameContext name() {
			return getRuleContext(NameContext.class,0);
		}
		public OffsetContext offset() {
			return getRuleContext(OffsetContext.class,0);
		}
		public BitmaskContext bitmask() {
			return getRuleContext(BitmaskContext.class,0);
		}
		public SignatureContext signature() {
			return getRuleContext(SignatureContext.class,0);
		}
		public TerminalNode STRUCT() { return getToken(Sy2Parser.STRUCT, 0); }
		public TerminalNode UNION() { return getToken(Sy2Parser.UNION, 0); }
		public TerminalNode ENUM() { return getToken(Sy2Parser.ENUM, 0); }
		public EnumValueContext enumValue() {
			return getRuleContext(EnumValueContext.class,0);
		}
		public TypeDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).enterTypeDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sy2Listener ) ((Sy2Listener)listener).exitTypeDefinition(this);
		}
	}

	public final TypeDefinitionContext typeDefinition() throws RecognitionException {
		TypeDefinitionContext _localctx = new TypeDefinitionContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_typeDefinition);
		try {
			setState(75);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BIT:
				enterOuterAlt(_localctx, 1);
				{
				setState(54);
				match(BIT);
				setState(55);
				name();
				setState(56);
				offset();
				setState(57);
				bitmask();
				setState(58);
				signature();
				}
				break;
			case STRUCT:
				enterOuterAlt(_localctx, 2);
				{
				setState(60);
				match(STRUCT);
				setState(61);
				name();
				setState(62);
				offset();
				setState(63);
				signature();
				}
				break;
			case UNION:
				enterOuterAlt(_localctx, 3);
				{
				setState(65);
				match(UNION);
				setState(66);
				name();
				setState(67);
				offset();
				setState(68);
				signature();
				}
				break;
			case ENUM:
				enterOuterAlt(_localctx, 4);
				{
				setState(70);
				match(ENUM);
				setState(71);
				name();
				setState(72);
				enumValue();
				setState(73);
				signature();
				}
				break;
			default:
				throw new NoViableAltException(this);
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
		public TerminalNode PROC() { return getToken(Sy2Parser.PROC, 0); }
		public NameContext name() {
			return getRuleContext(NameContext.class,0);
		}
		public AddressContext address() {
			return getRuleContext(AddressContext.class,0);
		}
		public SignatureContext signature() {
			return getRuleContext(SignatureContext.class,0);
		}
		public TerminalNode DATA() { return getToken(Sy2Parser.DATA, 0); }
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
		enterRule(_localctx, 10, RULE_symbol);
		try {
			setState(87);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case PROC:
				enterOuterAlt(_localctx, 1);
				{
				setState(77);
				match(PROC);
				setState(78);
				name();
				setState(79);
				address();
				setState(80);
				signature();
				}
				break;
			case DATA:
				enterOuterAlt(_localctx, 2);
				{
				setState(82);
				match(DATA);
				setState(83);
				name();
				setState(84);
				address();
				setState(85);
				signature();
				}
				break;
			default:
				throw new NoViableAltException(this);
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
			setState(89);
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
		enterRule(_localctx, 14, RULE_offset);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(91);
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
		enterRule(_localctx, 16, RULE_bitmask);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(93);
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
			setState(95);
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
			setState(97);
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
			setState(99);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\30h\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4"+
		"\f\t\f\4\r\t\r\3\2\3\2\6\2\35\n\2\r\2\16\2\36\3\2\3\2\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3\63\n\3\3\4\3\4\3"+
		"\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6"+
		"\3\6\3\6\3\6\3\6\3\6\5\6N\n\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\5\7Z\n\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\r\2\2\16"+
		"\2\4\6\b\n\f\16\20\22\24\26\30\2\3\3\2\4\5\2d\2\34\3\2\2\2\4\62\3\2\2"+
		"\2\6\64\3\2\2\2\b\66\3\2\2\2\nM\3\2\2\2\fY\3\2\2\2\16[\3\2\2\2\20]\3\2"+
		"\2\2\22_\3\2\2\2\24a\3\2\2\2\26c\3\2\2\2\30e\3\2\2\2\32\35\7\30\2\2\33"+
		"\35\5\4\3\2\34\32\3\2\2\2\34\33\3\2\2\2\35\36\3\2\2\2\36\34\3\2\2\2\36"+
		"\37\3\2\2\2\37 \3\2\2\2 !\7\2\2\3!\3\3\2\2\2\"#\7\3\2\2#$\5\6\4\2$%\7"+
		"\30\2\2%\63\3\2\2\2&\'\7\6\2\2\'(\5\b\5\2()\7\30\2\2)\63\3\2\2\2*+\7\b"+
		"\2\2+,\5\n\6\2,-\7\30\2\2-\63\3\2\2\2./\7\t\2\2/\60\5\f\7\2\60\61\7\30"+
		"\2\2\61\63\3\2\2\2\62\"\3\2\2\2\62&\3\2\2\2\62*\3\2\2\2\62.\3\2\2\2\63"+
		"\5\3\2\2\2\64\65\t\2\2\2\65\7\3\2\2\2\66\67\7\7\2\2\67\t\3\2\2\289\7\n"+
		"\2\29:\5\16\b\2:;\5\20\t\2;<\5\22\n\2<=\5\30\r\2=N\3\2\2\2>?\7\13\2\2"+
		"?@\5\16\b\2@A\5\20\t\2AB\5\30\r\2BN\3\2\2\2CD\7\f\2\2DE\5\16\b\2EF\5\20"+
		"\t\2FG\5\30\r\2GN\3\2\2\2HI\7\r\2\2IJ\5\16\b\2JK\5\26\f\2KL\5\30\r\2L"+
		"N\3\2\2\2M8\3\2\2\2M>\3\2\2\2MC\3\2\2\2MH\3\2\2\2N\13\3\2\2\2OP\7\16\2"+
		"\2PQ\5\16\b\2QR\5\24\13\2RS\5\30\r\2SZ\3\2\2\2TU\7\17\2\2UV\5\16\b\2V"+
		"W\5\24\13\2WX\5\30\r\2XZ\3\2\2\2YO\3\2\2\2YT\3\2\2\2Z\r\3\2\2\2[\\\7\25"+
		"\2\2\\\17\3\2\2\2]^\7\20\2\2^\21\3\2\2\2_`\7\21\2\2`\23\3\2\2\2ab\7\23"+
		"\2\2b\25\3\2\2\2cd\7\22\2\2d\27\3\2\2\2ef\7\24\2\2f\31\3\2\2\2\7\34\36"+
		"\62MY";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}