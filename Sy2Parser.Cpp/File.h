#pragma once

#include "CompositeNode.h"

namespace Model
{
	class File : public CompositeNode
	{
	public:
		File()
		{
		}

		File(const File& file)
			: CompositeNode(file)
		{
		}

		File(File&& file)
			: CompositeNode(std::move(file))
		{
		}

		File& operator=(const File& file)
		{
			return *this;
		}

		File& operator=(File&& file)
		{
			CompositeNode::operator=(std::move(file));

			return *this;
		}

		Model::Sy2Node getType() const override
		{
			return Model::Sy2Node::SY2_FILE;
		}

		Node *clone() override
		{
			return new File(*this);
		}
	};
}
