// Generated from Sy2.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class Sy2Lexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		KEYWORD=1, CMD_VALUE=2, TYPE=3, ID=4, BITMASK=5, OFFSET=6, ADDRESS=7, 
		ENUM_VALUE=8, SIGNATURE=9, BIT=10, STRUCT=11, UNION=12, ENUM=13, PROC=14, 
		DATA=15, LINE_COMMENT=16, WS=17, NL=18;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"KEYWORD", "CMD_VALUE", "TYPE", "ID", "BITMASK", "OFFSET", "ADDRESS", 
		"ENUM_VALUE", "SIGNATURE", "BIT", "STRUCT", "UNION", "ENUM", "PROC", "DATA", 
		"LINE_COMMENT", "WS", "NL", "NUMBER", "CHAR"
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


		int tokenPos = 0;
		int symPosType = 0;	// 0 - BITMASK, 1 - OFFSET, 2 - ADDRESS, 3 - VALUE


	public Sy2Lexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Sy2.g4"; }

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
		case 0:
			KEYWORD_action((RuleContext)_localctx, actionIndex);
			break;
		case 1:
			CMD_VALUE_action((RuleContext)_localctx, actionIndex);
			break;
		case 2:
			TYPE_action((RuleContext)_localctx, actionIndex);
			break;
		case 3:
			ID_action((RuleContext)_localctx, actionIndex);
			break;
		case 4:
			BITMASK_action((RuleContext)_localctx, actionIndex);
			break;
		case 5:
			OFFSET_action((RuleContext)_localctx, actionIndex);
			break;
		case 6:
			ADDRESS_action((RuleContext)_localctx, actionIndex);
			break;
		case 7:
			ENUM_VALUE_action((RuleContext)_localctx, actionIndex);
			break;
		case 8:
			SIGNATURE_action((RuleContext)_localctx, actionIndex);
			break;
		}
	}
	private void KEYWORD_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 0:
			 tokenPos++; 
			break;
		}
	}
	private void CMD_VALUE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 1:
			 tokenPos = 0; 
			break;
		}
	}
	private void TYPE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 2:
			 tokenPos++;
																		if (getText().equals("BIT")) symPosType = 0; 
																		if (getText().equals("STRUCT") || getText().equals("UNION")) symPosType = 1; 
																		if (getText().equals("PROC") || getText().equals("DATA")) symPosType = 2; 
																		if (getText().equals("ENUM")) symPosType = 3;
																	
			break;
		}
	}
	private void ID_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 3:
			 tokenPos++; 
			break;
		}
	}
	private void BITMASK_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 4:
			 tokenPos++; 
			break;
		}
	}
	private void OFFSET_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 5:
			 tokenPos++; 
			break;
		}
	}
	private void ADDRESS_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 6:
			 tokenPos++; 
			break;
		}
	}
	private void ENUM_VALUE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 7:
			 tokenPos++; 
			break;
		}
	}
	private void SIGNATURE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 8:
			 tokenPos = 0; 
			break;
		}
	}
	@Override
	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 0:
			return KEYWORD_sempred((RuleContext)_localctx, predIndex);
		case 1:
			return CMD_VALUE_sempred((RuleContext)_localctx, predIndex);
		case 2:
			return TYPE_sempred((RuleContext)_localctx, predIndex);
		case 3:
			return ID_sempred((RuleContext)_localctx, predIndex);
		case 4:
			return BITMASK_sempred((RuleContext)_localctx, predIndex);
		case 5:
			return OFFSET_sempred((RuleContext)_localctx, predIndex);
		case 6:
			return ADDRESS_sempred((RuleContext)_localctx, predIndex);
		case 7:
			return ENUM_VALUE_sempred((RuleContext)_localctx, predIndex);
		case 8:
			return SIGNATURE_sempred((RuleContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean KEYWORD_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return  tokenPos == 0 ;
		}
		return true;
	}
	private boolean CMD_VALUE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return  tokenPos == 1 ;
		}
		return true;
	}
	private boolean TYPE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return  tokenPos == 1 ;
		}
		return true;
	}
	private boolean ID_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return  tokenPos == 2 ;
		}
		return true;
	}
	private boolean BITMASK_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 4:
			return  tokenPos == 3 && symPosType == 0 ;
		}
		return true;
	}
	private boolean OFFSET_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 5:
			return  tokenPos == 3 && symPosType == 1 ;
		}
		return true;
	}
	private boolean ADDRESS_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return  tokenPos == 3 && symPosType == 2 ;
		}
		return true;
	}
	private boolean ENUM_VALUE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return  tokenPos == 3 && symPosType == 3 ;
		}
		return true;
	}
	private boolean SIGNATURE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return  tokenPos == 4 ;
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\24\u00d0\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3"+
		"\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2"+
		"\3\2\3\2\3\2\3\2\5\2J\n\2\3\2\3\2\3\2\3\3\6\3P\n\3\r\3\16\3Q\3\3\3\3\3"+
		"\3\3\4\3\4\3\4\3\4\3\4\3\4\5\4]\n\4\3\4\3\4\3\4\3\5\6\5c\n\5\r\5\16\5"+
		"d\3\5\3\5\3\5\3\6\6\6k\n\6\r\6\16\6l\3\6\3\6\3\6\3\7\6\7s\n\7\r\7\16\7"+
		"t\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\6\t\u0086"+
		"\n\t\r\t\16\t\u0087\3\t\3\t\3\t\3\n\6\n\u008e\n\n\r\n\16\n\u008f\3\n\3"+
		"\n\3\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r"+
		"\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3"+
		"\20\3\20\3\20\3\21\3\21\7\21\u00b7\n\21\f\21\16\21\u00ba\13\21\3\21\3"+
		"\21\3\21\3\21\3\22\3\22\3\22\3\22\3\23\5\23\u00c5\n\23\3\23\3\23\6\23"+
		"\u00c9\n\23\r\23\16\23\u00ca\3\24\3\24\3\25\3\25\3\u00b8\2\26\3\3\5\4"+
		"\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22"+
		"#\23%\24\'\2)\2\3\2\6\3\2\62;\4\2\13\13\"\"\5\2\62;CHch\f\2,,..\60\60"+
		"\62<>>@@C\\aac|\u0080\u0080\2\u00de\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2"+
		"\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23"+
		"\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2"+
		"\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\3I\3\2\2\2\5O\3\2\2"+
		"\2\7\\\3\2\2\2\tb\3\2\2\2\13j\3\2\2\2\rr\3\2\2\2\17y\3\2\2\2\21\u0085"+
		"\3\2\2\2\23\u008d\3\2\2\2\25\u0094\3\2\2\2\27\u0098\3\2\2\2\31\u009f\3"+
		"\2\2\2\33\u00a5\3\2\2\2\35\u00aa\3\2\2\2\37\u00af\3\2\2\2!\u00b4\3\2\2"+
		"\2#\u00bf\3\2\2\2%\u00c8\3\2\2\2\'\u00cc\3\2\2\2)\u00ce\3\2\2\2+,\7V\2"+
		"\2,-\7G\2\2-.\7p\2\2./\7i\2\2/\60\7U\2\2\60\61\7g\2\2\61\62\7v\2\2\62"+
		"\63\7U\2\2\63\64\7k\2\2\64\65\7i\2\2\65\66\7p\2\2\66\67\7X\2\2\678\7g"+
		"\2\289\7t\2\29:\7u\2\2:;\7k\2\2;<\7q\2\2<J\7p\2\2=>\7T\2\2>?\7g\2\2?@"+
		"\7i\2\2@A\7E\2\2AB\7o\2\2BJ\7f\2\2CD\7T\2\2DE\7g\2\2EF\7i\2\2FG\7X\2\2"+
		"GH\7c\2\2HJ\7t\2\2I+\3\2\2\2I=\3\2\2\2IC\3\2\2\2JK\3\2\2\2KL\6\2\2\2L"+
		"M\b\2\2\2M\4\3\2\2\2NP\t\2\2\2ON\3\2\2\2PQ\3\2\2\2QO\3\2\2\2QR\3\2\2\2"+
		"RS\3\2\2\2ST\6\3\3\2TU\b\3\3\2U\6\3\2\2\2V]\5\25\13\2W]\5\27\f\2X]\5\31"+
		"\r\2Y]\5\33\16\2Z]\5\35\17\2[]\5\37\20\2\\V\3\2\2\2\\W\3\2\2\2\\X\3\2"+
		"\2\2\\Y\3\2\2\2\\Z\3\2\2\2\\[\3\2\2\2]^\3\2\2\2^_\6\4\4\2_`\b\4\4\2`\b"+
		"\3\2\2\2ac\5)\25\2ba\3\2\2\2cd\3\2\2\2db\3\2\2\2de\3\2\2\2ef\3\2\2\2f"+
		"g\6\5\5\2gh\b\5\5\2h\n\3\2\2\2ik\t\2\2\2ji\3\2\2\2kl\3\2\2\2lj\3\2\2\2"+
		"lm\3\2\2\2mn\3\2\2\2no\6\6\6\2op\b\6\6\2p\f\3\2\2\2qs\t\2\2\2rq\3\2\2"+
		"\2st\3\2\2\2tr\3\2\2\2tu\3\2\2\2uv\3\2\2\2vw\6\7\7\2wx\b\7\7\2x\16\3\2"+
		"\2\2yz\5\'\24\2z{\5\'\24\2{|\5\'\24\2|}\5\'\24\2}~\5\'\24\2~\177\5\'\24"+
		"\2\177\u0080\5\'\24\2\u0080\u0081\5\'\24\2\u0081\u0082\6\b\b\2\u0082\u0083"+
		"\b\b\b\2\u0083\20\3\2\2\2\u0084\u0086\t\2\2\2\u0085\u0084\3\2\2\2\u0086"+
		"\u0087\3\2\2\2\u0087\u0085\3\2\2\2\u0087\u0088\3\2\2\2\u0088\u0089\3\2"+
		"\2\2\u0089\u008a\6\t\t\2\u008a\u008b\b\t\t\2\u008b\22\3\2\2\2\u008c\u008e"+
		"\5)\25\2\u008d\u008c\3\2\2\2\u008e\u008f\3\2\2\2\u008f\u008d\3\2\2\2\u008f"+
		"\u0090\3\2\2\2\u0090\u0091\3\2\2\2\u0091\u0092\6\n\n\2\u0092\u0093\b\n"+
		"\n\2\u0093\24\3\2\2\2\u0094\u0095\7D\2\2\u0095\u0096\7K\2\2\u0096\u0097"+
		"\7V\2\2\u0097\26\3\2\2\2\u0098\u0099\7U\2\2\u0099\u009a\7V\2\2\u009a\u009b"+
		"\7T\2\2\u009b\u009c\7W\2\2\u009c\u009d\7E\2\2\u009d\u009e\7V\2\2\u009e"+
		"\30\3\2\2\2\u009f\u00a0\7W\2\2\u00a0\u00a1\7P\2\2\u00a1\u00a2\7K\2\2\u00a2"+
		"\u00a3\7Q\2\2\u00a3\u00a4\7P\2\2\u00a4\32\3\2\2\2\u00a5\u00a6\7G\2\2\u00a6"+
		"\u00a7\7P\2\2\u00a7\u00a8\7W\2\2\u00a8\u00a9\7O\2\2\u00a9\34\3\2\2\2\u00aa"+
		"\u00ab\7R\2\2\u00ab\u00ac\7T\2\2\u00ac\u00ad\7Q\2\2\u00ad\u00ae\7E\2\2"+
		"\u00ae\36\3\2\2\2\u00af\u00b0\7F\2\2\u00b0\u00b1\7C\2\2\u00b1\u00b2\7"+
		"V\2\2\u00b2\u00b3\7C\2\2\u00b3 \3\2\2\2\u00b4\u00b8\7%\2\2\u00b5\u00b7"+
		"\13\2\2\2\u00b6\u00b5\3\2\2\2\u00b7\u00ba\3\2\2\2\u00b8\u00b9\3\2\2\2"+
		"\u00b8\u00b6\3\2\2\2\u00b9\u00bb\3\2\2\2\u00ba\u00b8\3\2\2\2\u00bb\u00bc"+
		"\5%\23\2\u00bc\u00bd\3\2\2\2\u00bd\u00be\b\21\13\2\u00be\"\3\2\2\2\u00bf"+
		"\u00c0\t\3\2\2\u00c0\u00c1\3\2\2\2\u00c1\u00c2\b\22\f\2\u00c2$\3\2\2\2"+
		"\u00c3\u00c5\7\17\2\2\u00c4\u00c3\3\2\2\2\u00c4\u00c5\3\2\2\2\u00c5\u00c6"+
		"\3\2\2\2\u00c6\u00c9\7\f\2\2\u00c7\u00c9\7\17\2\2\u00c8\u00c4\3\2\2\2"+
		"\u00c8\u00c7\3\2\2\2\u00c9\u00ca\3\2\2\2\u00ca\u00c8\3\2\2\2\u00ca\u00cb"+
		"\3\2\2\2\u00cb&\3\2\2\2\u00cc\u00cd\t\4\2\2\u00cd(\3\2\2\2\u00ce\u00cf"+
		"\t\5\2\2\u00cf*\3\2\2\2\17\2IQ\\dlt\u0087\u008f\u00b8\u00c4\u00c8\u00ca"+
		"\r\3\2\2\3\3\3\3\4\4\3\5\5\3\6\6\3\7\7\3\b\b\3\t\t\3\n\n\2\3\2\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}