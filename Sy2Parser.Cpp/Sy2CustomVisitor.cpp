#include "Sy2CustomVisitor.h"
#include "File.h"
#include "Command.h"
#include "CmdValue.h"
#include "Symbol.h"
#include "Type.h"
#include "Name.h"
#include "Bitmask.h"
#include "Offset.h"
#include "Address.h"
#include "EnumValue.h"
#include "Signature.h"

#include "antlr4-runtime.h"
#include "Sign2016Lexer.h"
#include "Sign2016Parser.h"
#include "Sign2016CustomVisitor.h"

using namespace std;
using namespace antlrcpp;
using namespace antlr4;

Any Sy2CustomVisitor::visitFile(Sy2Parser::FileContext *ctx)
{
	Model::File file;

	for (auto sy2CommandCtx : ctx->commands)
	{
		Model::Command *command = new Model::Command();
		command->setValue(sy2CommandCtx->getText());

		if (sy2CommandCtx->encodingValue() != nullptr)
		{
			auto sy2CmdValueCtx = sy2CommandCtx->encodingValue();
			Model::CmdValue *value = new Model::CmdValue();
			value->setValue(sy2CmdValueCtx->getText());

			command->add(value);
		}
		else if (sy2CommandCtx->symbol() != nullptr)
		{
			auto sy2SymbolCtx = sy2CommandCtx->symbol();

			Model::Symbol *symbol = new Model::Symbol();
			symbol->setValue("UnknowSymbolName");

			Model::Type *type = new Model::Type();
			type->setValue(sy2SymbolCtx->type()->getText());
			symbol->add(type);

			Model::Name *name = new Model::Name();
			name->setValue(sy2SymbolCtx->name()->getText());
			symbol->add(name);
			symbol->setValue(name->getValue());

			Model::Position *position = nullptr;
			position = new Model::Address();
			position->setValue(sy2SymbolCtx->address()->getText());
			symbol->add(position);

			Model::Signature *signature = new Model::Signature();
			signature->setValue(sy2SymbolCtx->signature()->getText());
			symbol->add(signature);

			/*
			ANTLRInputStream sign2016Input(signature->getValue());
			Sign2016Lexer sign2016Lexer(&sign2016Input);
			CommonTokenStream sign2016Tokens(&sign2016Lexer);
			Sign2016Parser sign2016Parser(&sign2016Tokens);

			Sign2016Parser::SignatureContext *sign2016Tree = sign2016Parser.signature();

			Sign2016CustomVisitor sign2016Visitor;
			Any sign = sign2016Visitor.visitSignature(sign2016Tree);
			*/

			command->add(symbol);
		}

		file.add(command);
	}

	return file;
}

