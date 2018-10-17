#pragma once

#include "LeafNode.h"

namespace Model
{
	class ArraySize : public LeafNode
	{
	public:
		ArraySize()
		{
		}

		ArraySize(SizeType line, SizeType column)
			: LeafNode(line, column)
		{
		}

		ArraySize(const ArraySize& command)
			: LeafNode(command)
		{
		}

		ArraySize(ArraySize&& command)
			: LeafNode(std::move(command))
		{
		}

		ArraySize& operator=(const ArraySize& command)
		{
			return *this;
		}

		ArraySize& operator=(ArraySize&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_ARRAY_SIZE;
		}

		Node *clone() override
		{
			return new ArraySize(*this);
		}
	};
}
