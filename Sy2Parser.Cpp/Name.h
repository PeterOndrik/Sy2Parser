#pragma once

#include "LeafNode.h"

namespace Model
{
	class Name : public LeafNode
	{
	public:
		Name()
		{
		}

		Name(SizeType line, SizeType column)
			: LeafNode(line, column)
		{
		}

		Name(const Name& name)
			: LeafNode(name)
		{
		}

		Name(Name&& name)
			: LeafNode(std::move(name))
		{
		}

		Name& operator=(const Name& name)
		{
			return *this;
		}

		Name& operator=(Name&& name)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_NAME;
		}

		Node *clone() override
		{
			return new Name(*this);
		}
	};
}
