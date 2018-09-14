#pragma once

#include "CompositeNode.h"

namespace Model
{
	class Command : public CompositeNode
	{
	public:
		Command()
		{
		}

		Command(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		Command(const Command& command)
			: CompositeNode(command)
		{
		}

		Command(Command&& command)
			: CompositeNode(std::move(command))
		{
		}

		Command& operator=(const Command& command)
		{
			return *this;
		}

		Command& operator=(Command&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_COMMAND;
		}

		Node *clone() override
		{
			return new Command(*this);
		}
	};
}
