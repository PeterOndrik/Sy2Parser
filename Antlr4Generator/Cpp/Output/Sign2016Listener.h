
// Generated from Sign2016.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Sign2016Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Sign2016Parser.
 */
class  Sign2016Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSignature(Sign2016Parser::SignatureContext *ctx) = 0;
  virtual void exitSignature(Sign2016Parser::SignatureContext *ctx) = 0;

  virtual void enterVoidType(Sign2016Parser::VoidTypeContext *ctx) = 0;
  virtual void exitVoidType(Sign2016Parser::VoidTypeContext *ctx) = 0;

  virtual void enterBoolType(Sign2016Parser::BoolTypeContext *ctx) = 0;
  virtual void exitBoolType(Sign2016Parser::BoolTypeContext *ctx) = 0;

  virtual void enterIntType(Sign2016Parser::IntTypeContext *ctx) = 0;
  virtual void exitIntType(Sign2016Parser::IntTypeContext *ctx) = 0;

  virtual void enterUintType(Sign2016Parser::UintTypeContext *ctx) = 0;
  virtual void exitUintType(Sign2016Parser::UintTypeContext *ctx) = 0;

  virtual void enterFloatType(Sign2016Parser::FloatTypeContext *ctx) = 0;
  virtual void exitFloatType(Sign2016Parser::FloatTypeContext *ctx) = 0;

  virtual void enterStructType(Sign2016Parser::StructTypeContext *ctx) = 0;
  virtual void exitStructType(Sign2016Parser::StructTypeContext *ctx) = 0;

  virtual void enterPtrType(Sign2016Parser::PtrTypeContext *ctx) = 0;
  virtual void exitPtrType(Sign2016Parser::PtrTypeContext *ctx) = 0;

  virtual void enterFunction(Sign2016Parser::FunctionContext *ctx) = 0;
  virtual void exitFunction(Sign2016Parser::FunctionContext *ctx) = 0;

  virtual void enterReturnType(Sign2016Parser::ReturnTypeContext *ctx) = 0;
  virtual void exitReturnType(Sign2016Parser::ReturnTypeContext *ctx) = 0;

  virtual void enterParamType(Sign2016Parser::ParamTypeContext *ctx) = 0;
  virtual void exitParamType(Sign2016Parser::ParamTypeContext *ctx) = 0;

  virtual void enterTypeQualifier(Sign2016Parser::TypeQualifierContext *ctx) = 0;
  virtual void exitTypeQualifier(Sign2016Parser::TypeQualifierContext *ctx) = 0;

  virtual void enterSize(Sign2016Parser::SizeContext *ctx) = 0;
  virtual void exitSize(Sign2016Parser::SizeContext *ctx) = 0;

  virtual void enterArraySize(Sign2016Parser::ArraySizeContext *ctx) = 0;
  virtual void exitArraySize(Sign2016Parser::ArraySizeContext *ctx) = 0;

  virtual void enterName(Sign2016Parser::NameContext *ctx) = 0;
  virtual void exitName(Sign2016Parser::NameContext *ctx) = 0;


};

