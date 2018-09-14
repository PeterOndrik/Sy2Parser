#pragma once

#include "CompositeNode.h"

namespace Model
{
	class Signature : public CompositeNode
	{
	public:
		Signature()
		{
		}

		Signature(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		Signature(const Signature& signature)
			: CompositeNode(signature)
		{
		}

		Signature(Signature&& signature)
			: CompositeNode(std::move(signature))
		{
		}

		Signature& operator=(const Signature& signature)
		{
			return *this;
		}

		Signature& operator=(Signature&& signature)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_SIGNATURE;
		}

		Node *clone() override
		{
			return new Signature(*this);
		}
	};
}