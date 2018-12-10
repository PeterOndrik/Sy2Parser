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
#include "Unspecified.h"

#include <memory>

#include "antlr4-runtime.h"
#include "Sign2016Lexer.h"
#include "Sign2016Parser.h"
#include "Sign2016CustomListener.h"
#include "Sign2016CustomErrorListener.h"
#include "Sy2CustomErrorStrategy.h"
#include "MissingTokenException.h"

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
	_rootNode = make_shared<Model::File>();
	_rootNode->setValue(_fileName);
	_size = ctx->start->getInputStream()->size();
	_progress = 0;
	_currentNode = _rootNode.get();
	_currentTypeDefinition = nullptr;
	_currentSymbol = nullptr;
}

void Sy2CustomListener::exitFile(Sy2Parser::FileContext *ctx)
{
	_rootNode->setException(ctx->exception);
	if (_progressCb != nullptr)
	{
		(*_progressCb)(100);
	}
}

void Sy2CustomListener::enterCommand(Sy2Parser::CommandContext *ctx)
{
	_currentCommand = new Model::Command(ctx->start->getLine(), ctx->start->getCharPositionInLine());
	_rootNode->add(_currentCommand);
	_currentNode = _currentCommand;
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

	Model::Command *command = _currentCommand;
	command->setException(ctx->exception);

	Model::CmdValue *cmdValue = nullptr;

	if (ctx->encodingValue() != nullptr)
	{
		command->setValue(ctx->ENCODING()->getText());

		auto sy2EncodingValueCtx = ctx->encodingValue();

		cmdValue = new Model::CmdValue(sy2EncodingValueCtx->start->getLine(), sy2EncodingValueCtx->start->getCharPositionInLine());
		cmdValue->setValue(sy2EncodingValueCtx->getText());
		cmdValue->setException(sy2EncodingValueCtx->exception);

		command->add(cmdValue);
	}
	else if (ctx->signValue() != nullptr)
	{
		command->setValue(ctx->SIGNATURE_VERSION()->getText());

		auto sy2SignValueCtx = ctx->signValue();

		cmdValue = new Model::CmdValue(sy2SignValueCtx->start->getLine(), sy2SignValueCtx->start->getCharPositionInLine());
		cmdValue->setValue(sy2SignValueCtx->getText());
		cmdValue->setException(sy2SignValueCtx->exception);

		command->add(cmdValue);
	}
	else if (ctx->typeDefinition() != nullptr)
	{
		command->setValue(ctx->REG_VAR()->getText());

	}
	else if (ctx->symbol() != nullptr)
	{
		command->setValue(ctx->REG_CMD()->getText());


	}

	this->callCallback(command, Model::Sy2Node::SY2_COMMAND);
	this->callCallback(cmdValue, Model::Sy2Node::SY2_CMD_VALUE);

	_currentNode = _rootNode.get();
}

void Sy2CustomListener::enterTypeDefinition(Sy2Parser::TypeDefinitionContext *ctx)
{
	auto sy2TypeDefinitionCtx = ctx;
	_currentTypeDefinition = new Model::TypeDefinition(sy2TypeDefinitionCtx->start->getLine(), sy2TypeDefinitionCtx->start->getCharPositionInLine());
	_currentCommand->add(_currentTypeDefinition);
	_currentNode = _currentTypeDefinition;
}

