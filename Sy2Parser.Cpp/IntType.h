#pragma once

#include "CompositeNode.h"

namespace Model
{
	class IntType : public CompositeNode
	{
	public:
		IntType()
		{
		}

		IntType(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		IntType(const IntType& command)
			: CompositeNode(command)
		{
		}

		IntType(IntType&& command)
			: CompositeNode(std::move(command))
		{
		}

		IntType& operator=(const IntType& command)
		{
			return *this;
		}

		IntType& operator=(IntType&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_INT;
		}

		Node *clone() override
		{
			return new IntType(*this);
		}
	};
}
