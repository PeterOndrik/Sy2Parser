
// Generated from Sy2.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  Sy2Lexer : public antlr4::Lexer {
public:
  enum {
    ENCODING = 1, LITTLE_ENDIAN = 2, BIG_ENDIAN = 3, SIGNATURE_VERSION = 4, 
    V2016 = 5, REG_VAR = 6, REG_CMD = 7, BIT = 8, STRUCT = 9, UNION = 10, 
    ENUM = 11, PROC = 12, DATA = 13, OFFSET = 14, BITMASK = 15, ENUM_VALUE = 16, 
    ADDRESS = 17, SIGNATURE = 18, ID = 19, LINE_COMMENT = 20, WS = 21, NL = 22
  };

  Sy2Lexer(antlr4::CharStream *input);
  ~Sy2Lexer();


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
  void REG_VARAction(antlr4::RuleContext *context, size_t actionIndex);
  void REG_CMDAction(antlr4::RuleContext *context, size_t actionIndex);
  void BITAction(antlr4::RuleContext *context, size_t actionIndex);
  void STRUCTAction(antlr4::RuleContext *context, size_t actionIndex);
  void UNIONAction(antlr4::RuleContext *context, size_t actionIndex);
  void ENUMAction(antlr4::RuleContext *context, size_t actionIndex);
  void PROCAction(antlr4::RuleContext *context, size_t actionIndex);
  void DATAAction(antlr4::RuleContext *context, size_t actionIndex);
  void OFFSETAction(antlr4::RuleContext *context, size_t actionIndex);
  void BITMASKAction(antlr4::RuleContext *context, size_t actionIndex);
  void ENUM_VALUEAction(antlr4::RuleContext *context, size_t actionIndex);
  void ADDRESSAction(antlr4::RuleContext *context, size_t actionIndex);
  void IDAction(antlr4::RuleContext *context, size_t actionIndex);
  void NLAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool BITSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool STRUCTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool UNIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ENUMSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PROCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DATASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OFFSETSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BITMASKSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ENUM_VALUESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ADDRESSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SIGNATURESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

