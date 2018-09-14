#pragma once

#include "LeafNode.h"

namespace Model
{
	class TypeQualifier : public LeafNode
	{
	public:
		TypeQualifier()
		{
		}

		TypeQualifier(SizeType line, SizeType column)
			: LeafNode(line, column)
		{
		}

		TypeQualifier(const TypeQualifier &value)
			: LeafNode(value)
		{
		}

		TypeQualifier(TypeQualifier &&value)
			: LeafNode(std::move(value))
		{
		}

		TypeQualifier& operator=(const TypeQualifier& value)
		{
			return *this;
		}

		TypeQualifier& operator=(TypeQualifier&& value)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_TYPE_QUALIFIER;
		}

		Node * clone() override
		{
			return new TypeQualifier(*this);
		}
	};
}
