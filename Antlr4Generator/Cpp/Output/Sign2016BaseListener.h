
// Generated from Sign2016.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Sign2016Listener.h"


/**
 * This class provides an empty implementation of Sign2016Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Sign2016BaseListener : public Sign2016Listener {
public:

  virtual void enterSignature(Sign2016Parser::SignatureContext * /*ctx*/) override { }
  virtual void exitSignature(Sign2016Parser::SignatureContext * /*ctx*/) override { }

  virtual void enterVoidType(Sign2016Parser::VoidTypeContext * /*ctx*/) override { }
  virtual void exitVoidType(Sign2016Parser::VoidTypeContext * /*ctx*/) override { }

  virtual void enterBoolType(Sign2016Parser::BoolTypeContext * /*ctx*/) override { }
  virtual void exitBoolType(Sign2016Parser::BoolTypeContext * /*ctx*/) override { }

  virtual void enterIntType(Sign2016Parser::IntTypeContext * /*ctx*/) override { }
  virtual void exitIntType(Sign2016Parser::IntTypeContext * /*ctx*/) override { }

  virtual void enterUintType(Sign2016Parser::UintTypeContext * /*ctx*/) override { }
  virtual void exitUintType(Sign2016Parser::UintTypeContext * /*ctx*/) override { }

  virtual void enterFloatType(Sign2016Parser::FloatTypeContext * /*ctx*/) override { }
  virtual void exitFloatType(Sign2016Parser::FloatTypeContext * /*ctx*/) override { }

  virtual void enterStructType(Sign2016Parser::StructTypeContext * /*ctx*/) override { }
  virtual void exitStructType(Sign2016Parser::StructTypeContext * /*ctx*/) override { }

  virtual void enterPtrType(Sign2016Parser::PtrTypeContext * /*ctx*/) override { }
  virtual void exitPtrType(Sign2016Parser::PtrTypeContext * /*ctx*/) override { }

  virtual void enterFunction(Sign2016Parser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(Sign2016Parser::FunctionContext * /*ctx*/) override { }

  virtual void enterReturnType(Sign2016Parser::ReturnTypeContext * /*ctx*/) override { }
  virtual void exitReturnType(Sign2016Parser::ReturnTypeContext * /*ctx*/) override { }

  virtual void enterParamType(Sign2016Parser::ParamTypeContext * /*ctx*/) override { }
  virtual void exitParamType(Sign2016Parser::ParamTypeContext * /*ctx*/) override { }

  virtual void enterTypeQualifier(Sign2016Parser::TypeQualifierContext * /*ctx*/) override { }
  virtual void exitTypeQualifier(Sign2016Parser::TypeQualifierContext * /*ctx*/) override { }

  virtual void enterSize(Sign2016Parser::SizeContext * /*ctx*/) override { }
  virtual void exitSize(Sign2016Parser::SizeContext * /*ctx*/) override { }

  virtual void enterArraySize(Sign2016Parser::ArraySizeContext * /*ctx*/) override { }
  virtual void exitArraySize(Sign2016Parser::ArraySizeContext * /*ctx*/) override { }

  virtual void enterName(Sign2016Parser::NameContext * /*ctx*/) override { }
  virtual void exitName(Sign2016Parser::NameContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

