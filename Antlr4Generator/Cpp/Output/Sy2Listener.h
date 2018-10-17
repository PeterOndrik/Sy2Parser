
// Generated from Sy2.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Sy2Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Sy2Parser.
 */
class  Sy2Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(Sy2Parser::FileContext *ctx) = 0;
  virtual void exitFile(Sy2Parser::FileContext *ctx) = 0;

  virtual void enterCommand(Sy2Parser::CommandContext *ctx) = 0;
  virtual void exitCommand(Sy2Parser::CommandContext *ctx) = 0;

  virtual void enterEncodingValue(Sy2Parser::EncodingValueContext *ctx) = 0;
  virtual void exitEncodingValue(Sy2Parser::EncodingValueContext *ctx) = 0;

  virtual void enterSignValue(Sy2Parser::SignValueContext *ctx) = 0;
  virtual void exitSignValue(Sy2Parser::SignValueContext *ctx) = 0;

  virtual void enterTypeDefinition(Sy2Parser::TypeDefinitionContext *ctx) = 0;
  virtual void exitTypeDefinition(Sy2Parser::TypeDefinitionContext *ctx) = 0;

  virtual void enterSymbol(Sy2Parser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(Sy2Parser::SymbolContext *ctx) = 0;

  virtual void enterType(Sy2Parser::TypeContext *ctx) = 0;
  virtual void exitType(Sy2Parser::TypeContext *ctx) = 0;

  virtual void enterName(Sy2Parser::NameContext *ctx) = 0;
  virtual void exitName(Sy2Parser::NameContext *ctx) = 0;

  virtual void enterBitmask(Sy2Parser::BitmaskContext *ctx) = 0;
  virtual void exitBitmask(Sy2Parser::BitmaskContext *ctx) = 0;

  virtual void enterOffset(Sy2Parser::OffsetContext *ctx) = 0;
  virtual void exitOffset(Sy2Parser::OffsetContext *ctx) = 0;

  virtual void enterAddress(Sy2Parser::AddressContext *ctx) = 0;
  virtual void exitAddress(Sy2Parser::AddressContext *ctx) = 0;

  virtual void enterEnumValue(Sy2Parser::EnumValueContext *ctx) = 0;
  virtual void exitEnumValue(Sy2Parser::EnumValueContext *ctx) = 0;

  virtual void enterSignature(Sy2Parser::SignatureContext *ctx) = 0;
  virtual void exitSignature(Sy2Parser::SignatureContext *ctx) = 0;


};

