// Generated from Sign2016.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class Sign2016Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		TYPE_QUALIFIER=1, VOID_TYPE=2, BOOL_TYPE=3, INT_TYPE=4, UINT_TYPE=5, FLOAT_TYPE=6, 
		STRUCT_TYPE=7, PTR_TYPE=8, FB=9, FE=10, ARRAY_SIZE=11, SIZE=12, SEP=13, 
		ID=14;
	public static final int
		RULE_signature = 0, RULE_voidType = 1, RULE_boolType = 2, RULE_intType = 3, 
		RULE_uintType = 4, RULE_floatType = 5, RULE_structType = 6, RULE_ptrType = 7, 
		RULE_function = 8, RULE_returnType = 9, RULE_paramType = 10, RULE_typeQualifier = 11, 
		RULE_size = 12, RULE_arraySize = 13, RULE_name = 14;
	public static final String[] ruleNames = {
		"signature", "voidType", "boolType", "intType", "uintType", "floatType", 
		"structType", "ptrType", "function", "returnType", "paramType", "typeQualifier", 
		"size", "arraySize", "name"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'C'", "'V'", "'B'", "'I'", "'UI'", "'F'", "'S'", "'PTR'", "'FB'", 
		"'FE'", null, null, "'-'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "TYPE_QUALIFIER", "VOID_TYPE", "BOOL_TYPE", "INT_TYPE", "UINT_TYPE", 
		"FLOAT_TYPE", "STRUCT_TYPE", "PTR_TYPE", "FB", "FE", "ARRAY_SIZE", "SIZE", 
		"SEP", "ID"
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
	public String getGrammarFileName() { return "Sign2016.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }


		int afterSize = 0;
		int isStruct = 0;

	public Sign2016Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class SignatureContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(Sign2016Parser.EOF, 0); }
		public BoolTypeContext boolType() {
			return getRuleContext(BoolTypeContext.class,0);
		}
		public IntTypeContext intType() {
			return getRuleContext(IntTypeContext.class,0);
		}
		public UintTypeContext uintType() {
			return getRuleContext(UintTypeContext.class,0);
		}
		public FloatTypeContext floatType() {
			return getRuleContext(FloatTypeContext.class,0);
		}
		public StructTypeContext structType() {
			return getRuleContext(StructTypeContext.class,0);
		}
		public PtrTypeContext ptrType() {
			return getRuleContext(PtrTypeContext.class,0);
		}
		public FunctionContext function() {
			return getRuleContext(FunctionContext.class,0);
		}
		public SignatureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_signature; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterSignature(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitSignature(this);
		}
	}

	public final SignatureContext signature() throws RecognitionException {
		SignatureContext _localctx = new SignatureContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_signature);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(37);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				{
				setState(30);
				boolType();
				}
				break;
			case 2:
				{
				setState(31);
				intType();
				}
				break;
			case 3:
				{
				setState(32);
				uintType();
				}
				break;
			case 4:
				{
				setState(33);
				floatType();
				}
				break;
			case 5:
				{
				setState(34);
				structType();
				}
				break;
			case 6:
				{
				setState(35);
				ptrType();
				}
				break;
			case 7:
				{
				setState(36);
				function();
				}
				break;
			}
			setState(39);
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

	public static class VoidTypeContext extends ParserRuleContext {
		public TerminalNode VOID_TYPE() { return getToken(Sign2016Parser.VOID_TYPE, 0); }
		public VoidTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_voidType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterVoidType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitVoidType(this);
		}
	}

	public final VoidTypeContext voidType() throws RecognitionException {
		VoidTypeContext _localctx = new VoidTypeContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_voidType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(41);
			match(VOID_TYPE);
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

	public static class BoolTypeContext extends ParserRuleContext {
		public ArraySizeContext arraySize;
		public List<ArraySizeContext> arraySizes = new ArrayList<ArraySizeContext>();
		public TerminalNode BOOL_TYPE() { return getToken(Sign2016Parser.BOOL_TYPE, 0); }
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public List<ArraySizeContext> arraySize() {
			return getRuleContexts(ArraySizeContext.class);
		}
		public ArraySizeContext arraySize(int i) {
			return getRuleContext(ArraySizeContext.class,i);
		}
		public BoolTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterBoolType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitBoolType(this);
		}
	}

	public final BoolTypeContext boolType() throws RecognitionException {
		BoolTypeContext _localctx = new BoolTypeContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_boolType);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(44);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(43);
				typeQualifier();
				}
			}

			setState(46);
			match(BOOL_TYPE);
			setState(50);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(47);
					((BoolTypeContext)_localctx).arraySize = arraySize();
					((BoolTypeContext)_localctx).arraySizes.add(((BoolTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(52);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
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

	public static class IntTypeContext extends ParserRuleContext {
		public ArraySizeContext arraySize;
		public List<ArraySizeContext> arraySizes = new ArrayList<ArraySizeContext>();
		public TerminalNode INT_TYPE() { return getToken(Sign2016Parser.INT_TYPE, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public List<ArraySizeContext> arraySize() {
			return getRuleContexts(ArraySizeContext.class);
		}
		public ArraySizeContext arraySize(int i) {
			return getRuleContext(ArraySizeContext.class,i);
		}
		public IntTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterIntType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitIntType(this);
		}
	}

	public final IntTypeContext intType() throws RecognitionException {
		IntTypeContext _localctx = new IntTypeContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_intType);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(54);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(53);
				typeQualifier();
				}
			}

			setState(56);
			match(INT_TYPE);
			setState(57);
			size();
			setState(61);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(58);
					((IntTypeContext)_localctx).arraySize = arraySize();
					((IntTypeContext)_localctx).arraySizes.add(((IntTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(63);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
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

	public static class UintTypeContext extends ParserRuleContext {
		public ArraySizeContext arraySize;
		public List<ArraySizeContext> arraySizes = new ArrayList<ArraySizeContext>();
		public TerminalNode UINT_TYPE() { return getToken(Sign2016Parser.UINT_TYPE, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public List<ArraySizeContext> arraySize() {
			return getRuleContexts(ArraySizeContext.class);
		}
		public ArraySizeContext arraySize(int i) {
			return getRuleContext(ArraySizeContext.class,i);
		}
		public UintTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_uintType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterUintType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitUintType(this);
		}
	}

	public final UintTypeContext uintType() throws RecognitionException {
		UintTypeContext _localctx = new UintTypeContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_uintType);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(64);
				typeQualifier();
				}
			}

			setState(67);
			match(UINT_TYPE);
			setState(68);
			size();
			setState(72);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(69);
					((UintTypeContext)_localctx).arraySize = arraySize();
					((UintTypeContext)_localctx).arraySizes.add(((UintTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(74);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
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

	public static class FloatTypeContext extends ParserRuleContext {
		public ArraySizeContext arraySize;
		public List<ArraySizeContext> arraySizes = new ArrayList<ArraySizeContext>();
		public TerminalNode FLOAT_TYPE() { return getToken(Sign2016Parser.FLOAT_TYPE, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public List<ArraySizeContext> arraySize() {
			return getRuleContexts(ArraySizeContext.class);
		}
		public ArraySizeContext arraySize(int i) {
			return getRuleContext(ArraySizeContext.class,i);
		}
		public FloatTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_floatType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterFloatType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitFloatType(this);
		}
	}

	public final FloatTypeContext floatType() throws RecognitionException {
		FloatTypeContext _localctx = new FloatTypeContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_floatType);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(75);
				typeQualifier();
				}
			}

			setState(78);
			match(FLOAT_TYPE);
			setState(79);
			size();
			setState(83);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(80);
					((FloatTypeContext)_localctx).arraySize = arraySize();
					((FloatTypeContext)_localctx).arraySizes.add(((FloatTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(85);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
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

	public static class StructTypeContext extends ParserRuleContext {
		public ArraySizeContext arraySize;
		public List<ArraySizeContext> arraySizes = new ArrayList<ArraySizeContext>();
		public TerminalNode STRUCT_TYPE() { return getToken(Sign2016Parser.STRUCT_TYPE, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public TerminalNode SEP() { return getToken(Sign2016Parser.SEP, 0); }
		public NameContext name() {
			return getRuleContext(NameContext.class,0);
		}
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public List<ArraySizeContext> arraySize() {
			return getRuleContexts(ArraySizeContext.class);
		}
		public ArraySizeContext arraySize(int i) {
			return getRuleContext(ArraySizeContext.class,i);
		}
		public StructTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterStructType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitStructType(this);
		}
	}

	public final StructTypeContext structType() throws RecognitionException {
		StructTypeContext _localctx = new StructTypeContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_structType);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(86);
				typeQualifier();
				}
			}

			setState(89);
			match(STRUCT_TYPE);
			setState(90);
			size();
			setState(94);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(91);
					((StructTypeContext)_localctx).arraySize = arraySize();
					((StructTypeContext)_localctx).arraySizes.add(((StructTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(96);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			}
			setState(97);
			match(SEP);
			setState(98);
			name();
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

	public static class PtrTypeContext extends ParserRuleContext {
		public ArraySizeContext arraySize;
		public List<ArraySizeContext> arraySizes = new ArrayList<ArraySizeContext>();
		public TerminalNode PTR_TYPE() { return getToken(Sign2016Parser.PTR_TYPE, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public TerminalNode SEP() { return getToken(Sign2016Parser.SEP, 0); }
		public VoidTypeContext voidType() {
			return getRuleContext(VoidTypeContext.class,0);
		}
		public BoolTypeContext boolType() {
			return getRuleContext(BoolTypeContext.class,0);
		}
		public IntTypeContext intType() {
			return getRuleContext(IntTypeContext.class,0);
		}
		public UintTypeContext uintType() {
			return getRuleContext(UintTypeContext.class,0);
		}
		public FloatTypeContext floatType() {
			return getRuleContext(FloatTypeContext.class,0);
		}
		public StructTypeContext structType() {
			return getRuleContext(StructTypeContext.class,0);
		}
		public PtrTypeContext ptrType() {
			return getRuleContext(PtrTypeContext.class,0);
		}
		public FunctionContext function() {
			return getRuleContext(FunctionContext.class,0);
		}
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public List<ArraySizeContext> arraySize() {
			return getRuleContexts(ArraySizeContext.class);
		}
		public ArraySizeContext arraySize(int i) {
			return getRuleContext(ArraySizeContext.class,i);
		}
		public PtrTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ptrType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterPtrType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitPtrType(this);
		}
	}

	public final PtrTypeContext ptrType() throws RecognitionException {
		PtrTypeContext _localctx = new PtrTypeContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_ptrType);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(100);
				typeQualifier();
				}
			}

			setState(103);
			match(PTR_TYPE);
			setState(104);
			size();
			setState(108);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(105);
					((PtrTypeContext)_localctx).arraySize = arraySize();
					((PtrTypeContext)_localctx).arraySizes.add(((PtrTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(110);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			setState(111);
			match(SEP);
			setState(120);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				setState(112);
				voidType();
				}
				break;
			case 2:
				{
				setState(113);
				boolType();
				}
				break;
			case 3:
				{
				setState(114);
				intType();
				}
				break;
			case 4:
				{
				setState(115);
				uintType();
				}
				break;
			case 5:
				{
				setState(116);
				floatType();
				}
				break;
			case 6:
				{
				setState(117);
				structType();
				}
				break;
			case 7:
				{
				setState(118);
				ptrType();
				}
				break;
			case 8:
				{
				setState(119);
				function();
				}
				break;
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

	public static class FunctionContext extends ParserRuleContext {
		public TerminalNode FB() { return getToken(Sign2016Parser.FB, 0); }
		public List<TerminalNode> SEP() { return getTokens(Sign2016Parser.SEP); }
		public TerminalNode SEP(int i) {
			return getToken(Sign2016Parser.SEP, i);
		}
		public ReturnTypeContext returnType() {
			return getRuleContext(ReturnTypeContext.class,0);
		}
		public TerminalNode FE() { return getToken(Sign2016Parser.FE, 0); }
		public List<ParamTypeContext> paramType() {
			return getRuleContexts(ParamTypeContext.class);
		}
		public ParamTypeContext paramType(int i) {
			return getRuleContext(ParamTypeContext.class,i);
		}
		public FunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterFunction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitFunction(this);
		}
	}

	public final FunctionContext function() throws RecognitionException {
		FunctionContext _localctx = new FunctionContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_function);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(122);
			match(FB);
			setState(123);
			match(SEP);
			setState(124);
			returnType();
			setState(127); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(125);
					match(SEP);
					setState(126);
					paramType();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(129); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			setState(131);
			match(SEP);
			setState(132);
			match(FE);
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

	public static class ReturnTypeContext extends ParserRuleContext {
		public VoidTypeContext voidType() {
			return getRuleContext(VoidTypeContext.class,0);
		}
		public BoolTypeContext boolType() {
			return getRuleContext(BoolTypeContext.class,0);
		}
		public IntTypeContext intType() {
			return getRuleContext(IntTypeContext.class,0);
		}
		public UintTypeContext uintType() {
			return getRuleContext(UintTypeContext.class,0);
		}
		public FloatTypeContext floatType() {
			return getRuleContext(FloatTypeContext.class,0);
		}
		public StructTypeContext structType() {
			return getRuleContext(StructTypeContext.class,0);
		}
		public PtrTypeContext ptrType() {
			return getRuleContext(PtrTypeContext.class,0);
		}
		public ReturnTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_returnType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterReturnType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitReturnType(this);
		}
	}

	public final ReturnTypeContext returnType() throws RecognitionException {
		ReturnTypeContext _localctx = new ReturnTypeContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_returnType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(141);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				{
				setState(134);
				voidType();
				}
				break;
			case 2:
				{
				setState(135);
				boolType();
				}
				break;
			case 3:
				{
				setState(136);
				intType();
				}
				break;
			case 4:
				{
				setState(137);
				uintType();
				}
				break;
			case 5:
				{
				setState(138);
				floatType();
				}
				break;
			case 6:
				{
				setState(139);
				structType();
				}
				break;
			case 7:
				{
				setState(140);
				ptrType();
				}
				break;
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

	public static class ParamTypeContext extends ParserRuleContext {
		public VoidTypeContext voidType() {
			return getRuleContext(VoidTypeContext.class,0);
		}
		public BoolTypeContext boolType() {
			return getRuleContext(BoolTypeContext.class,0);
		}
		public IntTypeContext intType() {
			return getRuleContext(IntTypeContext.class,0);
		}
		public UintTypeContext uintType() {
			return getRuleContext(UintTypeContext.class,0);
		}
		public FloatTypeContext floatType() {
			return getRuleContext(FloatTypeContext.class,0);
		}
		public StructTypeContext structType() {
			return getRuleContext(StructTypeContext.class,0);
		}
		public PtrTypeContext ptrType() {
			return getRuleContext(PtrTypeContext.class,0);
		}
		public ParamTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterParamType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitParamType(this);
		}
	}

	public final ParamTypeContext paramType() throws RecognitionException {
		ParamTypeContext _localctx = new ParamTypeContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_paramType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(150);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(143);
				voidType();
				}
				break;
			case 2:
				{
				setState(144);
				boolType();
				}
				break;
			case 3:
				{
				setState(145);
				intType();
				}
				break;
			case 4:
				{
				setState(146);
				uintType();
				}
				break;
			case 5:
				{
				setState(147);
				floatType();
				}
				break;
			case 6:
				{
				setState(148);
				structType();
				}
				break;
			case 7:
				{
				setState(149);
				ptrType();
				}
				break;
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

	public static class TypeQualifierContext extends ParserRuleContext {
		public TerminalNode TYPE_QUALIFIER() { return getToken(Sign2016Parser.TYPE_QUALIFIER, 0); }
		public TerminalNode SEP() { return getToken(Sign2016Parser.SEP, 0); }
		public TypeQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeQualifier; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterTypeQualifier(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitTypeQualifier(this);
		}
	}

	public final TypeQualifierContext typeQualifier() throws RecognitionException {
		TypeQualifierContext _localctx = new TypeQualifierContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_typeQualifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(152);
			match(TYPE_QUALIFIER);
			setState(153);
			match(SEP);
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

	public static class SizeContext extends ParserRuleContext {
		public TerminalNode SIZE() { return getToken(Sign2016Parser.SIZE, 0); }
		public SizeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_size; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterSize(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitSize(this);
		}
	}

	public final SizeContext size() throws RecognitionException {
		SizeContext _localctx = new SizeContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_size);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(155);
			match(SIZE);
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

	public static class ArraySizeContext extends ParserRuleContext {
		public TerminalNode SEP() { return getToken(Sign2016Parser.SEP, 0); }
		public TerminalNode ARRAY_SIZE() { return getToken(Sign2016Parser.ARRAY_SIZE, 0); }
		public ArraySizeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arraySize; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterArraySize(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitArraySize(this);
		}
	}

	public final ArraySizeContext arraySize() throws RecognitionException {
		ArraySizeContext _localctx = new ArraySizeContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_arraySize);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(157);
			match(SEP);
			setState(158);
			match(ARRAY_SIZE);
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
		public TerminalNode ID() { return getToken(Sign2016Parser.ID, 0); }
		public NameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).enterName(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof Sign2016Listener ) ((Sign2016Listener)listener).exitName(this);
		}
	}

	public final NameContext name() throws RecognitionException {
		NameContext _localctx = new NameContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(160);
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\20\u00a5\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\3\2\3\2\3\2\3"+
		"\2\3\2\3\2\5\2(\n\2\3\2\3\2\3\3\3\3\3\4\5\4/\n\4\3\4\3\4\7\4\63\n\4\f"+
		"\4\16\4\66\13\4\3\5\5\59\n\5\3\5\3\5\3\5\7\5>\n\5\f\5\16\5A\13\5\3\6\5"+
		"\6D\n\6\3\6\3\6\3\6\7\6I\n\6\f\6\16\6L\13\6\3\7\5\7O\n\7\3\7\3\7\3\7\7"+
		"\7T\n\7\f\7\16\7W\13\7\3\b\5\bZ\n\b\3\b\3\b\3\b\7\b_\n\b\f\b\16\bb\13"+
		"\b\3\b\3\b\3\b\3\t\5\th\n\t\3\t\3\t\3\t\7\tm\n\t\f\t\16\tp\13\t\3\t\3"+
		"\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t{\n\t\3\n\3\n\3\n\3\n\3\n\6\n\u0082"+
		"\n\n\r\n\16\n\u0083\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13"+
		"\u0090\n\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\f\u0099\n\f\3\r\3\r\3\r\3\16"+
		"\3\16\3\17\3\17\3\17\3\20\3\20\3\20\2\2\21\2\4\6\b\n\f\16\20\22\24\26"+
		"\30\32\34\36\2\2\2\u00bb\2\'\3\2\2\2\4+\3\2\2\2\6.\3\2\2\2\b8\3\2\2\2"+
		"\nC\3\2\2\2\fN\3\2\2\2\16Y\3\2\2\2\20g\3\2\2\2\22|\3\2\2\2\24\u008f\3"+
		"\2\2\2\26\u0098\3\2\2\2\30\u009a\3\2\2\2\32\u009d\3\2\2\2\34\u009f\3\2"+
		"\2\2\36\u00a2\3\2\2\2 (\5\6\4\2!(\5\b\5\2\"(\5\n\6\2#(\5\f\7\2$(\5\16"+
		"\b\2%(\5\20\t\2&(\5\22\n\2\' \3\2\2\2\'!\3\2\2\2\'\"\3\2\2\2\'#\3\2\2"+
		"\2\'$\3\2\2\2\'%\3\2\2\2\'&\3\2\2\2()\3\2\2\2)*\7\2\2\3*\3\3\2\2\2+,\7"+
		"\4\2\2,\5\3\2\2\2-/\5\30\r\2.-\3\2\2\2./\3\2\2\2/\60\3\2\2\2\60\64\7\5"+
		"\2\2\61\63\5\34\17\2\62\61\3\2\2\2\63\66\3\2\2\2\64\62\3\2\2\2\64\65\3"+
		"\2\2\2\65\7\3\2\2\2\66\64\3\2\2\2\679\5\30\r\28\67\3\2\2\289\3\2\2\29"+
		":\3\2\2\2:;\7\6\2\2;?\5\32\16\2<>\5\34\17\2=<\3\2\2\2>A\3\2\2\2?=\3\2"+
		"\2\2?@\3\2\2\2@\t\3\2\2\2A?\3\2\2\2BD\5\30\r\2CB\3\2\2\2CD\3\2\2\2DE\3"+
		"\2\2\2EF\7\7\2\2FJ\5\32\16\2GI\5\34\17\2HG\3\2\2\2IL\3\2\2\2JH\3\2\2\2"+
		"JK\3\2\2\2K\13\3\2\2\2LJ\3\2\2\2MO\5\30\r\2NM\3\2\2\2NO\3\2\2\2OP\3\2"+
		"\2\2PQ\7\b\2\2QU\5\32\16\2RT\5\34\17\2SR\3\2\2\2TW\3\2\2\2US\3\2\2\2U"+
		"V\3\2\2\2V\r\3\2\2\2WU\3\2\2\2XZ\5\30\r\2YX\3\2\2\2YZ\3\2\2\2Z[\3\2\2"+
		"\2[\\\7\t\2\2\\`\5\32\16\2]_\5\34\17\2^]\3\2\2\2_b\3\2\2\2`^\3\2\2\2`"+
		"a\3\2\2\2ac\3\2\2\2b`\3\2\2\2cd\7\17\2\2de\5\36\20\2e\17\3\2\2\2fh\5\30"+
		"\r\2gf\3\2\2\2gh\3\2\2\2hi\3\2\2\2ij\7\n\2\2jn\5\32\16\2km\5\34\17\2l"+
		"k\3\2\2\2mp\3\2\2\2nl\3\2\2\2no\3\2\2\2oq\3\2\2\2pn\3\2\2\2qz\7\17\2\2"+
		"r{\5\4\3\2s{\5\6\4\2t{\5\b\5\2u{\5\n\6\2v{\5\f\7\2w{\5\16\b\2x{\5\20\t"+
		"\2y{\5\22\n\2zr\3\2\2\2zs\3\2\2\2zt\3\2\2\2zu\3\2\2\2zv\3\2\2\2zw\3\2"+
		"\2\2zx\3\2\2\2zy\3\2\2\2{\21\3\2\2\2|}\7\13\2\2}~\7\17\2\2~\u0081\5\24"+
		"\13\2\177\u0080\7\17\2\2\u0080\u0082\5\26\f\2\u0081\177\3\2\2\2\u0082"+
		"\u0083\3\2\2\2\u0083\u0081\3\2\2\2\u0083\u0084\3\2\2\2\u0084\u0085\3\2"+
		"\2\2\u0085\u0086\7\17\2\2\u0086\u0087\7\f\2\2\u0087\23\3\2\2\2\u0088\u0090"+
		"\5\4\3\2\u0089\u0090\5\6\4\2\u008a\u0090\5\b\5\2\u008b\u0090\5\n\6\2\u008c"+
		"\u0090\5\f\7\2\u008d\u0090\5\16\b\2\u008e\u0090\5\20\t\2\u008f\u0088\3"+
		"\2\2\2\u008f\u0089\3\2\2\2\u008f\u008a\3\2\2\2\u008f\u008b\3\2\2\2\u008f"+
		"\u008c\3\2\2\2\u008f\u008d\3\2\2\2\u008f\u008e\3\2\2\2\u0090\25\3\2\2"+
		"\2\u0091\u0099\5\4\3\2\u0092\u0099\5\6\4\2\u0093\u0099\5\b\5\2\u0094\u0099"+
		"\5\n\6\2\u0095\u0099\5\f\7\2\u0096\u0099\5\16\b\2\u0097\u0099\5\20\t\2"+
		"\u0098\u0091\3\2\2\2\u0098\u0092\3\2\2\2\u0098\u0093\3\2\2\2\u0098\u0094"+
		"\3\2\2\2\u0098\u0095\3\2\2\2\u0098\u0096\3\2\2\2\u0098\u0097\3\2\2\2\u0099"+
		"\27\3\2\2\2\u009a\u009b\7\3\2\2\u009b\u009c\7\17\2\2\u009c\31\3\2\2\2"+
		"\u009d\u009e\7\16\2\2\u009e\33\3\2\2\2\u009f\u00a0\7\17\2\2\u00a0\u00a1"+
		"\7\r\2\2\u00a1\35\3\2\2\2\u00a2\u00a3\7\20\2\2\u00a3\37\3\2\2\2\23\'."+
		"\648?CJNUY`gnz\u0083\u008f\u0098";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}