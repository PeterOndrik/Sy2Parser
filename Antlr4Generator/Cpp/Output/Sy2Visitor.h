
// Generated from Sy2.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Sy2Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Sy2Parser.
 */
class  Sy2Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Sy2Parser.
   */
    virtual antlrcpp::Any visitFile(Sy2Parser::FileContext *context) = 0;

    virtual antlrcpp::Any visitCommand(Sy2Parser::CommandContext *context) = 0;

    virtual antlrcpp::Any visitEncodingValue(Sy2Parser::EncodingValueContext *context) = 0;

    virtual antlrcpp::Any visitSignValue(Sy2Parser::SignValueContext *context) = 0;

    virtual antlrcpp::Any visitTypeDefinition(Sy2Parser::TypeDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitSymbol(Sy2Parser::SymbolContext *context) = 0;

    virtual antlrcpp::Any visitType(Sy2Parser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitName(Sy2Parser::NameContext *context) = 0;

    virtual antlrcpp::Any visitBitmask(Sy2Parser::BitmaskContext *context) = 0;

    virtual antlrcpp::Any visitOffset(Sy2Parser::OffsetContext *context) = 0;

    virtual antlrcpp::Any visitAddress(Sy2Parser::AddressContext *context) = 0;

    virtual antlrcpp::Any visitEnumValue(Sy2Parser::EnumValueContext *context) = 0;

    virtual antlrcpp::Any visitSignature(Sy2Parser::SignatureContext *context) = 0;


};

