
// Generated from Sy2.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Sy2Listener.h"


/**
 * This class provides an empty implementation of Sy2Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Sy2BaseListener : public Sy2Listener {
public:

  virtual void enterFile(Sy2Parser::FileContext * /*ctx*/) override { }
  virtual void exitFile(Sy2Parser::FileContext * /*ctx*/) override { }

  virtual void enterCommand(Sy2Parser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(Sy2Parser::CommandContext * /*ctx*/) override { }

  virtual void enterEncodingValue(Sy2Parser::EncodingValueContext * /*ctx*/) override { }
  virtual void exitEncodingValue(Sy2Parser::EncodingValueContext * /*ctx*/) override { }

  virtual void enterSignValue(Sy2Parser::SignValueContext * /*ctx*/) override { }
  virtual void exitSignValue(Sy2Parser::SignValueContext * /*ctx*/) override { }

  virtual void enterTypeDefinition(Sy2Parser::TypeDefinitionContext * /*ctx*/) override { }
  virtual void exitTypeDefinition(Sy2Parser::TypeDefinitionContext * /*ctx*/) override { }

  virtual void enterSymbol(Sy2Parser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(Sy2Parser::SymbolContext * /*ctx*/) override { }

  virtual void enterType(Sy2Parser::TypeContext * /*ctx*/) override { }
  virtual void exitType(Sy2Parser::TypeContext * /*ctx*/) override { }

  virtual void enterName(Sy2Parser::NameContext * /*ctx*/) override { }
  virtual void exitName(Sy2Parser::NameContext * /*ctx*/) override { }

  virtual void enterBitmask(Sy2Parser::BitmaskContext * /*ctx*/) override { }
  virtual void exitBitmask(Sy2Parser::BitmaskContext * /*ctx*/) override { }

  virtual void enterOffset(Sy2Parser::OffsetContext * /*ctx*/) override { }
  virtual void exitOffset(Sy2Parser::OffsetContext * /*ctx*/) override { }

  virtual void enterAddress(Sy2Parser::AddressContext * /*ctx*/) override { }
  virtual void exitAddress(Sy2Parser::AddressContext * /*ctx*/) override { }

  virtual void enterEnumValue(Sy2Parser::EnumValueContext * /*ctx*/) override { }
  virtual void exitEnumValue(Sy2Parser::EnumValueContext * /*ctx*/) override { }

  virtual void enterSignature(Sy2Parser::SignatureContext * /*ctx*/) override { }
  virtual void exitSignature(Sy2Parser::SignatureContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

