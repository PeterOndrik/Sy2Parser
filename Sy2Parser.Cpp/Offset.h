#pragma once

#include "Position.h"

namespace Model
{
	class Offset : public Position
	{
	public:
		Offset()
		{
		}

		Offset(SizeType line, SizeType column)
			: Position(line, column)
		{
		}

		Offset(const Offset &offset)
			: Position(offset)
		{
		}

		Offset(Offset &&offset)
			: Position(std::move(offset))
		{
		}

		Offset& operator=(const Offset& offset)
		{
			return *this;
		}

		Offset& operator=(Offset&& offset)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_OFFSET;
		}

		Node *clone() override
		{
			return new Offset(*this);
		}
	};
}
