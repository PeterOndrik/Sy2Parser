#include "Sy2CustomListener.h"
#include "File.h"
#include "Command.h"
#include "CmdValue.h"
#include "TypeDefinition.h"
#include "Symbol.h"
#include "Type.h"
#include "Name.h"
#include "Bitmask.h"
#include "Offset.h"
#include "Address.h"
#include "EnumValue.h"
#include "Signature.h"

#include <memory>

#include "antlr4-runtime.h"
#include "Sign2016Lexer.h"
#include "Sign2016Parser.h"
#include "Sign2016CustomListener.h"
#include "Sign2016ErrorListener.h"

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

Sy2CustomListener::Sy2CustomListener()
	: _fileName(""), _syntaxErrors(0)
{
}

Sy2CustomListener::Sy2CustomListener(const string &fileName)
	: _fileName(fileName), _syntaxErrors(0)
{
}

void Sy2CustomListener::enterFile(Sy2Parser::FileContext *ctx)
{
	_node = make_shared<Model::File>();
	_node->setValue(_fileName);
	_size = ctx->start->getInputStream()->size();
	_progress = 0;
}

void Sy2CustomListener::exitFile(Sy2Parser::FileContext *ctx)
{
	if (_progressCb != nullptr)
	{
		(*_progressCb)(100);
	}
}

