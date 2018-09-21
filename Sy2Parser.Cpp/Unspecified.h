#pragma once

#include "CompositeNode.h"

namespace Model
{
	class Unspecified : public CompositeNode
	{
	public:
		Unspecified()
		{
		}

		Unspecified(const Unspecified& Unspecified)
			: CompositeNode(Unspecified)
		{
		}

		Unspecified(Unspecified&& Unspecified)
			: CompositeNode(std::move(Unspecified))
		{
		}

		Unspecified& operator=(const Unspecified& Unspecified)
		{
			return *this;
		}

		Unspecified& operator=(Unspecified&& Unspecified)
		{
			CompositeNode::operator=(std::move(Unspecified));

			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_UNSPECIFIED;
		}

		Node *clone() override
		{
			return new Unspecified(*this);
		}
	};
}
