#pragma once


#include "CompositeNode.h"

namespace Model
{
	class Function : public CompositeNode
	{
	public:
		Function()
		{
		}

		Function(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		Function(const Function& command)
			: CompositeNode(command)
		{
		}

		Function(Function&& command)
			: CompositeNode(std::move(command))
		{
		}

		Function& operator=(const Function& command)
		{
			return *this;
		}

		Function& operator=(Function&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_FUNCTION;
		}

		Node *clone() override
		{
			return new Function(*this);
		}
	};
}
