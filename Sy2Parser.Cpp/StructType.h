#pragma once

#include "CompositeNode.h"

namespace Model
{
	class StructType : public CompositeNode
	{
	public:
		StructType()
		{
		}

		StructType(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		StructType(const StructType& command)
			: CompositeNode(command)
		{
		}

		StructType(StructType&& command)
			: CompositeNode(std::move(command))
		{
		}

		StructType& operator=(const StructType& command)
		{
			return *this;
		}

		StructType& operator=(StructType&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_STRUCT;
		}

		Node *clone() override
		{
			return new StructType(*this);
		}
	};
}
