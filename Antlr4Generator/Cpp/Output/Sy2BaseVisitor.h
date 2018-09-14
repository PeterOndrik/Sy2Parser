
// Generated from Sy2.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Sy2Visitor.h"


/**
 * This class provides an empty implementation of Sy2Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Sy2BaseVisitor : public Sy2Visitor {
public:

  virtual antlrcpp::Any visitFile(Sy2Parser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommand(Sy2Parser::CommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword(Sy2Parser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmdValue(Sy2Parser::CmdValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSymbol(Sy2Parser::SymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(Sy2Parser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(Sy2Parser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitmask(Sy2Parser::BitmaskContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOffset(Sy2Parser::OffsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddress(Sy2Parser::AddressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumValue(Sy2Parser::EnumValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignature(Sy2Parser::SignatureContext *ctx) override {
    return visitChildren(ctx);
  }


};

