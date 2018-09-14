#pragma once

#include "CompositeNode.h"

namespace Model
{
	class PtrType : public CompositeNode
	{
	public:
		PtrType()
		{
		}

		PtrType(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		PtrType(const PtrType& command)
			: CompositeNode(command)
		{
		}

		PtrType(PtrType&& command)
			: CompositeNode(std::move(command))
		{
		}

		PtrType& operator=(const PtrType& command)
		{
			return *this;
		}

		PtrType& operator=(PtrType&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_POINTER;
		}

		Node *clone() override
		{
			return new PtrType(*this);
		}
	};
}
