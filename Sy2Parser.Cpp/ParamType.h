#pragma once

#include "CompositeNode.h"

namespace Model
{
	class ParamType : public CompositeNode
	{
	public:
		ParamType()
		{
		}

		ParamType(SizeType line, SizeType column)
			: CompositeNode(line, column)
		{
		}

		ParamType(const ParamType& command)
			: CompositeNode(command)
		{
		}

		ParamType(ParamType&& command)
			: CompositeNode(std::move(command))
		{
		}

		ParamType& operator=(const ParamType& command)
		{
			return *this;
		}

		ParamType& operator=(ParamType&& command)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_PARAMETER;
		}

		Node *clone() override
		{
			return new ParamType(*this);
		}
	};
}
