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
		ENCODING=1, LITTLE_ENDIAN=2, BIG_ENDIAN=3, SIGN_VERSION=4, V2016=5, REG_VAR=6, 
		REG_CMD=7, TYPE=8, ID=9, BITMASK=10, OFFSET=11, ADDRESS=12, ENUM_VALUE=13, 
		SIGNATURE=14, BIT=15, STRUCT=16, UNION=17, ENUM=18, PROC=19, DATA=20, 
		LINE_COMMENT=21, WS=22, NL=23;
	public static final int
		RULE_file = 0, RULE_command = 1, RULE_encodingValue = 2, RULE_signValue = 3, 
		RULE_typeDefinition = 4, RULE_symbol = 5, RULE_type = 6, RULE_name = 7, 
		RULE_bitmask = 8, RULE_offset = 9, RULE_address = 10, RULE_enumValue = 11, 
		RULE_signature = 12;
	public static final String[] ruleNames = {
		"file", "command", "encodingValue", "signValue", "typeDefinition", "symbol", 
		"type", "name", "bitmask", "offset", "address", "enumValue", "signature"
	};

	private static final String[] _LITERAL_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, "'BIT'", "'STRUCT'", "'UNION'", "'ENUM'", "'PROC'", 
		"'DATA'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "ENCODING", "LITTLE_ENDIAN", "BIG_ENDIAN", "SIGN_VERSION", "V2016", 
		"REG_VAR", "REG_CMD", "TYPE", "ID", "BITMASK", "OFFSET", "ADDRESS", "ENUM_VALUE", 
		"SIGNATURE", "BIT", "STRUCT", "UNION", "ENUM", "PROC", "DATA", "LINE_COMMENT", 
		"WS", "NL"
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
			setState(28); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				setState(28);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NL:
					{
					setState(26);
					match(NL);
					}
					break;
				case ENCODING:
				case SIGN_VERSION:
				case REG_VAR:
				case REG_CMD:
					{
					setState(27);
					((FileContext)_localctx).command = command();
					((FileContext)_localctx).commands.add(((FileContext)_localctx).command);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(30); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ENCODING) | (1L << SIGN_VERSION) | (1L << REG_VAR) | (1L << REG_CMD) | (1L << NL))) != 0) );
			setState(32);
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
		public TerminalNode SIGN_VERSION() { return getToken(Sy2Parser.SIGN_VERSION, 0); }
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
			setState(50);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ENCODING:
				enterOuterAlt(_localctx, 1);
				{
				setState(34);
				match(ENCODING);
				setState(35);
				encodingValue();
				setState(36);
				match(NL);
				}
				break;
			case SIGN_VERSION:
				enterOuterAlt(_localctx, 2);
				{
				setState(38);
				match(SIGN_VERSION);
				setState(39);
				signValue();
				setState(40);
				match(NL);
				}
				break;
			case REG_VAR:
				enterOuterAlt(_localctx, 3);
				{
				setState(42);
				match(REG_VAR);
				setState(43);
				typeDefinition();
				setState(44);
				match(NL);
				}
				break;
			case REG_CMD:
				enterOuterAlt(_localctx, 4);
				{
				setState(46);
				match(REG_CMD);
				setState(47);
				symbol();
				setState(48);
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
			setState(52);
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
			setState(54);
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
			enterOuterAlt(_localctx, 1);
			{
			setState(56);
			type();
			setState(57);
			name();
			setState(61);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BITMASK:
				{
				setState(58);
				bitmask();
				}
				break;
			case OFFSET:
				{
				setState(59);
				offset();
				}
				break;
			case ENUM_VALUE:
				{
				setState(60);
				enumValue();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(63);
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

	public static class SymbolContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public NameContext name() {
			return getRuleContext(NameContext.class,0);
		}
		public AddressContext address() {
			return getRuleContext(AddressContext.class,0);
		}
		public SignatureContext signature() {
			return getRuleContext(SignatureContext.class,0);
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
		enterRule(_localctx, 10, RULE_symbol);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			type();
			setState(66);
			name();
			setState(67);
			address();
			setState(68);
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
		enterRule(_localctx, 12, RULE_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
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
		enterRule(_localctx, 14, RULE_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(72);
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
		enterRule(_localctx, 16, RULE_bitmask);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
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
		enterRule(_localctx, 18, RULE_offset);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
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
		enterRule(_localctx, 20, RULE_address);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(78);
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
		enterRule(_localctx, 22, RULE_enumValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(80);
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
		enterRule(_localctx, 24, RULE_signature);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(82);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\31W\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4"+
		"\f\t\f\4\r\t\r\4\16\t\16\3\2\3\2\6\2\37\n\2\r\2\16\2 \3\2\3\2\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3\65\n\3\3"+
		"\4\3\4\3\5\3\5\3\6\3\6\3\6\3\6\3\6\5\6@\n\6\3\6\3\6\3\7\3\7\3\7\3\7\3"+
		"\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\16\2"+
		"\2\17\2\4\6\b\n\f\16\20\22\24\26\30\32\2\3\3\2\4\5\2P\2\36\3\2\2\2\4\64"+
		"\3\2\2\2\6\66\3\2\2\2\b8\3\2\2\2\n:\3\2\2\2\fC\3\2\2\2\16H\3\2\2\2\20"+
		"J\3\2\2\2\22L\3\2\2\2\24N\3\2\2\2\26P\3\2\2\2\30R\3\2\2\2\32T\3\2\2\2"+
		"\34\37\7\31\2\2\35\37\5\4\3\2\36\34\3\2\2\2\36\35\3\2\2\2\37 \3\2\2\2"+
		" \36\3\2\2\2 !\3\2\2\2!\"\3\2\2\2\"#\7\2\2\3#\3\3\2\2\2$%\7\3\2\2%&\5"+
		"\6\4\2&\'\7\31\2\2\'\65\3\2\2\2()\7\6\2\2)*\5\b\5\2*+\7\31\2\2+\65\3\2"+
		"\2\2,-\7\b\2\2-.\5\n\6\2./\7\31\2\2/\65\3\2\2\2\60\61\7\t\2\2\61\62\5"+
		"\f\7\2\62\63\7\31\2\2\63\65\3\2\2\2\64$\3\2\2\2\64(\3\2\2\2\64,\3\2\2"+
		"\2\64\60\3\2\2\2\65\5\3\2\2\2\66\67\t\2\2\2\67\7\3\2\2\289\7\7\2\29\t"+
		"\3\2\2\2:;\5\16\b\2;?\5\20\t\2<@\5\22\n\2=@\5\24\13\2>@\5\30\r\2?<\3\2"+
		"\2\2?=\3\2\2\2?>\3\2\2\2@A\3\2\2\2AB\5\32\16\2B\13\3\2\2\2CD\5\16\b\2"+
		"DE\5\20\t\2EF\5\26\f\2FG\5\32\16\2G\r\3\2\2\2HI\7\n\2\2I\17\3\2\2\2JK"+
		"\7\13\2\2K\21\3\2\2\2LM\7\f\2\2M\23\3\2\2\2NO\7\r\2\2O\25\3\2\2\2PQ\7"+
		"\16\2\2Q\27\3\2\2\2RS\7\17\2\2S\31\3\2\2\2TU\7\20\2\2U\33\3\2\2\2\6\36"+
		" \64?";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}