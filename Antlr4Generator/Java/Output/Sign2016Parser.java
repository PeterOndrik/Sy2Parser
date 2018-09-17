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
		RULE_size = 12, RULE_arraySize = 13;
	public static final String[] ruleNames = {
		"signature", "voidType", "boolType", "intType", "uintType", "floatType", 
		"structType", "ptrType", "function", "returnType", "paramType", "typeQualifier", 
		"size", "arraySize"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'C'", "'V'", "'B'", "'I'", "'UI'", "'F'", "'S'", "'PTR'", "'FB'", 
		"'FE'", null, null, "'_'"
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
		int isSep = 0;

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
			setState(35);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				{
				setState(28);
				boolType();
				}
				break;
			case 2:
				{
				setState(29);
				intType();
				}
				break;
			case 3:
				{
				setState(30);
				uintType();
				}
				break;
			case 4:
				{
				setState(31);
				floatType();
				}
				break;
			case 5:
				{
				setState(32);
				structType();
				}
				break;
			case 6:
				{
				setState(33);
				ptrType();
				}
				break;
			case 7:
				{
				setState(34);
				function();
				}
				break;
			}
			setState(37);
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
			setState(39);
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
			setState(42);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(41);
				typeQualifier();
				}
			}

			setState(44);
			match(BOOL_TYPE);
			setState(48);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(45);
					((BoolTypeContext)_localctx).arraySize = arraySize();
					((BoolTypeContext)_localctx).arraySizes.add(((BoolTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(50);
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
			setState(52);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(51);
				typeQualifier();
				}
			}

			setState(54);
			match(INT_TYPE);
			setState(55);
			size();
			setState(59);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(56);
					((IntTypeContext)_localctx).arraySize = arraySize();
					((IntTypeContext)_localctx).arraySizes.add(((IntTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(61);
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
			setState(63);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(62);
				typeQualifier();
				}
			}

			setState(65);
			match(UINT_TYPE);
			setState(66);
			size();
			setState(70);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(67);
					((UintTypeContext)_localctx).arraySize = arraySize();
					((UintTypeContext)_localctx).arraySizes.add(((UintTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(72);
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
			setState(74);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(73);
				typeQualifier();
				}
			}

			setState(76);
			match(FLOAT_TYPE);
			setState(77);
			size();
			setState(81);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(78);
					((FloatTypeContext)_localctx).arraySize = arraySize();
					((FloatTypeContext)_localctx).arraySizes.add(((FloatTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(83);
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
		public TerminalNode ID() { return getToken(Sign2016Parser.ID, 0); }
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
			setState(85);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(84);
				typeQualifier();
				}
			}

			setState(87);
			match(STRUCT_TYPE);
			setState(88);
			size();
			setState(92);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(89);
					((StructTypeContext)_localctx).arraySize = arraySize();
					((StructTypeContext)_localctx).arraySizes.add(((StructTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(94);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			}
			setState(95);
			match(SEP);
			setState(96);
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
			setState(99);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(98);
				typeQualifier();
				}
			}

			setState(101);
			match(PTR_TYPE);
			setState(102);
			size();
			setState(106);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(103);
					((PtrTypeContext)_localctx).arraySize = arraySize();
					((PtrTypeContext)_localctx).arraySizes.add(((PtrTypeContext)_localctx).arraySize);
					}
					} 
				}
				setState(108);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			setState(109);
			match(SEP);
			setState(118);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				setState(110);
				voidType();
				}
				break;
			case 2:
				{
				setState(111);
				boolType();
				}
				break;
			case 3:
				{
				setState(112);
				intType();
				}
				break;
			case 4:
				{
				setState(113);
				uintType();
				}
				break;
			case 5:
				{
				setState(114);
				floatType();
				}
				break;
			case 6:
				{
				setState(115);
				structType();
				}
				break;
			case 7:
				{
				setState(116);
				ptrType();
				}
				break;
			case 8:
				{
				setState(117);
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
			setState(120);
			match(FB);
			setState(121);
			match(SEP);
			setState(122);
			returnType();
			setState(125); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(123);
					match(SEP);
					setState(124);
					paramType();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(127); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			setState(129);
			match(SEP);
			setState(130);
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
			setState(139);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				{
				setState(132);
				voidType();
				}
				break;
			case 2:
				{
				setState(133);
				boolType();
				}
				break;
			case 3:
				{
				setState(134);
				intType();
				}
				break;
			case 4:
				{
				setState(135);
				uintType();
				}
				break;
			case 5:
				{
				setState(136);
				floatType();
				}
				break;
			case 6:
				{
				setState(137);
				structType();
				}
				break;
			case 7:
				{
				setState(138);
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
			setState(148);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(141);
				voidType();
				}
				break;
			case 2:
				{
				setState(142);
				boolType();
				}
				break;
			case 3:
				{
				setState(143);
				intType();
				}
				break;
			case 4:
				{
				setState(144);
				uintType();
				}
				break;
			case 5:
				{
				setState(145);
				floatType();
				}
				break;
			case 6:
				{
				setState(146);
				structType();
				}
				break;
			case 7:
				{
				setState(147);
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
			setState(150);
			match(TYPE_QUALIFIER);
			setState(151);
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
			setState(153);
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
			setState(155);
			match(SEP);
			setState(156);
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\20\u00a1\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\3\2\3\2\3\2\3\2\3\2\3\2\3\2"+
		"\5\2&\n\2\3\2\3\2\3\3\3\3\3\4\5\4-\n\4\3\4\3\4\7\4\61\n\4\f\4\16\4\64"+
		"\13\4\3\5\5\5\67\n\5\3\5\3\5\3\5\7\5<\n\5\f\5\16\5?\13\5\3\6\5\6B\n\6"+
		"\3\6\3\6\3\6\7\6G\n\6\f\6\16\6J\13\6\3\7\5\7M\n\7\3\7\3\7\3\7\7\7R\n\7"+
		"\f\7\16\7U\13\7\3\b\5\bX\n\b\3\b\3\b\3\b\7\b]\n\b\f\b\16\b`\13\b\3\b\3"+
		"\b\3\b\3\t\5\tf\n\t\3\t\3\t\3\t\7\tk\n\t\f\t\16\tn\13\t\3\t\3\t\3\t\3"+
		"\t\3\t\3\t\3\t\3\t\3\t\5\ty\n\t\3\n\3\n\3\n\3\n\3\n\6\n\u0080\n\n\r\n"+
		"\16\n\u0081\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u008e"+
		"\n\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\f\u0097\n\f\3\r\3\r\3\r\3\16\3\16"+
		"\3\17\3\17\3\17\3\17\2\2\20\2\4\6\b\n\f\16\20\22\24\26\30\32\34\2\2\2"+
		"\u00b8\2%\3\2\2\2\4)\3\2\2\2\6,\3\2\2\2\b\66\3\2\2\2\nA\3\2\2\2\fL\3\2"+
		"\2\2\16W\3\2\2\2\20e\3\2\2\2\22z\3\2\2\2\24\u008d\3\2\2\2\26\u0096\3\2"+
		"\2\2\30\u0098\3\2\2\2\32\u009b\3\2\2\2\34\u009d\3\2\2\2\36&\5\6\4\2\37"+
		"&\5\b\5\2 &\5\n\6\2!&\5\f\7\2\"&\5\16\b\2#&\5\20\t\2$&\5\22\n\2%\36\3"+
		"\2\2\2%\37\3\2\2\2% \3\2\2\2%!\3\2\2\2%\"\3\2\2\2%#\3\2\2\2%$\3\2\2\2"+
		"&\'\3\2\2\2\'(\7\2\2\3(\3\3\2\2\2)*\7\4\2\2*\5\3\2\2\2+-\5\30\r\2,+\3"+
		"\2\2\2,-\3\2\2\2-.\3\2\2\2.\62\7\5\2\2/\61\5\34\17\2\60/\3\2\2\2\61\64"+
		"\3\2\2\2\62\60\3\2\2\2\62\63\3\2\2\2\63\7\3\2\2\2\64\62\3\2\2\2\65\67"+
		"\5\30\r\2\66\65\3\2\2\2\66\67\3\2\2\2\678\3\2\2\289\7\6\2\29=\5\32\16"+
		"\2:<\5\34\17\2;:\3\2\2\2<?\3\2\2\2=;\3\2\2\2=>\3\2\2\2>\t\3\2\2\2?=\3"+
		"\2\2\2@B\5\30\r\2A@\3\2\2\2AB\3\2\2\2BC\3\2\2\2CD\7\7\2\2DH\5\32\16\2"+
		"EG\5\34\17\2FE\3\2\2\2GJ\3\2\2\2HF\3\2\2\2HI\3\2\2\2I\13\3\2\2\2JH\3\2"+
		"\2\2KM\5\30\r\2LK\3\2\2\2LM\3\2\2\2MN\3\2\2\2NO\7\b\2\2OS\5\32\16\2PR"+
		"\5\34\17\2QP\3\2\2\2RU\3\2\2\2SQ\3\2\2\2ST\3\2\2\2T\r\3\2\2\2US\3\2\2"+
		"\2VX\5\30\r\2WV\3\2\2\2WX\3\2\2\2XY\3\2\2\2YZ\7\t\2\2Z^\5\32\16\2[]\5"+
		"\34\17\2\\[\3\2\2\2]`\3\2\2\2^\\\3\2\2\2^_\3\2\2\2_a\3\2\2\2`^\3\2\2\2"+
		"ab\7\17\2\2bc\7\20\2\2c\17\3\2\2\2df\5\30\r\2ed\3\2\2\2ef\3\2\2\2fg\3"+
		"\2\2\2gh\7\n\2\2hl\5\32\16\2ik\5\34\17\2ji\3\2\2\2kn\3\2\2\2lj\3\2\2\2"+
		"lm\3\2\2\2mo\3\2\2\2nl\3\2\2\2ox\7\17\2\2py\5\4\3\2qy\5\6\4\2ry\5\b\5"+
		"\2sy\5\n\6\2ty\5\f\7\2uy\5\16\b\2vy\5\20\t\2wy\5\22\n\2xp\3\2\2\2xq\3"+
		"\2\2\2xr\3\2\2\2xs\3\2\2\2xt\3\2\2\2xu\3\2\2\2xv\3\2\2\2xw\3\2\2\2y\21"+
		"\3\2\2\2z{\7\13\2\2{|\7\17\2\2|\177\5\24\13\2}~\7\17\2\2~\u0080\5\26\f"+
		"\2\177}\3\2\2\2\u0080\u0081\3\2\2\2\u0081\177\3\2\2\2\u0081\u0082\3\2"+
		"\2\2\u0082\u0083\3\2\2\2\u0083\u0084\7\17\2\2\u0084\u0085\7\f\2\2\u0085"+
		"\23\3\2\2\2\u0086\u008e\5\4\3\2\u0087\u008e\5\6\4\2\u0088\u008e\5\b\5"+
		"\2\u0089\u008e\5\n\6\2\u008a\u008e\5\f\7\2\u008b\u008e\5\16\b\2\u008c"+
		"\u008e\5\20\t\2\u008d\u0086\3\2\2\2\u008d\u0087\3\2\2\2\u008d\u0088\3"+
		"\2\2\2\u008d\u0089\3\2\2\2\u008d\u008a\3\2\2\2\u008d\u008b\3\2\2\2\u008d"+
		"\u008c\3\2\2\2\u008e\25\3\2\2\2\u008f\u0097\5\4\3\2\u0090\u0097\5\6\4"+
		"\2\u0091\u0097\5\b\5\2\u0092\u0097\5\n\6\2\u0093\u0097\5\f\7\2\u0094\u0097"+
		"\5\16\b\2\u0095\u0097\5\20\t\2\u0096\u008f\3\2\2\2\u0096\u0090\3\2\2\2"+
		"\u0096\u0091\3\2\2\2\u0096\u0092\3\2\2\2\u0096\u0093\3\2\2\2\u0096\u0094"+
		"\3\2\2\2\u0096\u0095\3\2\2\2\u0097\27\3\2\2\2\u0098\u0099\7\3\2\2\u0099"+
		"\u009a\7\17\2\2\u009a\31\3\2\2\2\u009b\u009c\7\16\2\2\u009c\33\3\2\2\2"+
		"\u009d\u009e\7\17\2\2\u009e\u009f\7\r\2\2\u009f\35\3\2\2\2\23%,\62\66"+
		"=AHLSW^elx\u0081\u008d\u0096";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}