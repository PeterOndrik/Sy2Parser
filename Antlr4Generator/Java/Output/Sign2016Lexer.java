// Generated from Sign2016.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class Sign2016Lexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		TYPE_QUALIFIER=1, VOID_TYPE=2, BOOL_TYPE=3, INT_TYPE=4, UINT_TYPE=5, FLOAT_TYPE=6, 
		STRUCT_TYPE=7, PTR_TYPE=8, FB=9, FE=10, ARRAY_SIZE=11, SIZE=12, SEP=13, 
		ID=14;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"TYPE_QUALIFIER", "VOID_TYPE", "BOOL_TYPE", "INT_TYPE", "UINT_TYPE", "FLOAT_TYPE", 
		"STRUCT_TYPE", "PTR_TYPE", "FB", "FE", "ARRAY_SIZE", "SIZE", "SEP", "ID", 
		"CHAR"
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


		int afterSize = 0;
		int isStruct = 0;


	public Sign2016Lexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Sign2016.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	@Override
	public void action(RuleContext _localctx, int ruleIndex, int actionIndex) {
		switch (ruleIndex) {
		case 3:
			INT_TYPE_action((RuleContext)_localctx, actionIndex);
			break;
		case 4:
			UINT_TYPE_action((RuleContext)_localctx, actionIndex);
			break;
		case 5:
			FLOAT_TYPE_action((RuleContext)_localctx, actionIndex);
			break;
		case 6:
			STRUCT_TYPE_action((RuleContext)_localctx, actionIndex);
			break;
		case 7:
			PTR_TYPE_action((RuleContext)_localctx, actionIndex);
			break;
		case 11:
			SIZE_action((RuleContext)_localctx, actionIndex);
			break;
		case 13:
			ID_action((RuleContext)_localctx, actionIndex);
			break;
		}
	}
	private void INT_TYPE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 0:
			 afterSize = 0; 
			break;
		}
	}
	private void UINT_TYPE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 1:
			 afterSize = 0; 
			break;
		}
	}
	private void FLOAT_TYPE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 2:
			 afterSize = 0; 
			break;
		}
	}
	private void STRUCT_TYPE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 3:
			 afterSize = 0; isStruct++; 
			break;
		}
	}
	private void PTR_TYPE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 4:
			 afterSize = 0; 
			break;
		}
	}
	private void SIZE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 5:
			 afterSize++; 
			break;
		}
	}
	private void ID_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 6:
			 isStruct = 0 ; 
			break;
		}
	}
	@Override
	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 10:
			return ARRAY_SIZE_sempred((RuleContext)_localctx, predIndex);
		case 13:
			return ID_sempred((RuleContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean ARRAY_SIZE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return  afterSize > 0 ;
		}
		return true;
	}
	private boolean ID_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return  isStruct > 0 ;
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\20W\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\3\2\3\3\3\3\3\4"+
		"\3\4\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\b\3\b\3\b\3\t\3\t\3"+
		"\t\3\t\3\t\3\t\3\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\r\6\rF\n\r\r\r"+
		"\16\rG\3\r\3\r\3\16\3\16\3\17\6\17O\n\17\r\17\16\17P\3\17\3\17\3\17\3"+
		"\20\3\20\2\2\21\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31"+
		"\16\33\17\35\20\37\2\3\2\4\3\2\62;\f\2,,..\60\60\62<>>@@C\\aac|\u0080"+
		"\u0080\2W\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2"+
		"\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27"+
		"\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\3!\3\2\2\2\5#\3\2\2\2"+
		"\7%\3\2\2\2\t\'\3\2\2\2\13*\3\2\2\2\r/\3\2\2\2\17\62\3\2\2\2\21\65\3\2"+
		"\2\2\23;\3\2\2\2\25>\3\2\2\2\27A\3\2\2\2\31E\3\2\2\2\33K\3\2\2\2\35N\3"+
		"\2\2\2\37U\3\2\2\2!\"\7E\2\2\"\4\3\2\2\2#$\7X\2\2$\6\3\2\2\2%&\7D\2\2"+
		"&\b\3\2\2\2\'(\7K\2\2()\b\5\2\2)\n\3\2\2\2*+\7W\2\2+,\7K\2\2,-\3\2\2\2"+
		"-.\b\6\3\2.\f\3\2\2\2/\60\7H\2\2\60\61\b\7\4\2\61\16\3\2\2\2\62\63\7U"+
		"\2\2\63\64\b\b\5\2\64\20\3\2\2\2\65\66\7R\2\2\66\67\7V\2\2\678\7T\2\2"+
		"89\3\2\2\29:\b\t\6\2:\22\3\2\2\2;<\7H\2\2<=\7D\2\2=\24\3\2\2\2>?\7H\2"+
		"\2?@\7G\2\2@\26\3\2\2\2AB\5\31\r\2BC\6\f\2\2C\30\3\2\2\2DF\t\2\2\2ED\3"+
		"\2\2\2FG\3\2\2\2GE\3\2\2\2GH\3\2\2\2HI\3\2\2\2IJ\b\r\7\2J\32\3\2\2\2K"+
		"L\7/\2\2L\34\3\2\2\2MO\5\37\20\2NM\3\2\2\2OP\3\2\2\2PN\3\2\2\2PQ\3\2\2"+
		"\2QR\3\2\2\2RS\6\17\3\2ST\b\17\b\2T\36\3\2\2\2UV\t\3\2\2V \3\2\2\2\5\2"+
		"GP\t\3\5\2\3\6\3\3\7\4\3\b\5\3\t\6\3\r\7\3\17\b";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}