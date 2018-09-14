#pragma once

#include "LeafNode.h"

namespace Model
{
	class CmdValue : public LeafNode
	{
	public:
		CmdValue()
		{
		}

		CmdValue(SizeType line, SizeType column)
			: LeafNode(line, column)
		{
		}

		CmdValue(const CmdValue &value)
			: LeafNode(value)
		{
		}

		CmdValue(CmdValue &&value)
			: LeafNode(std::move(value))
		{
		}

		CmdValue& operator=(const CmdValue& value)
		{
			return *this;
		}

		CmdValue& operator=(CmdValue&& value)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_CMD_VALUE;
		}

		Node * clone() override
		{
			return new CmdValue(*this);
		}
	};
}