void Sy2CustomListener::exitTypeDefinition(Sy2Parser::TypeDefinitionContext *ctx)
{
	auto sy2TypeDefinitionCtx = ctx;
	Model::TypeDefinition *typeDefinition = _currentTypeDefinition;
	typeDefinition->setValue("<missing TYPE>");
	typeDefinition->setException(sy2TypeDefinitionCtx->exception);

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
		Model::Type *type = new Model::Type(typedefType->getSymbol()->getLine(), typedefType->getSymbol()->getCharPositionInLine());
		type->setValue(typedefType->getText());
		typeDefinition->add(type);
		this->callCallback(type, Model::Sy2Node::SY2_TYPE);

		auto sy2NameCtx = sy2TypeDefinitionCtx->name();
		Model::Name *name = new Model::Name(sy2NameCtx->start->getLine(), sy2NameCtx->start->getCharPositionInLine());
		name->setValue(sy2NameCtx->getText());
		typeDefinition->add(name);
		typeDefinition->setValue(name->getValue());
		this->callCallback(name, Model::Sy2Node::SY2_NAME);

		ParserRuleContext *sy2PositionCtx = nullptr;
		if (sy2TypeDefinitionCtx->offset())
		{
			sy2PositionCtx = sy2TypeDefinitionCtx->offset();
			Model::Offset *offset = new Model::Offset(sy2PositionCtx->start->getLine(), sy2PositionCtx->start->getCharPositionInLine());
			offset->setValue(sy2PositionCtx->getText());
			offset->setException(sy2PositionCtx->exception);
			typeDefinition->add(offset);
			this->callCallback(offset, Model::Sy2Node::SY2_OFFSET);
		}
		if (sy2TypeDefinitionCtx->bitmask())
		{
			sy2PositionCtx = sy2TypeDefinitionCtx->bitmask();
			Model::Bitmask *bitmask = new Model::Bitmask(sy2PositionCtx->start->getLine(), sy2PositionCtx->start->getCharPositionInLine());
			bitmask->setValue(sy2PositionCtx->getText());

			bitmask->setException(sy2PositionCtx->exception);
			if (bitmask->getException() == nullptr)
			{
				if (strcmp(bitmask->getValue().c_str(), "<missing BITMASK>") == 0)
				{
					bitmask->setException(make_exception_ptr(MissingTokenException(_recognizer)));
				}
			}

			typeDefinition->add(bitmask);
			this->callCallback(bitmask, Model::Sy2Node::SY2_BITMASK);
		}
		if (sy2TypeDefinitionCtx->enumValue())
		{
			sy2PositionCtx = sy2TypeDefinitionCtx->enumValue();
			Model::EnumValue *enumValue = new Model::EnumValue(sy2PositionCtx->start->getLine(), sy2PositionCtx->start->getCharPositionInLine());
			enumValue->setValue(sy2PositionCtx->getText());
			enumValue->setException(sy2PositionCtx->exception);
			typeDefinition->add(enumValue);
			this->callCallback(enumValue, Model::Sy2Node::SY2_ENUM_VALUE);
		}

		_currentTypeDefinition->add(_currentSignature);
		this->callCallback(_currentSignature, Model::Sy2Node::SY2_SIGNATURE);

		for_each(_unspecifiedNodeList.begin(), _unspecifiedNodeList.end(), [](Model::Node<> *node)
		{
			delete node;
		});
		_unspecifiedNodeList.clear();
	}
	else
	{
		for_each(_unspecifiedNodeList.begin(), _unspecifiedNodeList.end(), [=](Model::Node<> *node)
		{
			_currentNode->add(node);
			this->callCallback(node, Model::Sy2Node::SY2_UNSPECIFIED);
		});
		_unspecifiedNodeList.clear();
	}

	this->callCallback(typeDefinition, Model::Sy2Node::SY2_TYPEDEF);
	_currentTypeDefinition = nullptr;
}

void Sy2CustomListener::enterSymbol(Sy2Parser::SymbolContext *ctx)
{
	auto sy2SymbolCtx = ctx;
	_currentSymbol = new Model::Symbol(sy2SymbolCtx->start->getLine(), sy2SymbolCtx->start->getCharPositionInLine());
	_currentCommand->add(_currentSymbol);
	_currentNode = _currentSymbol;
}

