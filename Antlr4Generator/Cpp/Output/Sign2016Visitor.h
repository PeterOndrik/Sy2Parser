
// Generated from Sign2016.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Sign2016Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Sign2016Parser.
 */
class  Sign2016Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Sign2016Parser.
   */
    virtual antlrcpp::Any visitSignature(Sign2016Parser::SignatureContext *context) = 0;

    virtual antlrcpp::Any visitVoidType(Sign2016Parser::VoidTypeContext *context) = 0;

    virtual antlrcpp::Any visitBoolType(Sign2016Parser::BoolTypeContext *context) = 0;

    virtual antlrcpp::Any visitIntType(Sign2016Parser::IntTypeContext *context) = 0;

    virtual antlrcpp::Any visitUintType(Sign2016Parser::UintTypeContext *context) = 0;

    virtual antlrcpp::Any visitFloatType(Sign2016Parser::FloatTypeContext *context) = 0;

    virtual antlrcpp::Any visitStructType(Sign2016Parser::StructTypeContext *context) = 0;

    virtual antlrcpp::Any visitPtrType(Sign2016Parser::PtrTypeContext *context) = 0;

    virtual antlrcpp::Any visitFunction(Sign2016Parser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitReturnType(Sign2016Parser::ReturnTypeContext *context) = 0;

    virtual antlrcpp::Any visitParamType(Sign2016Parser::ParamTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeQualifier(Sign2016Parser::TypeQualifierContext *context) = 0;

    virtual antlrcpp::Any visitSize(Sign2016Parser::SizeContext *context) = 0;

    virtual antlrcpp::Any visitArraySize(Sign2016Parser::ArraySizeContext *context) = 0;


};

