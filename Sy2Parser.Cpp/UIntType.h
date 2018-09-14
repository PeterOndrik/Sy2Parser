#pragma once

#include "CompositeNode.h"

namespace Model
{
	class UIntType : public CompositeNode
	{
	public:
		UIntType()
		{
		}

		UIntType(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		UIntType(const UIntType& command)
			: CompositeNode(command)
		{
		}

		UIntType(UIntType&& command)
			: CompositeNode(std::move(command))
		{
		}

		UIntType& operator=(const UIntType& command)
		{
			return *this;
		}

		UIntType& operator=(UIntType&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_UINT;
		}

		Node *clone() override
		{
			return new UIntType(*this);
		}
	};
}
