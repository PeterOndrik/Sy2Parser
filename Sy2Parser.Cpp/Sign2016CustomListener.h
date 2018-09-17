#pragma once

#include "Sign2016BaseListener.h"
#include "Sy2Node.h"
#include "Node.h"

class Sign2016CustomListener : public Sign2016BaseListener
{
public:
	Sign2016CustomListener(Model::Node<> &node)
		: _node(node)
	{
	}

	~Sign2016CustomListener()
	{
	}

	void enterSignature(Sign2016Parser::SignatureContext *ctx) override;
	void exitSignature(Sign2016Parser::SignatureContext *ctx) override;
	
	void enterVoidType(Sign2016Parser::VoidTypeContext * /*ctx*/) override;
	void exitVoidType(Sign2016Parser::VoidTypeContext * /*ctx*/) override;

	void enterIntType(Sign2016Parser::IntTypeContext * /*ctx*/) override;
	void exitIntType(Sign2016Parser::IntTypeContext * /*ctx*/) override;

	void enterUintType(Sign2016Parser::UintTypeContext * /*ctx*/) override;
	void exitUintType(Sign2016Parser::UintTypeContext * /*ctx*/) override;

	void enterFloatType(Sign2016Parser::FloatTypeContext * /*ctx*/) override;
	void exitFloatType(Sign2016Parser::FloatTypeContext * /*ctx*/) override;

	void enterStructType(Sign2016Parser::StructTypeContext *ctx) override;
	void exitStructType(Sign2016Parser::StructTypeContext *ctx) override;

	void enterPtrType(Sign2016Parser::PtrTypeContext * /*ctx*/) override;
	void exitPtrType(Sign2016Parser::PtrTypeContext * /*ctx*/) override;

	void enterFunction(Sign2016Parser::FunctionContext * /*ctx*/) override;
	void exitFunction(Sign2016Parser::FunctionContext * /*ctx*/) override;

	void enterReturnType(Sign2016Parser::ReturnTypeContext * /*ctx*/) override;
	void exitReturnType(Sign2016Parser::ReturnTypeContext * /*ctx*/) override;

	void enterParamType(Sign2016Parser::ParamTypeContext * /*ctx*/) override;
	void exitParamType(Sign2016Parser::ParamTypeContext * /*ctx*/) override;

	void enterTypeQualifier(Sign2016Parser::TypeQualifierContext *ctx) override;
	void exitTypeQualifier(Sign2016Parser::TypeQualifierContext *ctx) override;

	void enterSize(Sign2016Parser::SizeContext * /*ctx*/) override;
	void exitSize(Sign2016Parser::SizeContext * /*ctx*/) override;

	void enterArraySize(Sign2016Parser::ArraySizeContext * /*ctx*/) override;
	void exitArraySize(Sign2016Parser::ArraySizeContext * /*ctx*/) override;

private:
	Model::Node<> &_node;
	Model::Node<> *_current;
};
