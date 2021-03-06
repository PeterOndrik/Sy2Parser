
// Generated from Sign2016.g4 by ANTLR 4.7.1


#include "Sign2016Lexer.h"


using namespace antlr4;


Sign2016Lexer::Sign2016Lexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Sign2016Lexer::~Sign2016Lexer() {
  delete _interpreter;
}

std::string Sign2016Lexer::getGrammarFileName() const {
  return "Sign2016.g4";
}

const std::vector<std::string>& Sign2016Lexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& Sign2016Lexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& Sign2016Lexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& Sign2016Lexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& Sign2016Lexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> Sign2016Lexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& Sign2016Lexer::getATN() const {
  return _atn;
}


void Sign2016Lexer::action(RuleContext *context, size_t ruleIndex, size_t actionIndex) {
  switch (ruleIndex) {
    case 2: BOOL_TYPEAction(dynamic_cast<antlr4::RuleContext *>(context), actionIndex); break;
    case 3: INT_TYPEAction(dynamic_cast<antlr4::RuleContext *>(context), actionIndex); break;
    case 4: UINT_TYPEAction(dynamic_cast<antlr4::RuleContext *>(context), actionIndex); break;
    case 5: FLOAT_TYPEAction(dynamic_cast<antlr4::RuleContext *>(context), actionIndex); break;
    case 6: STRUCT_TYPEAction(dynamic_cast<antlr4::RuleContext *>(context), actionIndex); break;
    case 7: PTR_TYPEAction(dynamic_cast<antlr4::RuleContext *>(context), actionIndex); break;
    case 11: SIZEAction(dynamic_cast<antlr4::RuleContext *>(context), actionIndex); break;
    case 13: IDAction(dynamic_cast<antlr4::RuleContext *>(context), actionIndex); break;

  default:
    break;
  }
}

bool Sign2016Lexer::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 10: return ARRAY_SIZESempred(dynamic_cast<antlr4::RuleContext *>(context), predicateIndex);
    case 13: return IDSempred(dynamic_cast<antlr4::RuleContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

void Sign2016Lexer::BOOL_TYPEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 0:  afterSize++; break;

  default:
    break;
  }
}

void Sign2016Lexer::INT_TYPEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 1:  afterSize = 0;  break;

  default:
    break;
  }
}

void Sign2016Lexer::UINT_TYPEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 2:  afterSize = 0;  break;

  default:
    break;
  }
}

void Sign2016Lexer::FLOAT_TYPEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 3:  afterSize = 0;  break;

  default:
    break;
  }
}

void Sign2016Lexer::STRUCT_TYPEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 4:  afterSize = 0; isStruct++;  break;

  default:
    break;
  }
}

void Sign2016Lexer::PTR_TYPEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 5:  afterSize = 0;  break;

  default:
    break;
  }
}

void Sign2016Lexer::SIZEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 6:  afterSize++;  break;

  default:
    break;
  }
}

void Sign2016Lexer::IDAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 7:  isStruct = 0 ;  break;

  default:
    break;
  }
}


bool Sign2016Lexer::ARRAY_SIZESempred(antlr4::RuleContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return  afterSize > 0 ;

  default:
    break;
  }
  return true;
}

bool Sign2016Lexer::IDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return  isStruct > 0 ;

  default:
    break;
  }
  return true;
}


// Static vars and initialization.
std::vector<dfa::DFA> Sign2016Lexer::_decisionToDFA;
atn::PredictionContextCache Sign2016Lexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Sign2016Lexer::_atn;
std::vector<uint16_t> Sign2016Lexer::_serializedATN;

std::vector<std::string> Sign2016Lexer::_ruleNames = {
  u8"CONST_TYPE", u8"VOID_TYPE", u8"BOOL_TYPE", u8"INT_TYPE", u8"UINT_TYPE", 
  u8"FLOAT_TYPE", u8"STRUCT_TYPE", u8"PTR_TYPE", u8"FB", u8"FE", u8"ARRAY_SIZE", 
  u8"SIZE", u8"SEP", u8"ID", u8"CHAR"
};

std::vector<std::string> Sign2016Lexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> Sign2016Lexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> Sign2016Lexer::_literalNames = {
  "", u8"'C'", u8"'V'", u8"'B'", u8"'I'", u8"'UI'", u8"'F'", u8"'S'", u8"'PTR'", 
  u8"'FB'", u8"'FE'", "", "", u8"'-'"
};

