
// Generated from Sign2016.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Sign2016Visitor.h"


/**
 * This class provides an empty implementation of Sign2016Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Sign2016BaseVisitor : public Sign2016Visitor {
public:

  virtual antlrcpp::Any visitSignature(Sign2016Parser::SignatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVoidType(Sign2016Parser::VoidTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolType(Sign2016Parser::BoolTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntType(Sign2016Parser::IntTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUintType(Sign2016Parser::UintTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatType(Sign2016Parser::FloatTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructType(Sign2016Parser::StructTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPtrType(Sign2016Parser::PtrTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(Sign2016Parser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnType(Sign2016Parser::ReturnTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamType(Sign2016Parser::ParamTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeQualifier(Sign2016Parser::TypeQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSize(Sign2016Parser::SizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArraySize(Sign2016Parser::ArraySizeContext *ctx) override {
    return visitChildren(ctx);
  }


};