void Sy2CustomListener::exitSymbol(Sy2Parser::SymbolContext *ctx)
{
	auto sy2SymbolCtx = ctx;
	Model::Symbol *symbol = _currentSymbol;
	symbol->setValue("<missing TYPE>");
	symbol->setException(sy2SymbolCtx->exception);

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
		Model::Type *type = type = new Model::Type(symbolType->getSymbol()->getLine(), symbolType->getSymbol()->getCharPositionInLine());
		type->setValue(symbolType->getText());
		symbol->add(type);
		this->callCallback(type, Model::Sy2Node::SY2_TYPE);

		auto sy2NameCtx = sy2SymbolCtx->name();
		Model::Name *name = new Model::Name(sy2NameCtx->start->getLine(), sy2NameCtx->start->getCharPositionInLine());
		name->setValue(sy2NameCtx->getText());
		name->setException(sy2NameCtx->exception);
		symbol->add(name);
		symbol->setValue(name->getValue());
		this->callCallback(name, Model::Sy2Node::SY2_NAME);

		auto sy2AddressCtx = sy2SymbolCtx->address();
		Model::Address *address = new Model::Address(sy2AddressCtx->start->getLine(), sy2AddressCtx->start->getCharPositionInLine());
		address->setValue(sy2AddressCtx->getText());
		address->setException(sy2AddressCtx->exception);
		symbol->add(address);
		this->callCallback(address, Model::Sy2Node::SY2_ADDRESS);

		_currentSymbol->add(_currentSignature);
		this->callCallback(_currentSignature, Model::Sy2Node::SY2_SIGNATURE);

		for_each(_unspecifiedNodeList.begin(), _unspecifiedNodeList.end(), [](Model::Node<> *node) 
		{ 
			delete node; 
		});
		_unspecifiedNodeList.clear();
	}
	else
	{
		for_each(_unspecifiedNodeList.begin(), _unspecifiedNodeList.end(), [=](Model::Node<> *node) 
		{ 
			_currentNode->add(node); 
			this->callCallback(node, Model::Sy2Node::SY2_UNSPECIFIED);
		});
		_unspecifiedNodeList.clear();
	}

	this->callCallback(symbol, Model::Sy2Node::SY2_SYMBOL);
	_currentSymbol = nullptr;
}

void Sy2CustomListener::enterSignature(Sy2Parser::SignatureContext *ctx)
{
	auto sy2SignatureCtx = ctx;
	_currentSignature = new Model::Signature(sy2SignatureCtx->start->getLine(), sy2SignatureCtx->start->getCharPositionInLine());
	_currentNode = _currentSignature;
}

void Sy2CustomListener::exitSignature(Sy2Parser::SignatureContext *ctx)
{
	auto sy2SignatureCtx = ctx;
	Model::Signature *signature = _currentSignature;
	signature->setValue(sy2SignatureCtx->getText());
	signature->setException(sy2SignatureCtx->exception);

	if (signature->getException() == nullptr)
	{
		if (strcmp(signature->getValue().c_str(), "<missing SIGNATURE>") == 0)
		{
			signature->setException(make_exception_ptr(MissingTokenException(_recognizer)));
		}
		else
		{
			ANTLRInputStream sign2016Input(signature->getValue());

			Sign2016CustomErrorListener sign2016ErrorListener(signature->getLine(), signature->getColumn());
			sign2016ErrorListener.setErrorCallback(_errorCb);

			Sign2016Lexer sign2016Lexer(&sign2016Input);
			sign2016Lexer.removeErrorListeners();
			//sign2016Lexer.addErrorListener(&sign2016ErrorListener);

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
			sign2016Parser.setErrorHandler(make_shared<Sy2CustomErrorStrategy>());

			Sign2016Parser::SignatureContext *sign2016Tree = sign2016Parser.signature();
			if (signature->getException() == nullptr)
			{
				signature->setException(sign2016Tree->exception);
			}

			sign2016Parser.removeParseListeners();
			sign2016Parser.removeErrorListeners();
			sign2016Lexer.removeErrorListeners();

			_syntaxErrors = sign2016Lexer.getNumberOfSyntaxErrors();
			_syntaxErrors += sign2016Parser.getNumberOfSyntaxErrors();
		}
	}
}

void Sy2CustomListener::visitErrorNode(antlr4::tree::ErrorNode *node)
{
	Model::Unspecified *unspecified = new Model::Unspecified(node->getSymbol()->getLine(), node->getSymbol()->getCharPositionInLine());
	unspecified->setValue(node->getText());
	unspecified->setException(nullptr);

	if (Model::TypeDefinition *typeDefinition = dynamic_cast<Model::TypeDefinition *>(_currentNode))
	{
		_unspecifiedNodeList.push_back(unspecified);
	}
	else if (Model::Symbol *symbol = dynamic_cast<Model::Symbol *>(_currentNode))
	{
		_unspecifiedNodeList.push_back(unspecified);
	}
	else
	{
		_currentNode->add(unspecified);
		this->callCallback(unspecified, Model::Sy2Node::SY2_UNSPECIFIED);
	}
}

Sy2CustomListener::NodeType Sy2CustomListener::getNode() const
{
	return _rootNode;
}

void Sy2CustomListener::setErrorCallback(Sy2CustomErrorListener::ErrorCallbackPtr callback)
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
