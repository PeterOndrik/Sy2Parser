#include "Sy2CustomListener.h"
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

#include <memory>

#include "antlr4-runtime.h"
#include "Sign2016Lexer.h"
#include "Sign2016Parser.h"
#include "Sign2016CustomListener.h"

using namespace std;
using namespace antlr4;

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
	command->setValue(ctx->keyword()->getText());

	Model::CmdValue *cmdValue = nullptr;
	Model::Symbol *symbol = nullptr;
	Model::Type *type = nullptr;
	Model::Name *name = nullptr;
	Model::Bitmask *bitmask = nullptr;
	Model::Offset *offset = nullptr;
	Model::Address *address = nullptr;
	Model::EnumValue *enumValue = nullptr;
	Model::Signature *signature = nullptr;

	if (ctx->cmdValue() != nullptr)
	{
		auto sy2CmdValueCtx = ctx->cmdValue();

		cmdValue = new Model::CmdValue(sy2CmdValueCtx->start->getLine(), sy2CmdValueCtx->start->getCharPositionInLine());
		cmdValue->setValue(sy2CmdValueCtx->getText());

		command->add(cmdValue);
	}
	else if (ctx->symbol() != nullptr)
	{
		auto sy2SymbolCtx = ctx->symbol();
		symbol = new Model::Symbol(sy2SymbolCtx->start->getLine(), sy2SymbolCtx->start->getCharPositionInLine());
		command->add(symbol);
		symbol->setValue("UnknowSymbolName");

		auto sy2TypeCtx = sy2SymbolCtx->type();
		type = new Model::Type(sy2TypeCtx->start->getLine(), sy2TypeCtx->start->getCharPositionInLine());
		type->setValue(sy2TypeCtx->getText());
		symbol->add(type);

		auto sy2NameCtx = sy2SymbolCtx->name();
		name = new Model::Name(sy2NameCtx->start->getLine(), sy2NameCtx->start->getCharPositionInLine());
		name->setValue(sy2NameCtx->getText());
		symbol->add(name);
		symbol->setValue(name->getValue());

		ParserRuleContext *sy2PositionCtx = nullptr;
		if (sy2SymbolCtx->bitmask())
		{
			sy2PositionCtx = sy2SymbolCtx->bitmask();
			bitmask = new Model::Bitmask(sy2PositionCtx->start->getLine(), sy2PositionCtx->start->getCharPositionInLine());
			bitmask->setValue(sy2PositionCtx->getText());
			symbol->add(bitmask);
		}
		else if (sy2SymbolCtx->offset())
		{
			sy2PositionCtx = sy2SymbolCtx->offset();
			offset = new Model::Offset(sy2PositionCtx->start->getLine(), sy2PositionCtx->start->getCharPositionInLine());
			offset->setValue(sy2PositionCtx->getText());
			symbol->add(offset);
		}
		else if (sy2SymbolCtx->address())
		{
			sy2PositionCtx = sy2SymbolCtx->address();
			address = new Model::Address(sy2PositionCtx->start->getLine(), sy2PositionCtx->start->getCharPositionInLine());
			address->setValue(sy2PositionCtx->getText());
			symbol->add(address);
		}
		else if (sy2SymbolCtx->enumValue())
		{
			sy2PositionCtx = sy2SymbolCtx->enumValue();
			enumValue = new Model::EnumValue(sy2PositionCtx->start->getLine(), sy2PositionCtx->start->getCharPositionInLine());
			enumValue->setValue(sy2PositionCtx->getText());
			symbol->add(enumValue);
		}

		if (sy2PositionCtx != nullptr)
		{
			auto sy2SignatureCtx = sy2SymbolCtx->signature();
			signature = new Model::Signature(sy2SignatureCtx->start->getLine(), sy2SignatureCtx->start->getCharPositionInLine());
			signature->setValue(sy2SignatureCtx->getText());
			symbol->add(signature);

			ANTLRInputStream sign2016Input(signature->getValue());

			Sy2ErrorListener sign2016ErrorListener(signature->getLine(), signature->getColumn());
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
	}

	this->callCallback(command, Model::Sy2Node::SY2_COMMAND);
	this->callCallback(cmdValue, Model::Sy2Node::SY2_CMD_VALUE);
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
