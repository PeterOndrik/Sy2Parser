#pragma once

#include "CompositeNode.h"

namespace Model
{
	class Symbol : public CompositeNode
	{
	public:
		Symbol()
		{
		}

		Symbol(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		Symbol(const Symbol& symbol)
			: CompositeNode(symbol)
		{
		}

		Symbol(Symbol&& symbol)
			: CompositeNode(std::move(symbol))
		{
		}

		Symbol& operator=(const Symbol& symbol)
		{
			return *this;
		}

		Symbol& operator=(Symbol&& symbol)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_SYMBOL;
		}

		Node *clone() override
		{
			return new Symbol(*this);
		}
	};
}
