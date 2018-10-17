
// Generated from Sy2.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  Sy2Lexer : public antlr4::Lexer {
public:
  enum {
    ENCODING = 1, LITTLE_ENDIAN = 2, BIG_ENDIAN = 3, SIGN_VERSION = 4, V2016 = 5, 
    REG_VAR = 6, REG_CMD = 7, TYPE = 8, ID = 9, BITMASK = 10, OFFSET = 11, 
    ADDRESS = 12, ENUM_VALUE = 13, SIGNATURE = 14, BIT = 15, STRUCT = 16, 
    UNION = 17, ENUM = 18, PROC = 19, DATA = 20, LINE_COMMENT = 21, WS = 22, 
    NL = 23
  };

  Sy2Lexer(antlr4::CharStream *input);
  ~Sy2Lexer();


  	int tokenPos = 0;
  	int symPosType = 0;	// 0 - BITMASK, 1 - OFFSET, 2 - ADDRESS, 3 - VALUE

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void ENCODINGAction(antlr4::RuleContext *context, size_t actionIndex);
  void LITTLE_ENDIANAction(antlr4::RuleContext *context, size_t actionIndex);
  void BIG_ENDIANAction(antlr4::RuleContext *context, size_t actionIndex);
  void SIGN_VERSIONAction(antlr4::RuleContext *context, size_t actionIndex);
  void V2016Action(antlr4::RuleContext *context, size_t actionIndex);
  void REG_VARAction(antlr4::RuleContext *context, size_t actionIndex);
  void REG_CMDAction(antlr4::RuleContext *context, size_t actionIndex);
  void TYPEAction(antlr4::RuleContext *context, size_t actionIndex);
  void IDAction(antlr4::RuleContext *context, size_t actionIndex);
  void BITMASKAction(antlr4::RuleContext *context, size_t actionIndex);
  void OFFSETAction(antlr4::RuleContext *context, size_t actionIndex);
  void ADDRESSAction(antlr4::RuleContext *context, size_t actionIndex);
  void ENUM_VALUEAction(antlr4::RuleContext *context, size_t actionIndex);
  void SIGNATUREAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool ENCODINGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LITTLE_ENDIANSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BIG_ENDIANSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SIGN_VERSIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool V2016Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REG_VARSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REG_CMDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool TYPESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BITMASKSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OFFSETSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ADDRESSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ENUM_VALUESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SIGNATURESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

