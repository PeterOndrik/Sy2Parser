#pragma once

#include "Position.h"

namespace Model
{
	class Address : public Position
	{
	public:
		Address()
		{
		}

		Address(SizeType line, SizeType column)
			: Position(line, column)
		{
		}

		Address(const Address &address)
			: Position(address)
		{
		}

		Address(Address &&address)
			: Position(std::move(address))
		{
		}

		Address& operator=(const Address& address)
		{
			return *this;
		}

		Address& operator=(Address&& address)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_ADDRESS;
		}

		Node * clone() override
		{
			return new Address(*this);
		}
	};
}
