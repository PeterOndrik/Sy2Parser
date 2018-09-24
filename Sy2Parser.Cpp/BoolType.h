#pragma once

#include "CompositeNode.h"

namespace Model
{
	class BoolType : public CompositeNode
	{
	public:
		BoolType()
		{
		}

		BoolType(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		BoolType(const BoolType& command)
			: CompositeNode(command)
		{
		}

		BoolType(BoolType&& command)
			: CompositeNode(std::move(command))
		{
		}

		BoolType& operator=(const BoolType& command)
		{
			return *this;
		}

		BoolType& operator=(BoolType&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_BOOL;
		}

		Node *clone() override
		{
			return new BoolType(*this);
		}
	};
}
