#pragma once

#include "CompositeNode.h"

namespace Model
{
	class ReturnType : public CompositeNode
	{
	public:
		ReturnType()
		{
		}

		ReturnType(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		ReturnType(const ReturnType& command)
			: CompositeNode(command)
		{
		}

		ReturnType(ReturnType&& command)
			: CompositeNode(std::move(command))
		{
		}

		ReturnType& operator=(const ReturnType& command)
		{
			return *this;
		}

		ReturnType& operator=(ReturnType&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_RETURN;
		}

		Node *clone() override
		{
			return new ReturnType(*this);
		}
	};
}
