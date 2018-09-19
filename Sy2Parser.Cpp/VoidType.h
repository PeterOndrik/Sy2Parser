#pragma once

#pragma once

#include "LeafNode.h"

namespace Model
{
	class VoidType : public LeafNode
	{
	public:
		VoidType()
		{
		}

		VoidType(SizeType line, SizeType column)
			: LeafNode(line, column)
		{
		}

		VoidType(const VoidType& command)
			: LeafNode(command)
		{
		}

		VoidType(VoidType&& command)
			: LeafNode(std::move(command))
		{
		}

		VoidType& operator=(const VoidType& command)
		{
			return *this;
		}

		VoidType& operator=(VoidType&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_VOID;
		}

		Node *clone() override
		{
			return new VoidType(*this);
		}
	};
}
