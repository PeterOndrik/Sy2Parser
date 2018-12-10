#pragma once

#include <string>
#include "Sy2Node.h"

namespace Model
{
	/*!
	The code traverses a list of INode objects and does different things depending on the type of INode.
	*/
	template <template <typename ELEM, typename ALLOC = std::allocator<ELEM>> typename CONT = std::vector>
	class Node
	{
	public:
		typedef size_t SizeType;
		typedef CONT<Node *> ContainerType;

		Node()
			: _parent{ nullptr }, _value{ "" }, _depth{ 0 }, _line{ 0 }, _column{ 0 }, _exception{ nullptr }
		{
		}

		Node(SizeType line, SizeType column)
			: _parent{ nullptr }, _value{ "" }, _depth{ 0 }, _line{ line }, _column{ column }
		{
		}

		Node(const Node& node)
			: _parent{ nullptr }, _value{ node._value }, _depth{ node._depth }, _line{ node._line }, _column{ node._column }, _exception{ node._exception }
		{
		}

		Node(Node&& node)
			: _parent{ nullptr }, _value{ std::move(node._value) }, _depth{ std::move(node._depth) }, _line{ std::move(node._line) }, _column{ std::move(node._column) }, _exception{ std::move(node._exception) }
		{
		}

		Node& operator=(const Node& node)
		{
			_parent = nullptr;
			_value = node._value;
			_depth = node._depth;
			_line = node._line;
			_column = node._column;
			_exception = node._exception;

			return *this;
		}
		
		// Taking rvalue reference as parameter is that internally they treat their paramaeter as lvalue.
		Node& operator=(Node&& node)
		{
			_parent = nullptr;
			_value = std::move(node._value);
			_depth = std::move(node._depth);
			_line = std::move(node._line);
			_column = std::move(node._column);
			if (node._exception != nullptr)
			{
				_exception = std::move(node._exception);
			}
		}

		// Making base class destructor virtual guarantees that the object of derived class is destructed properly, i.e., both base class and derived class destructors are called.
		virtual ~Node()
		{
		}

		virtual Model::Sy2Node getType() const
		{
			return Model::Sy2Node::SY2_UNSPECIFIED;
		}

		virtual SizeType size() const
		{
			return 0;
		}

		virtual Node *at(SizeType index) const = 0;

		Node *parent() const
		{
			return _parent;
		}

		SizeType getIndex() const
		{
			Node *parent = this->parent();
			if (parent != nullptr)
			{
				for (SizeType i = 0; i < parent->size(); i++)
				{
					if (this == parent->at(i))
					{
						return i;
					}
				}
			}
			return 0;
		}

		void setValue(std::string value)
		{
			_value = value;
		}

		std::string getValue() const
		{
			return _value;
		}

		SizeType getDepth() const
		{
			return _depth;
		}

		void setDepth(SizeType depth)
		{
			_depth = depth;
		}

		SizeType getLine() const
		{
			return _line;
		}

		SizeType getColumn() const
		{
			return _column;
		}

		std::exception_ptr getException() const
		{
			return _exception;
		}

		void setException(std::exception_ptr e)
		{
			_exception = e;
		}

		virtual void add(Node *node)
		{
			node->_parent = this;
			node->_depth = this->_depth + 1;
		};

		virtual void remove(Node *node) = 0;
		virtual void traverse() = 0;
		// A const class objects can only explicitly call const member functions.
		virtual const Node *next() const = 0;
		virtual Node *clone() = 0;
		virtual void reset() = 0;

	private:
		Node * _parent;
		std::string _value;
		SizeType _depth;
		SizeType _line;
		SizeType _column;
		/// The exception that forced this rule to return. If the rule successfully completed, this is "null exception pointer".
		std::exception_ptr _exception;
	};
}
