#pragma once

#include "Position.h"

namespace Model
{
	class Bitmask : public Position
	{
	public:
		Bitmask()
		{

		}

		Bitmask(SizeType line, SizeType column)
			: Position(line, column)
		{
		}

		Bitmask(const Bitmask &bitmask)
			: Position(bitmask)
		{
		}

		Bitmask(Bitmask &&bitmask)
			: Position(std::move(bitmask))
		{
		}

		Bitmask& operator=(const Bitmask& bitmask)
		{
			return *this;
		}

		Bitmask& operator=(Bitmask&& bitmask)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_BITMASK;
		}

		Node *clone() override
		{
			return new Bitmask(*this);
		}
	};
}