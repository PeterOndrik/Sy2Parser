#pragma once

#include "CompositeNode.h"

namespace Model
{
	class FloatType : public CompositeNode
	{
	public:
		FloatType()
		{
		}

		FloatType(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		FloatType(const FloatType& command)
			: CompositeNode(command)
		{
		}

		FloatType(FloatType&& command)
			: CompositeNode(std::move(command))
		{
		}

		FloatType& operator=(const FloatType& command)
		{
			return *this;
		}

		FloatType& operator=(FloatType&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_FLOAT;
		}

		Node *clone() override
		{
			return new FloatType(*this);
		}
	};
}
