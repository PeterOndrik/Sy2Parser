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
		ENCODING=1, LITTLE_ENDIAN=2, BIG_ENDIAN=3, SIGN_VERSION=4, V2016=5, REG_VAR=6, 
		REG_CMD=7, TYPE=8, ID=9, BITMASK=10, OFFSET=11, ADDRESS=12, ENUM_VALUE=13, 
		SIGNATURE=14, BIT=15, STRUCT=16, UNION=17, ENUM=18, PROC=19, DATA=20, 
		LINE_COMMENT=21, WS=22, NL=23;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"ENCODING", "LITTLE_ENDIAN", "BIG_ENDIAN", "SIGN_VERSION", "V2016", "REG_VAR", 
		"REG_CMD", "TYPE", "ID", "BITMASK", "OFFSET", "ADDRESS", "ENUM_VALUE", 
		"SIGNATURE", "BIT", "STRUCT", "UNION", "ENUM", "PROC", "DATA", "LINE_COMMENT", 
		"WS", "NL", "NUMBER", "CHAR"
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
			ENCODING_action((RuleContext)_localctx, actionIndex);
			break;
		case 1:
			LITTLE_ENDIAN_action((RuleContext)_localctx, actionIndex);
			break;
		case 2:
			BIG_ENDIAN_action((RuleContext)_localctx, actionIndex);
			break;
		case 3:
			SIGN_VERSION_action((RuleContext)_localctx, actionIndex);
			break;
		case 4:
			V2016_action((RuleContext)_localctx, actionIndex);
			break;
		case 5:
			REG_VAR_action((RuleContext)_localctx, actionIndex);
			break;
		case 6:
			REG_CMD_action((RuleContext)_localctx, actionIndex);
			break;
		case 7:
			TYPE_action((RuleContext)_localctx, actionIndex);
			break;
		case 8:
			ID_action((RuleContext)_localctx, actionIndex);
			break;
		case 9:
			BITMASK_action((RuleContext)_localctx, actionIndex);
			break;
		case 10:
			OFFSET_action((RuleContext)_localctx, actionIndex);
			break;
		case 11:
			ADDRESS_action((RuleContext)_localctx, actionIndex);
			break;
		case 12:
			ENUM_VALUE_action((RuleContext)_localctx, actionIndex);
			break;
		case 13:
			SIGNATURE_action((RuleContext)_localctx, actionIndex);
			break;
		}
	}
	private void ENCODING_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 0:
			 tokenPos++; 
			break;
		}
	}
	private void LITTLE_ENDIAN_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 1:
			 tokenPos = 0; 
			break;
		}
	}
	private void BIG_ENDIAN_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 2:
			 tokenPos = 0; 
			break;
		}
	}
	private void SIGN_VERSION_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 3:
			 tokenPos++; 
			break;
		}
	}
	private void V2016_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 4:
			 tokenPos = 0; 
			break;
		}
	}
	private void REG_VAR_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 5:
			 tokenPos++; 
			break;
		}
	}
	private void REG_CMD_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 6:
			 tokenPos++; 
			break;
		}
	}
	private void TYPE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 7:
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
		case 8:
			 tokenPos++; 
			break;
		}
	}
	private void BITMASK_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 9:
			 tokenPos++; 
			break;
		}
	}
	private void OFFSET_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 10:
			 tokenPos++; 
			break;
		}
	}
	private void ADDRESS_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 11:
			 tokenPos++; 
			break;
		}
	}
	private void ENUM_VALUE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 12:
			 tokenPos++; 
			break;
		}
	}
	private void SIGNATURE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 13:
			 tokenPos = 0; 
			break;
		}
	}
	@Override
	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 0:
			return ENCODING_sempred((RuleContext)_localctx, predIndex);
		case 1:
			return LITTLE_ENDIAN_sempred((RuleContext)_localctx, predIndex);
		case 2:
			return BIG_ENDIAN_sempred((RuleContext)_localctx, predIndex);
		case 3:
			return SIGN_VERSION_sempred((RuleContext)_localctx, predIndex);
		case 4:
			return V2016_sempred((RuleContext)_localctx, predIndex);
		case 5:
			return REG_VAR_sempred((RuleContext)_localctx, predIndex);
		case 6:
			return REG_CMD_sempred((RuleContext)_localctx, predIndex);
		case 7:
			return TYPE_sempred((RuleContext)_localctx, predIndex);
		case 8:
			return ID_sempred((RuleContext)_localctx, predIndex);
		case 9:
			return BITMASK_sempred((RuleContext)_localctx, predIndex);
		case 10:
			return OFFSET_sempred((RuleContext)_localctx, predIndex);
		case 11:
			return ADDRESS_sempred((RuleContext)_localctx, predIndex);
		case 12:
			return ENUM_VALUE_sempred((RuleContext)_localctx, predIndex);
		case 13:
			return SIGNATURE_sempred((RuleContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean ENCODING_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return  tokenPos == 0 ;
		}
		return true;
	}
	private boolean LITTLE_ENDIAN_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return  tokenPos == 1 ;
		}
		return true;
	}
	private boolean BIG_ENDIAN_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return  tokenPos == 1 ;
		}
		return true;
	}
	private boolean SIGN_VERSION_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return  tokenPos == 0 ;
		}
		return true;
	}
	private boolean V2016_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 4:
			return  tokenPos == 1 ;
		}
		return true;
	}
	private boolean REG_VAR_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 5:
			return  tokenPos == 0 ;
		}
		return true;
	}
	private boolean REG_CMD_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return  tokenPos == 0 ;
		}
		return true;
	}
	private boolean TYPE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return  tokenPos == 1 ;
		}
		return true;
	}
	private boolean ID_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return  tokenPos == 2 ;
		}
		return true;
	}
	private boolean BITMASK_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return  tokenPos == 3 && symPosType == 0 ;
		}
		return true;
	}
	private boolean OFFSET_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 10:
			return  tokenPos == 3 && symPosType == 1 ;
		}
		return true;
	}
	private boolean ADDRESS_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 11:
			return  tokenPos == 3 && symPosType == 2 ;
		}
		return true;
	}
	private boolean ENUM_VALUE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 12:
			return  tokenPos == 3 && symPosType == 3 ;
		}
		return true;
	}
	private boolean SIGNATURE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 13:
			return  tokenPos == 4 ;
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\31\u010c\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\4\3\4"+
		"\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\6"+
		"\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u0099"+
		"\n\t\3\t\3\t\3\t\3\n\6\n\u009f\n\n\r\n\16\n\u00a0\3\n\3\n\3\n\3\13\6\13"+
		"\u00a7\n\13\r\13\16\13\u00a8\3\13\3\13\3\13\3\f\6\f\u00af\n\f\r\f\16\f"+
		"\u00b0\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\16\6"+
		"\16\u00c2\n\16\r\16\16\16\u00c3\3\16\3\16\3\16\3\17\6\17\u00ca\n\17\r"+
		"\17\16\17\u00cb\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21"+
		"\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\23"+
		"\3\24\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\26\3\26\7\26\u00f3"+
		"\n\26\f\26\16\26\u00f6\13\26\3\26\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3"+
		"\30\5\30\u0101\n\30\3\30\3\30\6\30\u0105\n\30\r\30\16\30\u0106\3\31\3"+
		"\31\3\32\3\32\3\u00f4\2\33\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25"+
		"\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\2"+
		"\63\2\3\2\6\3\2\62;\4\2\13\13\"\"\5\2\62;CHch\f\2,,..\60\60\62<>>@@C\\"+
		"aac|\u0080\u0080\2\u0117\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2"+
		"\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25"+
		"\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2"+
		"\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2"+
		"\2\2-\3\2\2\2\2/\3\2\2\2\3\65\3\2\2\2\5A\3\2\2\2\7R\3\2\2\2\t`\3\2\2\2"+
		"\13v\3\2\2\2\r~\3\2\2\2\17\u0088\3\2\2\2\21\u0098\3\2\2\2\23\u009e\3\2"+
		"\2\2\25\u00a6\3\2\2\2\27\u00ae\3\2\2\2\31\u00b5\3\2\2\2\33\u00c1\3\2\2"+
		"\2\35\u00c9\3\2\2\2\37\u00d0\3\2\2\2!\u00d4\3\2\2\2#\u00db\3\2\2\2%\u00e1"+
		"\3\2\2\2\'\u00e6\3\2\2\2)\u00eb\3\2\2\2+\u00f0\3\2\2\2-\u00fb\3\2\2\2"+
		"/\u0104\3\2\2\2\61\u0108\3\2\2\2\63\u010a\3\2\2\2\65\66\7G\2\2\66\67\7"+
		"p\2\2\678\7e\2\289\7q\2\29:\7f\2\2:;\7k\2\2;<\7p\2\2<=\7i\2\2=>\3\2\2"+
		"\2>?\6\2\2\2?@\b\2\2\2@\4\3\2\2\2AB\7n\2\2BC\7k\2\2CD\7v\2\2DE\7v\2\2"+
		"EF\7n\2\2FG\7g\2\2GH\7a\2\2HI\7g\2\2IJ\7p\2\2JK\7f\2\2KL\7k\2\2LM\7c\2"+
		"\2MN\7p\2\2NO\3\2\2\2OP\6\3\3\2PQ\b\3\3\2Q\6\3\2\2\2RS\7d\2\2ST\7k\2\2"+
		"TU\7i\2\2UV\7a\2\2VW\7g\2\2WX\7p\2\2XY\7f\2\2YZ\7k\2\2Z[\7c\2\2[\\\7p"+
		"\2\2\\]\3\2\2\2]^\6\4\4\2^_\b\4\4\2_\b\3\2\2\2`a\7V\2\2ab\7G\2\2bc\7p"+
		"\2\2cd\7i\2\2de\7U\2\2ef\7g\2\2fg\7v\2\2gh\7U\2\2hi\7k\2\2ij\7i\2\2jk"+
		"\7p\2\2kl\7X\2\2lm\7g\2\2mn\7t\2\2no\7u\2\2op\7k\2\2pq\7q\2\2qr\7p\2\2"+
		"rs\3\2\2\2st\6\5\5\2tu\b\5\5\2u\n\3\2\2\2vw\7\64\2\2wx\7\62\2\2xy\7\63"+
		"\2\2yz\78\2\2z{\3\2\2\2{|\6\6\6\2|}\b\6\6\2}\f\3\2\2\2~\177\7T\2\2\177"+
		"\u0080\7g\2\2\u0080\u0081\7i\2\2\u0081\u0082\7X\2\2\u0082\u0083\7c\2\2"+
		"\u0083\u0084\7t\2\2\u0084\u0085\3\2\2\2\u0085\u0086\6\7\7\2\u0086\u0087"+
		"\b\7\7\2\u0087\16\3\2\2\2\u0088\u0089\7T\2\2\u0089\u008a\7g\2\2\u008a"+
		"\u008b\7i\2\2\u008b\u008c\7E\2\2\u008c\u008d\7o\2\2\u008d\u008e\7f\2\2"+
		"\u008e\u008f\3\2\2\2\u008f\u0090\6\b\b\2\u0090\u0091\b\b\b\2\u0091\20"+
		"\3\2\2\2\u0092\u0099\5\37\20\2\u0093\u0099\5!\21\2\u0094\u0099\5#\22\2"+
		"\u0095\u0099\5%\23\2\u0096\u0099\5\'\24\2\u0097\u0099\5)\25\2\u0098\u0092"+
		"\3\2\2\2\u0098\u0093\3\2\2\2\u0098\u0094\3\2\2\2\u0098\u0095\3\2\2\2\u0098"+
		"\u0096\3\2\2\2\u0098\u0097\3\2\2\2\u0099\u009a\3\2\2\2\u009a\u009b\6\t"+
		"\t\2\u009b\u009c\b\t\t\2\u009c\22\3\2\2\2\u009d\u009f\5\63\32\2\u009e"+
		"\u009d\3\2\2\2\u009f\u00a0\3\2\2\2\u00a0\u009e\3\2\2\2\u00a0\u00a1\3\2"+
		"\2\2\u00a1\u00a2\3\2\2\2\u00a2\u00a3\6\n\n\2\u00a3\u00a4\b\n\n\2\u00a4"+
		"\24\3\2\2\2\u00a5\u00a7\t\2\2\2\u00a6\u00a5\3\2\2\2\u00a7\u00a8\3\2\2"+
		"\2\u00a8\u00a6\3\2\2\2\u00a8\u00a9\3\2\2\2\u00a9\u00aa\3\2\2\2\u00aa\u00ab"+
		"\6\13\13\2\u00ab\u00ac\b\13\13\2\u00ac\26\3\2\2\2\u00ad\u00af\t\2\2\2"+
		"\u00ae\u00ad\3\2\2\2\u00af\u00b0\3\2\2\2\u00b0\u00ae\3\2\2\2\u00b0\u00b1"+
		"\3\2\2\2\u00b1\u00b2\3\2\2\2\u00b2\u00b3\6\f\f\2\u00b3\u00b4\b\f\f\2\u00b4"+
		"\30\3\2\2\2\u00b5\u00b6\5\61\31\2\u00b6\u00b7\5\61\31\2\u00b7\u00b8\5"+
		"\61\31\2\u00b8\u00b9\5\61\31\2\u00b9\u00ba\5\61\31\2\u00ba\u00bb\5\61"+
		"\31\2\u00bb\u00bc\5\61\31\2\u00bc\u00bd\5\61\31\2\u00bd\u00be\6\r\r\2"+
		"\u00be\u00bf\b\r\r\2\u00bf\32\3\2\2\2\u00c0\u00c2\t\2\2\2\u00c1\u00c0"+
		"\3\2\2\2\u00c2\u00c3\3\2\2\2\u00c3\u00c1\3\2\2\2\u00c3\u00c4\3\2\2\2\u00c4"+
		"\u00c5\3\2\2\2\u00c5\u00c6\6\16\16\2\u00c6\u00c7\b\16\16\2\u00c7\34\3"+
		"\2\2\2\u00c8\u00ca\5\63\32\2\u00c9\u00c8\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cb"+
		"\u00c9\3\2\2\2\u00cb\u00cc\3\2\2\2\u00cc\u00cd\3\2\2\2\u00cd\u00ce\6\17"+
		"\17\2\u00ce\u00cf\b\17\17\2\u00cf\36\3\2\2\2\u00d0\u00d1\7D\2\2\u00d1"+
		"\u00d2\7K\2\2\u00d2\u00d3\7V\2\2\u00d3 \3\2\2\2\u00d4\u00d5\7U\2\2\u00d5"+
		"\u00d6\7V\2\2\u00d6\u00d7\7T\2\2\u00d7\u00d8\7W\2\2\u00d8\u00d9\7E\2\2"+
		"\u00d9\u00da\7V\2\2\u00da\"\3\2\2\2\u00db\u00dc\7W\2\2\u00dc\u00dd\7P"+
		"\2\2\u00dd\u00de\7K\2\2\u00de\u00df\7Q\2\2\u00df\u00e0\7P\2\2\u00e0$\3"+
		"\2\2\2\u00e1\u00e2\7G\2\2\u00e2\u00e3\7P\2\2\u00e3\u00e4\7W\2\2\u00e4"+
		"\u00e5\7O\2\2\u00e5&\3\2\2\2\u00e6\u00e7\7R\2\2\u00e7\u00e8\7T\2\2\u00e8"+
		"\u00e9\7Q\2\2\u00e9\u00ea\7E\2\2\u00ea(\3\2\2\2\u00eb\u00ec\7F\2\2\u00ec"+
		"\u00ed\7C\2\2\u00ed\u00ee\7V\2\2\u00ee\u00ef\7C\2\2\u00ef*\3\2\2\2\u00f0"+
		"\u00f4\7%\2\2\u00f1\u00f3\13\2\2\2\u00f2\u00f1\3\2\2\2\u00f3\u00f6\3\2"+
		"\2\2\u00f4\u00f5\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f5\u00f7\3\2\2\2\u00f6"+
		"\u00f4\3\2\2\2\u00f7\u00f8\5/\30\2\u00f8\u00f9\3\2\2\2\u00f9\u00fa\b\26"+
		"\20\2\u00fa,\3\2\2\2\u00fb\u00fc\t\3\2\2\u00fc\u00fd\3\2\2\2\u00fd\u00fe"+
		"\b\27\21\2\u00fe.\3\2\2\2\u00ff\u0101\7\17\2\2\u0100\u00ff\3\2\2\2\u0100"+
		"\u0101\3\2\2\2\u0101\u0102\3\2\2\2\u0102\u0105\7\f\2\2\u0103\u0105\7\17"+
		"\2\2\u0104\u0100\3\2\2\2\u0104\u0103\3\2\2\2\u0105\u0106\3\2\2\2\u0106"+
		"\u0104\3\2\2\2\u0106\u0107\3\2\2\2\u0107\60\3\2\2\2\u0108\u0109\t\4\2"+
		"\2\u0109\62\3\2\2\2\u010a\u010b\t\5\2\2\u010b\64\3\2\2\2\r\2\u0098\u00a0"+
		"\u00a8\u00b0\u00c3\u00cb\u00f4\u0100\u0104\u0106\22\3\2\2\3\3\3\3\4\4"+
		"\3\5\5\3\6\6\3\7\7\3\b\b\3\t\t\3\n\n\3\13\13\3\f\f\3\r\r\3\16\16\3\17"+
		"\17\2\3\2\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}