void Sy2CustomListener::exitCommand(Sy2Parser::CommandContext *ctx)
{
	size_t progress = (100 * ctx->stop->getStopIndex()) / _size;
	size_t parsedNode = 1;
	if (_progress != progress)
	{
		_progress = progress;
		if (_progressCb != nullptr)
		{
			(*_progressCb)(_progress);
		}
	}

	Model::Command *command = new Model::Command(ctx->start->getLine(), ctx->start->getCharPositionInLine());
	_node->add(command);

	Model::CmdValue *cmdValue = nullptr;
	Model::TypeDefinition *typeDefinition = nullptr;
	Model::Symbol *symbol = nullptr;
	Model::Type *type = nullptr;
	Model::Name *name = nullptr;
	Model::Bitmask *bitmask = nullptr;
	Model::Offset *offset = nullptr;
	Model::Address *address = nullptr;
	Model::EnumValue *enumValue = nullptr;
	Model::Signature *signature = nullptr;

	if (ctx->encodingValue() != nullptr)
	{
		command->setValue(ctx->ENCODING()->getText());

		auto sy2EncodingValueCtx = ctx->encodingValue();

		cmdValue = new Model::CmdValue(sy2EncodingValueCtx->start->getLine(), sy2EncodingValueCtx->start->getCharPositionInLine());
		cmdValue->setValue(sy2EncodingValueCtx->getText());

		command->add(cmdValue);
	}
	else if (ctx->signValue() != nullptr)
	{
		command->setValue(ctx->SIGNATURE_VERSION()->getText());

		auto sy2SignValueCtx = ctx->signValue();

		cmdValue = new Model::CmdValue(sy2SignValueCtx->start->getLine(), sy2SignValueCtx->start->getCharPositionInLine());
		cmdValue->setValue(sy2SignValueCtx->getText());

		command->add(cmdValue);
	}
	else if (ctx->typeDefinition() != nullptr)
	{
		command->setValue(ctx->REG_VAR()->getText());

		auto sy2TypeDefinitionCtx = ctx->typeDefinition();
		typeDefinition = new Model::TypeDefinition(sy2TypeDefinitionCtx->start->getLine(), sy2TypeDefinitionCtx->start->getCharPositionInLine());
		command->add(typeDefinition);
		typeDefinition->setValue("<missing TYPE>");

		TerminalNode *typedefType = nullptr;
		if (sy2TypeDefinitionCtx->BIT())
		{
			typedefType = sy2TypeDefinitionCtx->BIT();
		}
		else if (sy2TypeDefinitionCtx->STRUCT())
		{
			typedefType = sy2TypeDefinitionCtx->STRUCT();
		}
		else if (sy2TypeDefinitionCtx->UNION())
		{
			typedefType = sy2TypeDefinitionCtx->UNION();
		}
		else if (sy2TypeDefinitionCtx->ENUM())
		{
			typedefType = sy2TypeDefinitionCtx->ENUM();
		}
		if (typedefType)
		{
			type = new Model::Type(typedefType->getSymbol()->getLine(), typedefType->getSymbol()->getCharPositionInLine());
			type->setValue(typedefType->getText());
			typeDefinition->add(type);

			auto sy2NameCtx = sy2TypeDefinitionCtx->name();
			name = new Model::Name(sy2NameCtx->start->getLine(), sy2NameCtx->start->getCharPositionInLine());
			name->setValue(sy2NameCtx->getText());
			typeDefinition->add(name);
			typeDefinition->setValue(name->getValue());

			ParserRuleContext *sy2PositionCtx = nullptr;
			if (sy2TypeDefinitionCtx->offset())
			{
				sy2PositionCtx = sy2TypeDefinitionCtx->offset();
				offset = new Model::Offset(sy2PositionCtx->start->getLine(), sy2PositionCtx->start->getCharPositionInLine());
				offset->setValue(sy2PositionCtx->getText());
				typeDefinition->add(offset);
			}
			if (sy2TypeDefinitionCtx->bitmask())
			{
				sy2PositionCtx = sy2TypeDefinitionCtx->bitmask();
				bitmask = new Model::Bitmask(sy2PositionCtx->start->getLine(), sy2PositionCtx->start->getCharPositionInLine());
				bitmask->setValue(sy2PositionCtx->getText());
				typeDefinition->add(bitmask);
			}
			if (sy2TypeDefinitionCtx->enumValue())
			{
				sy2PositionCtx = sy2TypeDefinitionCtx->enumValue();
				enumValue = new Model::EnumValue(sy2PositionCtx->start->getLine(), sy2PositionCtx->start->getCharPositionInLine());
				enumValue->setValue(sy2PositionCtx->getText());
				typeDefinition->add(enumValue);
			}

			auto sy2SignatureCtx = sy2TypeDefinitionCtx->signature();
			signature = new Model::Signature(sy2SignatureCtx->start->getLine(), sy2SignatureCtx->start->getCharPositionInLine());
			signature->setValue(sy2SignatureCtx->getText());
			typeDefinition->add(signature);
		}
	}
	else if (ctx->symbol() != nullptr)
	{
		command->setValue(ctx->REG_CMD()->getText());

		auto sy2SymbolCtx = ctx->symbol();
		symbol = new Model::Symbol(sy2SymbolCtx->start->getLine(), sy2SymbolCtx->start->getCharPositionInLine());
		command->add(symbol);
		symbol->setValue("<missing TYPE>");

		TerminalNode *symbolType = nullptr;
		if (sy2SymbolCtx->PROC())
		{
			symbolType = sy2SymbolCtx->PROC();
		}
		else if (sy2SymbolCtx->DATA())
		{
			symbolType = sy2SymbolCtx->DATA();
		}
		if (symbolType)
		{
			type = new Model::Type(symbolType->getSymbol()->getLine(), symbolType->getSymbol()->getCharPositionInLine());
			type->setValue(symbolType->getText());
			symbol->add(type);

			auto sy2NameCtx = sy2SymbolCtx->name();
			name = new Model::Name(sy2NameCtx->start->getLine(), sy2NameCtx->start->getCharPositionInLine());
			name->setValue(sy2NameCtx->getText());
			symbol->add(name);
			symbol->setValue(name->getValue());

			auto sy2AddressCtx = sy2SymbolCtx->address();
			address = new Model::Address(sy2AddressCtx->start->getLine(), sy2AddressCtx->start->getCharPositionInLine());
			address->setValue(sy2AddressCtx->getText());
			symbol->add(address);

			auto sy2SignatureCtx = sy2SymbolCtx->signature();
			signature = new Model::Signature(sy2SignatureCtx->start->getLine(), sy2SignatureCtx->start->getCharPositionInLine());
			signature->setValue(sy2SignatureCtx->getText());
			symbol->add(signature);
		}
	}

	if (signature != nullptr && signature->getValue() != "<missing SIGNATURE>")
	{
		ANTLRInputStream sign2016Input(signature->getValue());

		Sign2016ErrorListener sign2016ErrorListener(signature->getLine(), signature->getColumn());
		sign2016ErrorListener.setErrorCallback(_errorCb);

		Sign2016Lexer sign2016Lexer(&sign2016Input);
		sign2016Lexer.removeErrorListeners();
		sign2016Lexer.addErrorListener(&sign2016ErrorListener);

		CommonTokenStream sign2016Tokens(&sign2016Lexer);

		Sign2016Parser sign2016Parser(&sign2016Tokens);
		sign2016Parser.removeErrorListeners();
		sign2016Parser.addErrorListener(&sign2016ErrorListener);
		Sign2016CustomListener sign2016Listener(*signature);
		for (auto cb : _parsedNodeCbList)
		{
			sign2016Listener.addParsedNodeCallback(cb.second, cb.first);
		}
		sign2016Parser.addParseListener(&sign2016Listener);

		Sign2016Parser::SignatureContext *sign2016Tree = sign2016Parser.signature();

		sign2016Parser.removeParseListeners();
		sign2016Parser.removeErrorListeners();
		sign2016Lexer.removeErrorListeners();

		_syntaxErrors = sign2016Lexer.getNumberOfSyntaxErrors();
		_syntaxErrors += sign2016Parser.getNumberOfSyntaxErrors();
	}

	this->callCallback(command, Model::Sy2Node::SY2_COMMAND);
	this->callCallback(cmdValue, Model::Sy2Node::SY2_CMD_VALUE);
	this->callCallback(typeDefinition, Model::Sy2Node::SY2_TYPEDEF);
	this->callCallback(symbol, Model::Sy2Node::SY2_SYMBOL);
	this->callCallback(type, Model::Sy2Node::SY2_TYPE);
	this->callCallback(name, Model::Sy2Node::SY2_NAME);
	this->callCallback(bitmask, Model::Sy2Node::SY2_BITMASK);
	this->callCallback(offset, Model::Sy2Node::SY2_OFFSET);
	this->callCallback(address, Model::Sy2Node::SY2_ADDRESS);
	this->callCallback(enumValue, Model::Sy2Node::SY2_ENUM_VALUE);
	this->callCallback(signature, Model::Sy2Node::SY2_SIGNATURE);
}

Sy2CustomListener::NodeType Sy2CustomListener::getNode() const
{
	return _node;
}

void Sy2CustomListener::setErrorCallback(Sy2ErrorListener::ErrorCallbackPtr callback)
{
	_errorCb = callback;
}

void Sy2CustomListener::setProgressCallback(ProgressCallbackPtr callback)
{
	_progressCb = callback;
}

void Sy2CustomListener::addParsedNodeCallback(ParsedNodeCallbackPtr callback, Model::Sy2Node sy2Node)
{
	_parsedNodeCbList.insert({ sy2Node, callback });
}

size_t Sy2CustomListener::getNumberOfSyntaxErrors()
{
	return _syntaxErrors;
}

void Sy2CustomListener::callCallback(const Model::Node<> *node, Model::Sy2Node sy2Node)
{
	auto cb = this->_parsedNodeCbList.equal_range(sy2Node);
	for (auto it = cb.first; it != cb.second; ++it)
	{
		if (it->second && node)
		{
			(*it->second)(node);
		}
	}
}
