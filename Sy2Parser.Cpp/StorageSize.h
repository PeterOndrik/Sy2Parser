#pragma once

#include "LeafNode.h"

namespace Model
{
	class StorageSize : public LeafNode
	{
	public:
		StorageSize()
		{
		}

		StorageSize(SizeType line, SizeType column)
			: LeafNode(line, column)
		{
		}

		StorageSize(const StorageSize& StorageSize)
			: LeafNode(StorageSize)
		{
		}

		StorageSize(StorageSize&& StorageSize)
			: LeafNode(std::move(StorageSize))
		{
		}

		StorageSize& operator=(const StorageSize& StorageSize)
		{
			return *this;
		}

		StorageSize& operator=(StorageSize&& StorageSize)
		{
			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_SIZE;
		}

		Node *clone() override
		{
			return new StorageSize(*this);
		}
	};
}
