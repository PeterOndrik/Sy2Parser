#pragma once

#include "LeafNode.h"

namespace Model
{
	/*!
	Abstract class.
	*/
	class Position : public LeafNode
	{
	public:
		Position & operator=(const Position& position)
		{
			return *this;
		}

		Position& operator=(Position&& position)
		{
			return *this;
		}

	protected:
		Position() = default;

		Position(SizeType line, SizeType column)
			: LeafNode(line, column)
		{
		}

		Position(const Position& position)
			: LeafNode(position)
		{
		}

		Position(Position&& position)
			: LeafNode(std::forward<Position>(position))
		{
		}
	};
}
