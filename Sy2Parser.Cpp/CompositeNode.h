#pragma once

#include <algorithm>
#include <vector>

#include "Node.h"

namespace Model
{
	class CompositeNode : public Node<>
	{
	public:
		CompositeNode()
			: _data{ new ContainerType }, _nextId{ 0 }
		{
		}

		CompositeNode(SizeType line, SizeType column)
			: Node(line, column), _data{ new ContainerType }, _nextId{ 0 }
		{
		}

		CompositeNode(const CompositeNode& node)
			: Node(node), _data{ new ContainerType }, _nextId{ 0 }
		{
			std::for_each(node._data->begin(), node._data->end(), 
				[this](Node *node) 
				{ 
					this->add(node->clone()); 
				});
		}

		CompositeNode(CompositeNode&& node)
			: Node(std::move(node)), _nextId{}
		{
			_data = std::move(node._data);
			node._data = new ContainerType;
			std::for_each(_data->begin(), _data->end(),
				[this](Node *node) 
				{
					Node::add(node);
				});
		}

		CompositeNode& operator=(const CompositeNode &node)
		{
			std::for_each(_data->begin(), _data->end(),
				[](Node *node)
			{
				delete node;
			});
			delete _data;

			_data = new ContainerType;
			std::for_each(node._data->begin(), node._data->end(),
				[this](Node *node)
			{
				this->add(node->clone());
			});

			return *this;
		}

		CompositeNode& operator=(CompositeNode &&node)
		{
			std::for_each(_data->begin(), _data->end(),
				[](Node *node)
			{
				delete node;
			});
			delete _data;

			_data = std::move(node._data);
			node._data = new ContainerType;
			std::for_each(_data->begin(), _data->end(),
				[this](Node *node)
			{
				Node::add(node);
			});

			node.setValue(std::move(node.getValue()));

			return *this;
		}

		~CompositeNode()
		{
			std::for_each(_data->begin(), _data->end(), 
				[](Node *node) 
				{ 
					delete node; 
				});
			delete _data;
		}

		SizeType size() const override
		{
			return _data->size();
		}

		Node *at(SizeType index) const override
		{
			return _data->at(index);
		}

		void add(Node *node) override
		{
			_data->push_back(node);
			Node::add(node);
		}

		void remove(Node *node) override
		{
			/* 
				Erase-remove idion:
				- erase deletes an element from a collection (std::vector) but all elements after the deleted element have to be moved forward (to avoid "gaps" in the collection)
				- std::remove algorithm do not remove elements from the container, but move all elements that don't fit the remove criteria to the front of the range
			*/
			_data->erase(std::remove(_data->begin(), _data->end(), node), _data->end());
		}

		void traverse() override
		{
			std::for_each(_data->begin(), _data->end(),
				[](Node *node) 
				{
					node->traverse();
				});
		}

		/*
		Gets onw of the following:
		- next child node
		- next sibling node
		- next parent child node
		- next parent sibling node
		- nullptr
		*/
		const Node *next() const override
		{
			const Node *node = nullptr;
			if (_nextId < _data->size())
			{
				// next child node
				node = _data->at(_nextId++);
			}
			else if (this->parent())
			{
				// next sibling node or parent child node or parent sibling node or nullptr
				_nextId = 0;
				node = this->parent()->next();
			}
			return node;
		}

		void reset() override
		{
			_nextId = 0;
		}

	protected:
		ContainerType *_data;
		mutable SizeType _nextId;
	};
}
