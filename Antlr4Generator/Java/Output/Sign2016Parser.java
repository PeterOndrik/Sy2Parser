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
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public TerminalNode BOOL_TYPE() { return getToken(Sign2016Parser.BOOL_TYPE, 0); }
		public ArraySizeContext arraySize() {
			return getRuleContext(ArraySizeContext.class,0);
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(41);
			typeQualifier();
			setState(42);
			match(BOOL_TYPE);
			setState(43);
			arraySize();
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
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public TerminalNode INT_TYPE() { return getToken(Sign2016Parser.INT_TYPE, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public ArraySizeContext arraySize() {
			return getRuleContext(ArraySizeContext.class,0);
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(45);
			typeQualifier();
			setState(46);
			match(INT_TYPE);
			setState(47);
			size();
			setState(48);
			arraySize();
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
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public TerminalNode UINT_TYPE() { return getToken(Sign2016Parser.UINT_TYPE, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public ArraySizeContext arraySize() {
			return getRuleContext(ArraySizeContext.class,0);
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(50);
			typeQualifier();
			setState(51);
			match(UINT_TYPE);
			setState(52);
			size();
			setState(53);
			arraySize();
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
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public TerminalNode FLOAT_TYPE() { return getToken(Sign2016Parser.FLOAT_TYPE, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public ArraySizeContext arraySize() {
			return getRuleContext(ArraySizeContext.class,0);
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(55);
			typeQualifier();
			setState(56);
			match(FLOAT_TYPE);
			setState(57);
			size();
			setState(58);
			arraySize();
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
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public TerminalNode STRUCT_TYPE() { return getToken(Sign2016Parser.STRUCT_TYPE, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public ArraySizeContext arraySize() {
			return getRuleContext(ArraySizeContext.class,0);
		}
		public TerminalNode SEP() { return getToken(Sign2016Parser.SEP, 0); }
		public TerminalNode ID() { return getToken(Sign2016Parser.ID, 0); }
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(60);
			typeQualifier();
			setState(61);
			match(STRUCT_TYPE);
			setState(62);
			size();
			setState(63);
			arraySize();
			setState(64);
			match(SEP);
			setState(65);
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
		public TypeQualifierContext typeQualifier() {
			return getRuleContext(TypeQualifierContext.class,0);
		}
		public TerminalNode PTR_TYPE() { return getToken(Sign2016Parser.PTR_TYPE, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public ArraySizeContext arraySize() {
			return getRuleContext(ArraySizeContext.class,0);
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(67);
			typeQualifier();
			setState(68);
			match(PTR_TYPE);
			setState(69);
			size();
			setState(70);
			arraySize();
			setState(71);
			match(SEP);
			setState(80);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				{
				setState(72);
				voidType();
				}
				break;
			case 2:
				{
				setState(73);
				boolType();
				}
				break;
			case 3:
				{
				setState(74);
				intType();
				}
				break;
			case 4:
				{
				setState(75);
				uintType();
				}
				break;
			case 5:
				{
				setState(76);
				floatType();
				}
				break;
			case 6:
				{
				setState(77);
				structType();
				}
				break;
			case 7:
				{
				setState(78);
				ptrType();
				}
				break;
			case 8:
				{
				setState(79);
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
			setState(82);
			match(FB);
			setState(83);
			match(SEP);
			setState(84);
			returnType();
			setState(87); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(85);
					match(SEP);
					setState(86);
					paramType();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(89); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			setState(91);
			match(SEP);
			setState(92);
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
			setState(101);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				{
				setState(94);
				voidType();
				}
				break;
			case 2:
				{
				setState(95);
				boolType();
				}
				break;
			case 3:
				{
				setState(96);
				intType();
				}
				break;
			case 4:
				{
				setState(97);
				uintType();
				}
				break;
			case 5:
				{
				setState(98);
				floatType();
				}
				break;
			case 6:
				{
				setState(99);
				structType();
				}
				break;
			case 7:
				{
				setState(100);
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
			setState(110);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				{
				setState(103);
				voidType();
				}
				break;
			case 2:
				{
				setState(104);
				boolType();
				}
				break;
			case 3:
				{
				setState(105);
				intType();
				}
				break;
			case 4:
				{
				setState(106);
				uintType();
				}
				break;
			case 5:
				{
				setState(107);
				floatType();
				}
				break;
			case 6:
				{
				setState(108);
				structType();
				}
				break;
			case 7:
				{
				setState(109);
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
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(114);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE_QUALIFIER) {
				{
				setState(112);
				match(TYPE_QUALIFIER);
				setState(113);
				match(SEP);
				}
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
			setState(116);
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
		public List<TerminalNode> SEP() { return getTokens(Sign2016Parser.SEP); }
		public TerminalNode SEP(int i) {
			return getToken(Sign2016Parser.SEP, i);
		}
		public List<TerminalNode> ARRAY_SIZE() { return getTokens(Sign2016Parser.ARRAY_SIZE); }
		public TerminalNode ARRAY_SIZE(int i) {
			return getToken(Sign2016Parser.ARRAY_SIZE, i);
		}
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
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(122);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(118);
					match(SEP);
					setState(119);
					match(ARRAY_SIZE);
					}
					} 
				}
				setState(124);
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\20\u0080\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\3\2\3\2\3\2\3\2\3\2\3\2\3\2"+
		"\5\2&\n\2\3\2\3\2\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\6\3\6"+
		"\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3"+
		"\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\tS\n\t\3\n\3\n\3\n\3\n\3"+
		"\n\6\nZ\n\n\r\n\16\n[\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5"+
		"\13h\n\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\fq\n\f\3\r\3\r\5\ru\n\r\3\16\3"+
		"\16\3\17\3\17\7\17{\n\17\f\17\16\17~\13\17\3\17\2\2\20\2\4\6\b\n\f\16"+
		"\20\22\24\26\30\32\34\2\2\2\u008d\2%\3\2\2\2\4)\3\2\2\2\6+\3\2\2\2\b/"+
		"\3\2\2\2\n\64\3\2\2\2\f9\3\2\2\2\16>\3\2\2\2\20E\3\2\2\2\22T\3\2\2\2\24"+
		"g\3\2\2\2\26p\3\2\2\2\30t\3\2\2\2\32v\3\2\2\2\34|\3\2\2\2\36&\5\6\4\2"+
		"\37&\5\b\5\2 &\5\n\6\2!&\5\f\7\2\"&\5\16\b\2#&\5\20\t\2$&\5\22\n\2%\36"+
		"\3\2\2\2%\37\3\2\2\2% \3\2\2\2%!\3\2\2\2%\"\3\2\2\2%#\3\2\2\2%$\3\2\2"+
		"\2&\'\3\2\2\2\'(\7\2\2\3(\3\3\2\2\2)*\7\4\2\2*\5\3\2\2\2+,\5\30\r\2,-"+
		"\7\5\2\2-.\5\34\17\2.\7\3\2\2\2/\60\5\30\r\2\60\61\7\6\2\2\61\62\5\32"+
		"\16\2\62\63\5\34\17\2\63\t\3\2\2\2\64\65\5\30\r\2\65\66\7\7\2\2\66\67"+
		"\5\32\16\2\678\5\34\17\28\13\3\2\2\29:\5\30\r\2:;\7\b\2\2;<\5\32\16\2"+
		"<=\5\34\17\2=\r\3\2\2\2>?\5\30\r\2?@\7\t\2\2@A\5\32\16\2AB\5\34\17\2B"+
		"C\7\17\2\2CD\7\20\2\2D\17\3\2\2\2EF\5\30\r\2FG\7\n\2\2GH\5\32\16\2HI\5"+
		"\34\17\2IR\7\17\2\2JS\5\4\3\2KS\5\6\4\2LS\5\b\5\2MS\5\n\6\2NS\5\f\7\2"+
		"OS\5\16\b\2PS\5\20\t\2QS\5\22\n\2RJ\3\2\2\2RK\3\2\2\2RL\3\2\2\2RM\3\2"+
		"\2\2RN\3\2\2\2RO\3\2\2\2RP\3\2\2\2RQ\3\2\2\2S\21\3\2\2\2TU\7\13\2\2UV"+
		"\7\17\2\2VY\5\24\13\2WX\7\17\2\2XZ\5\26\f\2YW\3\2\2\2Z[\3\2\2\2[Y\3\2"+
		"\2\2[\\\3\2\2\2\\]\3\2\2\2]^\7\17\2\2^_\7\f\2\2_\23\3\2\2\2`h\5\4\3\2"+
		"ah\5\6\4\2bh\5\b\5\2ch\5\n\6\2dh\5\f\7\2eh\5\16\b\2fh\5\20\t\2g`\3\2\2"+
		"\2ga\3\2\2\2gb\3\2\2\2gc\3\2\2\2gd\3\2\2\2ge\3\2\2\2gf\3\2\2\2h\25\3\2"+
		"\2\2iq\5\4\3\2jq\5\6\4\2kq\5\b\5\2lq\5\n\6\2mq\5\f\7\2nq\5\16\b\2oq\5"+
		"\20\t\2pi\3\2\2\2pj\3\2\2\2pk\3\2\2\2pl\3\2\2\2pm\3\2\2\2pn\3\2\2\2po"+
		"\3\2\2\2q\27\3\2\2\2rs\7\3\2\2su\7\17\2\2tr\3\2\2\2tu\3\2\2\2u\31\3\2"+
		"\2\2vw\7\16\2\2w\33\3\2\2\2xy\7\17\2\2y{\7\r\2\2zx\3\2\2\2{~\3\2\2\2|"+
		"z\3\2\2\2|}\3\2\2\2}\35\3\2\2\2~|\3\2\2\2\t%R[gpt|";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}