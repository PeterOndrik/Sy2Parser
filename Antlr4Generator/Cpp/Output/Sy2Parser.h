
// Generated from Sy2.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  Sy2Parser : public antlr4::Parser {
public:
  enum {
    ENCODING = 1, LITTLE_ENDIAN = 2, BIG_ENDIAN = 3, SIGNATURE_VERSION = 4, 
    V2016 = 5, REG_VAR = 6, REG_CMD = 7, BIT = 8, STRUCT = 9, UNION = 10, 
    ENUM = 11, PROC = 12, DATA = 13, OFFSET = 14, BITMASK = 15, ENUM_VALUE = 16, 
    ADDRESS = 17, SIGNATURE = 18, ID = 19, LINE_COMMENT = 20, WS = 21, NL = 22
  };

  enum {
    RuleFile = 0, RuleCommand = 1, RuleEncodingValue = 2, RuleSignValue = 3, 
    RuleTypeDefinition = 4, RuleSymbol = 5, RuleName = 6, RuleOffset = 7, 
    RuleBitmask = 8, RuleAddress = 9, RuleEnumValue = 10, RuleSignature = 11
  };

  Sy2Parser(antlr4::TokenStream *input);
  ~Sy2Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


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


  class FileContext;
  class CommandContext;
  class EncodingValueContext;
  class SignValueContext;
  class TypeDefinitionContext;
  class SymbolContext;
  class NameContext;
  class OffsetContext;
  class BitmaskContext;
  class AddressContext;
  class EnumValueContext;
  class SignatureContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    Sy2Parser::CommandContext *commandContext = nullptr;;
    std::vector<CommandContext *> commands;;
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    std::vector<CommandContext *> command();
    CommandContext* command(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileContext* file();

  class  CommandContext : public antlr4::ParserRuleContext {
  public:
    CommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCODING();
    EncodingValueContext *encodingValue();
    antlr4::tree::TerminalNode *NL();
    antlr4::tree::TerminalNode *SIGNATURE_VERSION();
    SignValueContext *signValue();
    antlr4::tree::TerminalNode *REG_VAR();
    TypeDefinitionContext *typeDefinition();
    antlr4::tree::TerminalNode *REG_CMD();
    SymbolContext *symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommandContext* command();

  class  EncodingValueContext : public antlr4::ParserRuleContext {
  public:
    EncodingValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LITTLE_ENDIAN();
    antlr4::tree::TerminalNode *BIG_ENDIAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EncodingValueContext* encodingValue();

  class  SignValueContext : public antlr4::ParserRuleContext {
  public:
    SignValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *V2016();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignValueContext* signValue();

  class  TypeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    TypeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT();
    NameContext *name();
    OffsetContext *offset();
    BitmaskContext *bitmask();
    SignatureContext *signature();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *ENUM();
    EnumValueContext *enumValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefinitionContext* typeDefinition();

  class  SymbolContext : public antlr4::ParserRuleContext {
  public:
    SymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROC();
    NameContext *name();
    AddressContext *address();
    SignatureContext *signature();
    antlr4::tree::TerminalNode *DATA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolContext* symbol();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  OffsetContext : public antlr4::ParserRuleContext {
  public:
    OffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OFFSET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OffsetContext* offset();

  class  BitmaskContext : public antlr4::ParserRuleContext {
  public:
    BitmaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITMASK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitmaskContext* bitmask();

  class  AddressContext : public antlr4::ParserRuleContext {
  public:
    AddressContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddressContext* address();

  class  EnumValueContext : public antlr4::ParserRuleContext {
  public:
    EnumValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM_VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumValueContext* enumValue();

  class  SignatureContext : public antlr4::ParserRuleContext {
  public:
    SignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNATURE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignatureContext* signature();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

