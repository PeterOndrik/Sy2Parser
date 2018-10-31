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
		REG_CMD=7, BIT=8, STRUCT=9, UNION=10, ENUM=11, PROC=12, DATA=13, OFFSET=14, 
		BITMASK=15, ENUM_VALUE=16, ADDRESS=17, ID=18, SIGN=19, LINE_COMMENT=20, 
		WS=21, NL=22, ANY=23;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"ENCODING", "LITTLE_ENDIAN", "BIG_ENDIAN", "SIGN_VERSION", "V2016", "REG_VAR", 
		"REG_CMD", "BIT", "STRUCT", "UNION", "ENUM", "PROC", "DATA", "OFFSET", 
		"BITMASK", "ENUM_VALUE", "ADDRESS", "ID", "SIGN", "LINE_COMMENT", "WS", 
		"NL", "ANY", "NUM", "HEX", "CHAR"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'Encoding'", "'little_endian'", "'big_endian'", "'TEngSetSignVersion'", 
		"'2016'", "'RegVar'", "'RegCmd'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "ENCODING", "LITTLE_ENDIAN", "BIG_ENDIAN", "SIGN_VERSION", "V2016", 
		"REG_VAR", "REG_CMD", "BIT", "STRUCT", "UNION", "ENUM", "PROC", "DATA", 
		"OFFSET", "BITMASK", "ENUM_VALUE", "ADDRESS", "ID", "SIGN", "LINE_COMMENT", 
		"WS", "NL", "ANY"
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
		case 5:
			REG_VAR_action((RuleContext)_localctx, actionIndex);
			break;
		case 6:
			REG_CMD_action((RuleContext)_localctx, actionIndex);
			break;
		case 7:
			BIT_action((RuleContext)_localctx, actionIndex);
			break;
		case 8:
			STRUCT_action((RuleContext)_localctx, actionIndex);
			break;
		case 9:
			UNION_action((RuleContext)_localctx, actionIndex);
			break;
		case 10:
			ENUM_action((RuleContext)_localctx, actionIndex);
			break;
		case 11:
			PROC_action((RuleContext)_localctx, actionIndex);
			break;
		case 12:
			DATA_action((RuleContext)_localctx, actionIndex);
			break;
		case 13:
			OFFSET_action((RuleContext)_localctx, actionIndex);
			break;
		case 14:
			BITMASK_action((RuleContext)_localctx, actionIndex);
			break;
		case 15:
			ENUM_VALUE_action((RuleContext)_localctx, actionIndex);
			break;
		case 16:
			ADDRESS_action((RuleContext)_localctx, actionIndex);
			break;
		case 17:
			ID_action((RuleContext)_localctx, actionIndex);
			break;
		case 21:
			NL_action((RuleContext)_localctx, actionIndex);
			break;
		case 22:
			ANY_action((RuleContext)_localctx, actionIndex);
			break;
		}
	}
	private void REG_VAR_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 0:
			 searchFor = 1; 
			break;
		}
	}
	private void REG_CMD_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 1:
			 searchFor = 1; 
			break;
		}
	}
	private void BIT_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 2:
			 positionType = 0; searchFor = 2; 
			break;
		}
	}
	private void STRUCT_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 3:
			 positionType = 0; searchFor = 2; 
			break;
		}
	}
	private void UNION_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 4:
			 positionType = 0; searchFor = 2; 
			break;
		}
	}
	private void ENUM_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 5:
			 positionType = 2; searchFor = 2; 
			break;
		}
	}
	private void PROC_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 6:
			 positionType = 3; searchFor = 2; 
			break;
		}
	}
	private void DATA_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 7:
			 positionType = 3; searchFor = 2; 
			break;
		}
	}
	private void OFFSET_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 8:
			 searchFor = 4; 
			break;
		}
	}
	private void BITMASK_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 9:
			 searchFor = 4; 
			break;
		}
	}
	private void ENUM_VALUE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 10:
			 searchFor = 4; 
			break;
		}
	}
	private void ADDRESS_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 11:
			 searchFor = 4; 
			break;
		}
	}
	private void ID_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 12:
			 searchFor = 3; 
			break;
		}
	}
	private void NL_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 13:
			 searchFor = 0; 
			break;
		}
	}
	private void ANY_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 14:
			 searchFor++; 
			break;
		}
	}
	@Override
	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 7:
			return BIT_sempred((RuleContext)_localctx, predIndex);
		case 8:
			return STRUCT_sempred((RuleContext)_localctx, predIndex);
		case 9:
			return UNION_sempred((RuleContext)_localctx, predIndex);
		case 10:
			return ENUM_sempred((RuleContext)_localctx, predIndex);
		case 11:
			return PROC_sempred((RuleContext)_localctx, predIndex);
		case 12:
			return DATA_sempred((RuleContext)_localctx, predIndex);
		case 13:
			return OFFSET_sempred((RuleContext)_localctx, predIndex);
		case 14:
			return BITMASK_sempred((RuleContext)_localctx, predIndex);
		case 15:
			return ENUM_VALUE_sempred((RuleContext)_localctx, predIndex);
		case 16:
			return ADDRESS_sempred((RuleContext)_localctx, predIndex);
		case 17:
			return ID_sempred((RuleContext)_localctx, predIndex);
		case 18:
			return SIGN_sempred((RuleContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean BIT_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return  searchFor == 1 ;
		}
		return true;
	}
	private boolean STRUCT_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return  searchFor == 1 ;
		}
		return true;
	}
	private boolean UNION_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return  searchFor == 1 ;
		}
		return true;
	}
	private boolean ENUM_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return  searchFor == 1 ;
		}
		return true;
	}
	private boolean PROC_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 4:
			return  searchFor == 1 ;
		}
		return true;
	}
	private boolean DATA_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 5:
			return  searchFor == 1 ;
		}
		return true;
	}
	private boolean OFFSET_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return  positionType == 0 ;
		}
		return true;
	}
	private boolean BITMASK_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return  positionType == 0 ;
		}
		return true;
	}
	private boolean ENUM_VALUE_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return  positionType == 2 ;
		}
		return true;
	}
	private boolean ADDRESS_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return  positionType == 3 ;
		}
		return true;
	}
	private boolean ID_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 10:
			return  searchFor == 2 ;
		}
		return true;
	}
	private boolean SIGN_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 11:
			return  searchFor == 4 ;
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\31\u0117\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3"+
		"\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5"+
		"\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3"+
		"\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\17\6\17\u00b7"+
		"\n\17\r\17\16\17\u00b8\3\17\3\17\3\17\3\20\3\20\3\20\3\20\6\20\u00c2\n"+
		"\20\r\20\16\20\u00c3\3\20\3\20\3\20\3\21\5\21\u00ca\n\21\3\21\6\21\u00cd"+
		"\n\21\r\21\16\21\u00ce\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3"+
		"\22\3\22\3\22\3\22\3\22\3\23\6\23\u00e0\n\23\r\23\16\23\u00e1\3\23\3\23"+
		"\3\23\3\24\3\24\3\24\7\24\u00ea\n\24\f\24\16\24\u00ed\13\24\3\24\3\24"+
		"\3\25\3\25\7\25\u00f3\n\25\f\25\16\25\u00f6\13\25\3\25\3\25\3\25\3\25"+
		"\3\26\3\26\3\26\3\26\3\27\5\27\u0101\n\27\3\27\3\27\6\27\u0105\n\27\r"+
		"\27\16\27\u0106\3\27\3\27\3\30\6\30\u010c\n\30\r\30\16\30\u010d\3\30\3"+
		"\30\3\31\3\31\3\32\3\32\3\33\3\33\3\u00f4\2\34\3\3\5\4\7\5\t\6\13\7\r"+
		"\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25"+
		")\26+\27-\30/\31\61\2\63\2\65\2\3\2\7\4\2\13\13\"\"\5\2\13\f\17\17\"\""+
		"\3\2\62;\5\2\62;CHch\f\2,,..\60\60\62<>>@@C\\aac|\u0080\u0080\2\u011f"+
		"\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2"+
		"\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2"+
		"\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2"+
		"\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2"+
		"\2\3\67\3\2\2\2\5@\3\2\2\2\7N\3\2\2\2\tY\3\2\2\2\13l\3\2\2\2\rq\3\2\2"+
		"\2\17z\3\2\2\2\21\u0083\3\2\2\2\23\u008a\3\2\2\2\25\u0094\3\2\2\2\27\u009d"+
		"\3\2\2\2\31\u00a5\3\2\2\2\33\u00ad\3\2\2\2\35\u00b6\3\2\2\2\37\u00bd\3"+
		"\2\2\2!\u00c9\3\2\2\2#\u00d3\3\2\2\2%\u00df\3\2\2\2\'\u00e6\3\2\2\2)\u00f0"+
		"\3\2\2\2+\u00fb\3\2\2\2-\u0104\3\2\2\2/\u010b\3\2\2\2\61\u0111\3\2\2\2"+
		"\63\u0113\3\2\2\2\65\u0115\3\2\2\2\678\7G\2\289\7p\2\29:\7e\2\2:;\7q\2"+
		"\2;<\7f\2\2<=\7k\2\2=>\7p\2\2>?\7i\2\2?\4\3\2\2\2@A\7n\2\2AB\7k\2\2BC"+
		"\7v\2\2CD\7v\2\2DE\7n\2\2EF\7g\2\2FG\7a\2\2GH\7g\2\2HI\7p\2\2IJ\7f\2\2"+
		"JK\7k\2\2KL\7c\2\2LM\7p\2\2M\6\3\2\2\2NO\7d\2\2OP\7k\2\2PQ\7i\2\2QR\7"+
		"a\2\2RS\7g\2\2ST\7p\2\2TU\7f\2\2UV\7k\2\2VW\7c\2\2WX\7p\2\2X\b\3\2\2\2"+
		"YZ\7V\2\2Z[\7G\2\2[\\\7p\2\2\\]\7i\2\2]^\7U\2\2^_\7g\2\2_`\7v\2\2`a\7"+
		"U\2\2ab\7k\2\2bc\7i\2\2cd\7p\2\2de\7X\2\2ef\7g\2\2fg\7t\2\2gh\7u\2\2h"+
		"i\7k\2\2ij\7q\2\2jk\7p\2\2k\n\3\2\2\2lm\7\64\2\2mn\7\62\2\2no\7\63\2\2"+
		"op\78\2\2p\f\3\2\2\2qr\7T\2\2rs\7g\2\2st\7i\2\2tu\7X\2\2uv\7c\2\2vw\7"+
		"t\2\2wx\3\2\2\2xy\b\7\2\2y\16\3\2\2\2z{\7T\2\2{|\7g\2\2|}\7i\2\2}~\7E"+
		"\2\2~\177\7o\2\2\177\u0080\7f\2\2\u0080\u0081\3\2\2\2\u0081\u0082\b\b"+
		"\3\2\u0082\20\3\2\2\2\u0083\u0084\7D\2\2\u0084\u0085\7K\2\2\u0085\u0086"+
		"\7V\2\2\u0086\u0087\3\2\2\2\u0087\u0088\6\t\2\2\u0088\u0089\b\t\4\2\u0089"+
		"\22\3\2\2\2\u008a\u008b\7U\2\2\u008b\u008c\7V\2\2\u008c\u008d\7T\2\2\u008d"+
		"\u008e\7W\2\2\u008e\u008f\7E\2\2\u008f\u0090\7V\2\2\u0090\u0091\3\2\2"+
		"\2\u0091\u0092\6\n\3\2\u0092\u0093\b\n\5\2\u0093\24\3\2\2\2\u0094\u0095"+
		"\7W\2\2\u0095\u0096\7P\2\2\u0096\u0097\7K\2\2\u0097\u0098\7Q\2\2\u0098"+
		"\u0099\7P\2\2\u0099\u009a\3\2\2\2\u009a\u009b\6\13\4\2\u009b\u009c\b\13"+
		"\6\2\u009c\26\3\2\2\2\u009d\u009e\7G\2\2\u009e\u009f\7P\2\2\u009f\u00a0"+
		"\7W\2\2\u00a0\u00a1\7O\2\2\u00a1\u00a2\3\2\2\2\u00a2\u00a3\6\f\5\2\u00a3"+
		"\u00a4\b\f\7\2\u00a4\30\3\2\2\2\u00a5\u00a6\7R\2\2\u00a6\u00a7\7T\2\2"+
		"\u00a7\u00a8\7Q\2\2\u00a8\u00a9\7E\2\2\u00a9\u00aa\3\2\2\2\u00aa\u00ab"+
		"\6\r\6\2\u00ab\u00ac\b\r\b\2\u00ac\32\3\2\2\2\u00ad\u00ae\7F\2\2\u00ae"+
		"\u00af\7C\2\2\u00af\u00b0\7V\2\2\u00b0\u00b1\7C\2\2\u00b1\u00b2\3\2\2"+
		"\2\u00b2\u00b3\6\16\7\2\u00b3\u00b4\b\16\t\2\u00b4\34\3\2\2\2\u00b5\u00b7"+
		"\5\61\31\2\u00b6\u00b5\3\2\2\2\u00b7\u00b8\3\2\2\2\u00b8\u00b6\3\2\2\2"+
		"\u00b8\u00b9\3\2\2\2\u00b9\u00ba\3\2\2\2\u00ba\u00bb\6\17\b\2\u00bb\u00bc"+
		"\b\17\n\2\u00bc\36\3\2\2\2\u00bd\u00be\7\62\2\2\u00be\u00bf\7z\2\2\u00bf"+
		"\u00c1\3\2\2\2\u00c0\u00c2\5\63\32\2\u00c1\u00c0\3\2\2\2\u00c2\u00c3\3"+
		"\2\2\2\u00c3\u00c1\3\2\2\2\u00c3\u00c4\3\2\2\2\u00c4\u00c5\3\2\2\2\u00c5"+
		"\u00c6\6\20\t\2\u00c6\u00c7\b\20\13\2\u00c7 \3\2\2\2\u00c8\u00ca\7/\2"+
		"\2\u00c9\u00c8\3\2\2\2\u00c9\u00ca\3\2\2\2\u00ca\u00cc\3\2\2\2\u00cb\u00cd"+
		"\5\61\31\2\u00cc\u00cb\3\2\2\2\u00cd\u00ce\3\2\2\2\u00ce\u00cc\3\2\2\2"+
		"\u00ce\u00cf\3\2\2\2\u00cf\u00d0\3\2\2\2\u00d0\u00d1\6\21\n\2\u00d1\u00d2"+
		"\b\21\f\2\u00d2\"\3\2\2\2\u00d3\u00d4\5\63\32\2\u00d4\u00d5\5\63\32\2"+
		"\u00d5\u00d6\5\63\32\2\u00d6\u00d7\5\63\32\2\u00d7\u00d8\5\63\32\2\u00d8"+
		"\u00d9\5\63\32\2\u00d9\u00da\5\63\32\2\u00da\u00db\5\63\32\2\u00db\u00dc"+
		"\6\22\13\2\u00dc\u00dd\b\22\r\2\u00dd$\3\2\2\2\u00de\u00e0\5\65\33\2\u00df"+
		"\u00de\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\u00df\3\2\2\2\u00e1\u00e2\3\2"+
		"\2\2\u00e2\u00e3\3\2\2\2\u00e3\u00e4\6\23\f\2\u00e4\u00e5\b\23\16\2\u00e5"+
		"&\3\2\2\2\u00e6\u00eb\5\65\33\2\u00e7\u00ea\7/\2\2\u00e8\u00ea\5\65\33"+
		"\2\u00e9\u00e7\3\2\2\2\u00e9\u00e8\3\2\2\2\u00ea\u00ed\3\2\2\2\u00eb\u00e9"+
		"\3\2\2\2\u00eb\u00ec\3\2\2\2\u00ec\u00ee\3\2\2\2\u00ed\u00eb\3\2\2\2\u00ee"+
		"\u00ef\6\24\r\2\u00ef(\3\2\2\2\u00f0\u00f4\7%\2\2\u00f1\u00f3\13\2\2\2"+
		"\u00f2\u00f1\3\2\2\2\u00f3\u00f6\3\2\2\2\u00f4\u00f5\3\2\2\2\u00f4\u00f2"+
		"\3\2\2\2\u00f5\u00f7\3\2\2\2\u00f6\u00f4\3\2\2\2\u00f7\u00f8\5-\27\2\u00f8"+
		"\u00f9\3\2\2\2\u00f9\u00fa\b\25\17\2\u00fa*\3\2\2\2\u00fb\u00fc\t\2\2"+
		"\2\u00fc\u00fd\3\2\2\2\u00fd\u00fe\b\26\20\2\u00fe,\3\2\2\2\u00ff\u0101"+
		"\7\17\2\2\u0100\u00ff\3\2\2\2\u0100\u0101\3\2\2\2\u0101\u0102\3\2\2\2"+
		"\u0102\u0105\7\f\2\2\u0103\u0105\7\17\2\2\u0104\u0100\3\2\2\2\u0104\u0103"+
		"\3\2\2\2\u0105\u0106\3\2\2\2\u0106\u0104\3\2\2\2\u0106\u0107\3\2\2\2\u0107"+
		"\u0108\3\2\2\2\u0108\u0109\b\27\21\2\u0109.\3\2\2\2\u010a\u010c\n\3\2"+
		"\2\u010b\u010a\3\2\2\2\u010c\u010d\3\2\2\2\u010d\u010b\3\2\2\2\u010d\u010e"+
		"\3\2\2\2\u010e\u010f\3\2\2\2\u010f\u0110\b\30\22\2\u0110\60\3\2\2\2\u0111"+
		"\u0112\t\4\2\2\u0112\62\3\2\2\2\u0113\u0114\t\5\2\2\u0114\64\3\2\2\2\u0115"+
		"\u0116\t\6\2\2\u0116\66\3\2\2\2\17\2\u00b8\u00c3\u00c9\u00ce\u00e1\u00e9"+
		"\u00eb\u00f4\u0100\u0104\u0106\u010d\23\3\7\2\3\b\3\3\t\4\3\n\5\3\13\6"+
		"\3\f\7\3\r\b\3\16\t\3\17\n\3\20\13\3\21\f\3\22\r\3\23\16\2\3\2\b\2\2\3"+
		"\27\17\3\30\20";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}