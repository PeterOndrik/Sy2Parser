
// Generated from Sign2016.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  Sign2016Lexer : public antlr4::Lexer {
public:
  enum {
    TYPE_QUALIFIER = 1, VOID_TYPE = 2, BOOL_TYPE = 3, INT_TYPE = 4, UINT_TYPE = 5, 
    FLOAT_TYPE = 6, STRUCT_TYPE = 7, PTR_TYPE = 8, FB = 9, FE = 10, ARRAY_SIZE = 11, 
    SIZE = 12, SEP = 13, ID = 14
  };

  Sign2016Lexer(antlr4::CharStream *input);
  ~Sign2016Lexer();


  	int afterSize = 0;
  	int isStruct = 0;

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
  void BOOL_TYPEAction(antlr4::RuleContext *context, size_t actionIndex);
  void INT_TYPEAction(antlr4::RuleContext *context, size_t actionIndex);
  void UINT_TYPEAction(antlr4::RuleContext *context, size_t actionIndex);
  void FLOAT_TYPEAction(antlr4::RuleContext *context, size_t actionIndex);
  void STRUCT_TYPEAction(antlr4::RuleContext *context, size_t actionIndex);
  void PTR_TYPEAction(antlr4::RuleContext *context, size_t actionIndex);
  void SIZEAction(antlr4::RuleContext *context, size_t actionIndex);
  void IDAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool ARRAY_SIZESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

