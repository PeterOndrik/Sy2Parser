
// Generated from Sign2016.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  Sign2016Parser : public antlr4::Parser {
public:
  enum {
    CONST_TYPE = 1, VOID_TYPE = 2, BOOL_TYPE = 3, INT_TYPE = 4, UINT_TYPE = 5, 
    FLOAT_TYPE = 6, STRUCT_TYPE = 7, PTR_TYPE = 8, FB = 9, FE = 10, ARRAY_SIZE = 11, 
    SIZE = 12, SEP = 13, ID = 14
  };

  enum {
    RuleSignature = 0, RuleVoidType = 1, RuleBoolType = 2, RuleIntType = 3, 
    RuleUintType = 4, RuleFloatType = 5, RuleStructType = 6, RulePtrType = 7, 
    RuleFunction = 8, RuleReturnType = 9, RuleParamType = 10, RuleTypeQualifier = 11, 
    RuleSize = 12, RuleArraySize = 13, RuleName = 14
  };

  Sign2016Parser(antlr4::TokenStream *input);
  ~Sign2016Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  	int afterSize = 0;
  	int isStruct = 0;


  class SignatureContext;
  class VoidTypeContext;
  class BoolTypeContext;
  class IntTypeContext;
  class UintTypeContext;
  class FloatTypeContext;
  class StructTypeContext;
  class PtrTypeContext;
  class FunctionContext;
  class ReturnTypeContext;
  class ParamTypeContext;
  class TypeQualifierContext;
  class SizeContext;
  class ArraySizeContext;
  class NameContext; 

  class  SignatureContext : public antlr4::ParserRuleContext {
  public:
    SignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    BoolTypeContext *boolType();
    IntTypeContext *intType();
    UintTypeContext *uintType();
    FloatTypeContext *floatType();
    StructTypeContext *structType();
    PtrTypeContext *ptrType();
    FunctionContext *function();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignatureContext* signature();

  class  VoidTypeContext : public antlr4::ParserRuleContext {
  public:
    VoidTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VOID_TYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VoidTypeContext* voidType();

  class  BoolTypeContext : public antlr4::ParserRuleContext {
  public:
    Sign2016Parser::ArraySizeContext *arraySizeContext = nullptr;;
    std::vector<ArraySizeContext *> arraySizes;;
    BoolTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOL_TYPE();
    TypeQualifierContext *typeQualifier();
    std::vector<ArraySizeContext *> arraySize();
    ArraySizeContext* arraySize(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolTypeContext* boolType();

  class  IntTypeContext : public antlr4::ParserRuleContext {
  public:
    Sign2016Parser::ArraySizeContext *arraySizeContext = nullptr;;
    std::vector<ArraySizeContext *> arraySizes;;
    IntTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_TYPE();
    SizeContext *size();
    TypeQualifierContext *typeQualifier();
    std::vector<ArraySizeContext *> arraySize();
    ArraySizeContext* arraySize(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntTypeContext* intType();

  class  UintTypeContext : public antlr4::ParserRuleContext {
  public:
    Sign2016Parser::ArraySizeContext *arraySizeContext = nullptr;;
    std::vector<ArraySizeContext *> arraySizes;;
    UintTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UINT_TYPE();
    SizeContext *size();
    TypeQualifierContext *typeQualifier();
    std::vector<ArraySizeContext *> arraySize();
    ArraySizeContext* arraySize(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UintTypeContext* uintType();

  class  FloatTypeContext : public antlr4::ParserRuleContext {
  public:
    Sign2016Parser::ArraySizeContext *arraySizeContext = nullptr;;
    std::vector<ArraySizeContext *> arraySizes;;
    FloatTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT_TYPE();
    SizeContext *size();
    TypeQualifierContext *typeQualifier();
    std::vector<ArraySizeContext *> arraySize();
    ArraySizeContext* arraySize(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatTypeContext* floatType();

  class  StructTypeContext : public antlr4::ParserRuleContext {
  public:
    Sign2016Parser::ArraySizeContext *arraySizeContext = nullptr;;
    std::vector<ArraySizeContext *> arraySizes;;
    StructTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT_TYPE();
    SizeContext *size();
    antlr4::tree::TerminalNode *SEP();
    NameContext *name();
    TypeQualifierContext *typeQualifier();
    std::vector<ArraySizeContext *> arraySize();
    ArraySizeContext* arraySize(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructTypeContext* structType();

  class  PtrTypeContext : public antlr4::ParserRuleContext {
  public:
    Sign2016Parser::ArraySizeContext *arraySizeContext = nullptr;;
    std::vector<ArraySizeContext *> arraySizes;;
    PtrTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PTR_TYPE();
    SizeContext *size();
    antlr4::tree::TerminalNode *SEP();
    VoidTypeContext *voidType();
    BoolTypeContext *boolType();
    IntTypeContext *intType();
    UintTypeContext *uintType();
    FloatTypeContext *floatType();
    StructTypeContext *structType();
    PtrTypeContext *ptrType();
    FunctionContext *function();
    std::vector<TypeQualifierContext *> typeQualifier();
    TypeQualifierContext* typeQualifier(size_t i);
    std::vector<ArraySizeContext *> arraySize();
    ArraySizeContext* arraySize(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrTypeContext* ptrType();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FB();
    std::vector<antlr4::tree::TerminalNode *> SEP();
    antlr4::tree::TerminalNode* SEP(size_t i);
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *FE();
    std::vector<ParamTypeContext *> paramType();
    ParamTypeContext* paramType(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  ReturnTypeContext : public antlr4::ParserRuleContext {
  public:
    ReturnTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VoidTypeContext *voidType();
    BoolTypeContext *boolType();
    IntTypeContext *intType();
    UintTypeContext *uintType();
    FloatTypeContext *floatType();
    StructTypeContext *structType();
    PtrTypeContext *ptrType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnTypeContext* returnType();

  class  ParamTypeContext : public antlr4::ParserRuleContext {
  public:
    ParamTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VoidTypeContext *voidType();
    BoolTypeContext *boolType();
    IntTypeContext *intType();
    UintTypeContext *uintType();
    FloatTypeContext *floatType();
    StructTypeContext *structType();
    PtrTypeContext *ptrType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamTypeContext* paramType();

  class  TypeQualifierContext : public antlr4::ParserRuleContext {
  public:
    TypeQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST_TYPE();
    antlr4::tree::TerminalNode *SEP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeQualifierContext* typeQualifier();

  class  SizeContext : public antlr4::ParserRuleContext {
  public:
    SizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIZE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SizeContext* size();

  class  ArraySizeContext : public antlr4::ParserRuleContext {
  public:
    ArraySizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEP();
    antlr4::tree::TerminalNode *ARRAY_SIZE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArraySizeContext* arraySize();

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

