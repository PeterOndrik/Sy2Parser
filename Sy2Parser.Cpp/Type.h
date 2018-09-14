#pragma once

#include "LeafNode.h"

namespace Model
{
	class Type : public LeafNode
	{
	public:
		Type()
		{
		}

		Type(SizeType line, SizeType column)
			: LeafNode(line, column)
		{
		}

		Type(const Type& type)
			: LeafNode(type)
		{
		}

		Type(Type&& type)
			: LeafNode(std::move(type))
		{
		}

		Type& operator=(const Type& type)
		{
			return *this;
		}

		Type& operator=(Type&& type)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_TYPE;
		}

		Node *clone() override
		{
			return new Type(*this);
		}
	};
}