std::vector<std::string> Sign2016Lexer::_symbolicNames = {
  "", u8"CONST_TYPE", u8"VOID_TYPE", u8"BOOL_TYPE", u8"INT_TYPE", u8"UINT_TYPE", 
  u8"FLOAT_TYPE", u8"STRUCT_TYPE", u8"PTR_TYPE", u8"FB", u8"FE", u8"ARRAY_SIZE", 
  u8"SIZE", u8"SEP", u8"ID"
};

dfa::Vocabulary Sign2016Lexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Sign2016Lexer::_tokenNames;

Sign2016Lexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x10, 0x58, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 
    0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x6, 
    0xd, 0x47, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x48, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xf, 0x6, 0xf, 0x50, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 
    0x51, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x2, 0x2, 
    0x11, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 
    0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x19, 0xe, 0x1b, 0xf, 
    0x1d, 0x10, 0x1f, 0x2, 0x3, 0x2, 0x4, 0x3, 0x2, 0x32, 0x3b, 0xd, 0x2, 
    0x28, 0x28, 0x2a, 0x2c, 0x2e, 0x2e, 0x30, 0x30, 0x32, 0x3c, 0x3e, 0x3e, 
    0x40, 0x40, 0x43, 0x5c, 0x61, 0x61, 0x63, 0x7c, 0x80, 0x80, 0x2, 0x58, 
    0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x3, 0x21, 0x3, 0x2, 0x2, 0x2, 0x5, 0x23, 0x3, 0x2, 0x2, 0x2, 0x7, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x9, 0x28, 0x3, 0x2, 0x2, 0x2, 0xb, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0xd, 0x30, 0x3, 0x2, 0x2, 0x2, 0xf, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0x36, 0x3, 0x2, 0x2, 0x2, 0x13, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x15, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x17, 0x42, 0x3, 0x2, 0x2, 0x2, 0x19, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x1b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x1f, 0x56, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x45, 
    0x2, 0x2, 0x22, 0x4, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 0x58, 0x2, 
    0x2, 0x24, 0x6, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0x44, 0x2, 0x2, 
    0x26, 0x27, 0x8, 0x4, 0x2, 0x2, 0x27, 0x8, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x29, 0x7, 0x4b, 0x2, 0x2, 0x29, 0x2a, 0x8, 0x5, 0x3, 0x2, 0x2a, 0xa, 
    0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x57, 0x2, 0x2, 0x2c, 0x2d, 0x7, 
    0x4b, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x8, 0x6, 
    0x4, 0x2, 0x2f, 0xc, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0x48, 0x2, 
    0x2, 0x31, 0x32, 0x8, 0x7, 0x5, 0x2, 0x32, 0xe, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x34, 0x7, 0x55, 0x2, 0x2, 0x34, 0x35, 0x8, 0x8, 0x6, 0x2, 0x35, 
    0x10, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x52, 0x2, 0x2, 0x37, 0x38, 
    0x7, 0x56, 0x2, 0x2, 0x38, 0x39, 0x7, 0x54, 0x2, 0x2, 0x39, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x3b, 0x8, 0x9, 0x7, 0x2, 0x3b, 0x12, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x3d, 0x7, 0x48, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x44, 0x2, 
    0x2, 0x3e, 0x14, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x48, 0x2, 0x2, 
    0x40, 0x41, 0x7, 0x47, 0x2, 0x2, 0x41, 0x16, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x43, 0x5, 0x19, 0xd, 0x2, 0x43, 0x44, 0x6, 0xc, 0x2, 0x2, 0x44, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 0x9, 0x2, 0x2, 0x2, 0x46, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x4b, 0x8, 0xd, 0x8, 0x2, 0x4b, 0x1a, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x4d, 0x7, 0x2f, 0x2, 0x2, 0x4d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x50, 0x5, 0x1f, 0x10, 0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x6, 0xf, 
    0x3, 0x2, 0x54, 0x55, 0x8, 0xf, 0x9, 0x2, 0x55, 0x1e, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x57, 0x9, 0x3, 0x2, 0x2, 0x57, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x5, 0x2, 0x48, 0x51, 0xa, 0x3, 0x4, 0x2, 0x3, 0x5, 0x3, 0x3, 0x6, 0x4, 
    0x3, 0x7, 0x5, 0x3, 0x8, 0x6, 0x3, 0x9, 0x7, 0x3, 0xd, 0x8, 0x3, 0xf, 
    0x9, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Sign2016Lexer::Initializer Sign2016Lexer::_init;
