#pragma once

#include "Sign2016BaseVisitor.h"

class Sign2016CustomVisitor : public Sign2016BaseVisitor
{
public:
	antlrcpp::Any visitSignature(Sign2016Parser::SignatureContext *ctx) override;
};
