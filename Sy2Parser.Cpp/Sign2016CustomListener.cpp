#include "Sign2016CustomListener.h"
#include "VoidType.h"
#include "IntType.h"
#include "UIntType.h"
#include "FloatType.h"
#include "StructType.h"
#include "PtrType.h"
#include "TypeQualifier.h"
#include "StorageSize.h"

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
	_current = leaveNode(ctx, _current, ctx->VOID_TYPE()->getText());
}

void Sign2016CustomListener::enterIntType(Sign2016Parser::IntTypeContext *ctx)
{
	_current = initiateNode<Model::IntType>(ctx, _current);
}

void Sign2016CustomListener::exitIntType(Sign2016Parser::IntTypeContext *ctx)
{
	_current = leaveNode(ctx, _current, ctx->INT_TYPE()->getText());
}

void Sign2016CustomListener::enterUintType(Sign2016Parser::UintTypeContext *ctx)
{
	_current = initiateNode<Model::UIntType>(ctx, _current);
}

void Sign2016CustomListener::exitUintType(Sign2016Parser::UintTypeContext *ctx)
{
	_current = leaveNode(ctx, _current, ctx->UINT_TYPE()->getText());
}

void Sign2016CustomListener::enterFloatType(Sign2016Parser::FloatTypeContext *ctx)
{
	_current = initiateNode<Model::FloatType>(ctx, _current);
}

void Sign2016CustomListener::exitFloatType(Sign2016Parser::FloatTypeContext *ctx)
{
	_current = leaveNode(ctx, _current, ctx->FLOAT_TYPE()->getText());
}

void Sign2016CustomListener::enterStructType(Sign2016Parser::StructTypeContext *ctx)
{
	_current = initiateNode<Model::StructType>(ctx, _current);
}

void Sign2016CustomListener::exitStructType(Sign2016Parser::StructTypeContext *ctx)
{
	_current = leaveNode(ctx, _current, ctx->ID()->getText());
}

void Sign2016CustomListener::enterPtrType(Sign2016Parser::PtrTypeContext *ctx)
{
	_current = initiateNode<Model::PtrType>(ctx, _current);
}

void Sign2016CustomListener::exitPtrType(Sign2016Parser::PtrTypeContext *ctx)
{
	_current = leaveNode(ctx, _current, ctx->PTR_TYPE()->getText());
}

void Sign2016CustomListener::enterSize(Sign2016Parser::SizeContext *ctx)
{
	_current = initiateNode<Model::StorageSize>(ctx, _current);
}

void Sign2016CustomListener::exitSize(Sign2016Parser::SizeContext *ctx)
{
	_current = leaveNode(ctx, _current, ctx->getText());
}

void Sign2016CustomListener::enterTypeQualifier(Sign2016Parser::TypeQualifierContext *ctx)
{
	_current = initiateNode<Model::TypeQualifier>(ctx, _current);
}

void Sign2016CustomListener::exitTypeQualifier(Sign2016Parser::TypeQualifierContext *ctx)
{
	if (ctx->TYPE_QUALIFIER())
	{
		_current = leaveNode(ctx, _current, ctx->TYPE_QUALIFIER()->getText());
	}
	else
	{
		// type qualifier is always added, if it doesn't exist it have to be removed
		Model::Node<> *rem = _current;
		_current = _current->parent();
		_current->remove(rem);
	}
}
