#pragma once

#include "CompositeNode.h"

namespace Model
{
	class TypeDefinition : public CompositeNode
	{
	public:
		TypeDefinition()
		{
		}

		TypeDefinition(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		TypeDefinition(const TypeDefinition& typeDefinition)
			: CompositeNode(typeDefinition)
		{
		}

		TypeDefinition(TypeDefinition&& typeDefinition)
			: CompositeNode(std::move(typeDefinition))
		{
		}

		TypeDefinition& operator=(const TypeDefinition& typeDefinition)
		{
			return *this;
		}

		TypeDefinition& operator=(TypeDefinition&& typeDefinition)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_TYPEDEF;
		}

		Node *clone() override
		{
			return new TypeDefinition(*this);
		}
	};
}
