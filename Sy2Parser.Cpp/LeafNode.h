#pragma once

#include "Node.h"

namespace Model
{
	class LeafNode : public Node<>
	{
	public:
		LeafNode()
		{
		}

		LeafNode(SizeType line, SizeType column)
			: Node(line, column)
		{
		}

		LeafNode(const LeafNode& node)
			: Node(node)
		{
		}

		LeafNode(LeafNode&& node)
			: Node(std::move(node))
		{
		}

		LeafNode& operator=(const LeafNode &node)
		{
			return *this;
		}

		LeafNode& operator=(LeafNode &&node)
		{
			return *this;
		}

		Node *at(SizeType index) const override
		{
			return nullptr;
		}

		void add(Node *) override
		{
		}

		void remove(Node *) override
		{
		}

		void traverse() override
		{
		}

		/*
		Gets onw of the following:
		- next sibling node
		- next parent child node
		- next parent sibling node
		- nullptr
		*/
		const Node *next() const override
		{
			const Node *node = nullptr;

			if (this->parent())
			{
				node = this->parent()->next();
			}

			return node;
		}

		void reset() override
		{
		}
	};
}
