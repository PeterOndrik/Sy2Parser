#include "Sign2016CustomListener.h"
#include "VoidType.h"
#include "IntType.h"
#include "UIntType.h"
#include "FloatType.h"
#include "StructType.h"
#include "PtrType.h"
#include "Function.h"
#include "ReturnType.h"
#include "ParamType.h"
#include "TypeQualifier.h"
#include "StorageSize.h"
#include "ArraySize.h"

using namespace std;
using namespace antlr4;

template<typename T>
static T* initiateNode(ParserRuleContext *ctx, Model::Node<> *node)
{
	T* subNode = new T(ctx->start->getLine(), ctx->start->getCharPositionInLine());
	node->add(subNode);

	return subNode;
}

static Model::Node<>* leaveNode(ParserRuleContext *ctx, Model::Node<> *node, string value)
{
	node->setValue(value);
	return node->parent();
}

void Sign2016CustomListener::enterSignature(Sign2016Parser::SignatureContext * ctx)
{
	_current = &_node;
}

void Sign2016CustomListener::exitSignature(Sign2016Parser::SignatureContext * ctx)
{
}

void Sign2016CustomListener::enterVoidType(Sign2016Parser::VoidTypeContext *ctx)
{
	_current = initiateNode<Model::VoidType>(ctx, _current);
}

void Sign2016CustomListener::exitVoidType(Sign2016Parser::VoidTypeContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->VOID_TYPE()->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_VOID);
}

void Sign2016CustomListener::enterIntType(Sign2016Parser::IntTypeContext *ctx)
{
	_current = initiateNode<Model::IntType>(ctx, _current);
}

void Sign2016CustomListener::exitIntType(Sign2016Parser::IntTypeContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->INT_TYPE()->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_INT);
}

void Sign2016CustomListener::enterUintType(Sign2016Parser::UintTypeContext *ctx)
{
	_current = initiateNode<Model::UIntType>(ctx, _current);
}

void Sign2016CustomListener::exitUintType(Sign2016Parser::UintTypeContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->UINT_TYPE()->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_UINT);
}

void Sign2016CustomListener::enterFloatType(Sign2016Parser::FloatTypeContext *ctx)
{
	_current = initiateNode<Model::FloatType>(ctx, _current);
}

void Sign2016CustomListener::exitFloatType(Sign2016Parser::FloatTypeContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->FLOAT_TYPE()->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_FLOAT);
}

void Sign2016CustomListener::enterStructType(Sign2016Parser::StructTypeContext *ctx)
{
	_current = initiateNode<Model::StructType>(ctx, _current);
}

void Sign2016CustomListener::exitStructType(Sign2016Parser::StructTypeContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->ID()->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_STRUCT);
}

void Sign2016CustomListener::enterPtrType(Sign2016Parser::PtrTypeContext *ctx)
{
	_current = initiateNode<Model::PtrType>(ctx, _current);
}

void Sign2016CustomListener::exitPtrType(Sign2016Parser::PtrTypeContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->PTR_TYPE()->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_POINTER);
}

void Sign2016CustomListener::enterFunction(Sign2016Parser::FunctionContext *ctx)
{
	_current = initiateNode<Model::Function>(ctx, _current);
}

void Sign2016CustomListener::exitFunction(Sign2016Parser::FunctionContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_FUNCTION);
}

void Sign2016CustomListener::enterReturnType(Sign2016Parser::ReturnTypeContext *ctx)
{
	_current = initiateNode<Model::ReturnType>(ctx, _current);
}

void Sign2016CustomListener::exitReturnType(Sign2016Parser::ReturnTypeContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, _current, ctx->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_RETURN);
}

void Sign2016CustomListener::enterParamType(Sign2016Parser::ParamTypeContext *ctx)
{
	_current = initiateNode<Model::ParamType>(ctx, _current);
}

void Sign2016CustomListener::exitParamType(Sign2016Parser::ParamTypeContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_PARAMETER);
}

void Sign2016CustomListener::enterTypeQualifier(Sign2016Parser::TypeQualifierContext *ctx)
{
	_current = initiateNode<Model::TypeQualifier>(ctx, _current);
}

void Sign2016CustomListener::exitTypeQualifier(Sign2016Parser::TypeQualifierContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->TYPE_QUALIFIER()->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_TYPE_QUALIFIER);
}

void Sign2016CustomListener::enterSize(Sign2016Parser::SizeContext *ctx)
{
	_current = initiateNode<Model::StorageSize>(ctx, _current);
}

void Sign2016CustomListener::exitSize(Sign2016Parser::SizeContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_SIZE);
}

void Sign2016CustomListener::enterArraySize(Sign2016Parser::ArraySizeContext *ctx)
{
	_current = initiateNode<Model::ArraySize>(ctx, _current);
}

void Sign2016CustomListener::exitArraySize(Sign2016Parser::ArraySizeContext *ctx)
{
	Model::Node<> *temp = _current;
	_current = leaveNode(ctx, temp, ctx->ARRAY_SIZE()->getText());
	this->callCallback(temp, Model::Sy2Node::SY2_ARRAY_SIZE);
}

void Sign2016CustomListener::addParsedNodeCallback(Sy2CustomListener::ParsedNodeCallbackPtr callback, Model::Sy2Node sy2Node)
{
	_parsedNodeCbList.insert({ sy2Node, callback });
}

void Sign2016CustomListener::callCallback(const Model::Node<> *node, Model::Sy2Node sy2Node)
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