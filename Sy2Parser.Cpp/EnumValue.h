#pragma once

#include "Position.h"

namespace Model
{
	class EnumValue : public Position
	{
	public:
		EnumValue()
		{
		}

		EnumValue(SizeType line, SizeType column)
			: Position(line, column)
		{
		}

		EnumValue(const EnumValue &value)
			: Position(value)
		{
		}

		EnumValue(EnumValue &&value)
			: Position(std::move(value))
		{
		}

		EnumValue& operator=(const EnumValue& value)
		{
			return *this;
		}

		EnumValue& operator=(EnumValue&& value)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_ENUM_VALUE;
		}

		Node * clone() override
		{
			return new EnumValue(*this);
		}
	};
}
