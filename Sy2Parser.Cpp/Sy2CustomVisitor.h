#pragma once

#include "Sy2BaseVisitor.h"

class Sy2CustomVisitor : public Sy2BaseVisitor
{
public:
	antlrcpp::Any visitFile(Sy2Parser::FileContext *ctx) override;
};
