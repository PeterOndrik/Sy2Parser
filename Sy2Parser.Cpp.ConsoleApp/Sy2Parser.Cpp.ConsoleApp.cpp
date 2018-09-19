// Sy2Parser.Cpp.ConsoleApp.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "antlr4-runtime.h"
#include "Sy2Lexer.h"
#include "Sy2Parser.h"
#include "Sy2CustomListener.h"
#include "Sign2016Lexer.h"
#include "Sign2016Parser.h"
#include "Node.h"

#include <iostream>
#include <memory>

using namespace std;
using namespace antlr4;
using namespace antlrcpp;

void Progress(Sy2CustomListener::ProgressType progress)
{
	cout << "Progress: " << progress << endl;
}

void ParsedNode(const Model::Node<> *node)
{
	string indent(node->getDepth(), ' ');
	cout << indent << node->getType() << " (" << node->getLine() << ", " << node->getColumn() << "): " << node->getValue() << endl;
	const Model::Node<> *nextNode = node->next();
	while (nextNode && nextNode->getDepth() > node->getDepth())
	{
		indent = string(nextNode->getDepth(), ' ');
		cout << indent << nextNode->getType() << " (" << nextNode->getLine() << ", " << nextNode->getColumn() << "): " << nextNode->getValue() << endl;
		nextNode = nextNode->next();
	}
	cout << endl;
	if (node->parent())
	{
		// it is needed reset inner index of already passed child nodes
		node->parent()->reset();
	}
}

int main()
{
	string fileName = "test-07.sy2";

	ifstream stream(fileName);
	if (!stream.is_open())
	{
		cout << "Failed to open." << endl;
	}
	else
	{
		ANTLRInputStream sy2Input(stream);
		Sy2Lexer sy2Lexer(&sy2Input);
		CommonTokenStream sy2Tokens(&sy2Lexer);
		Sy2Parser sy2Parser(&sy2Tokens);

		Sy2CustomListener listener(fileName);
		listener.setProgressCallback(make_shared<Sy2CustomListener::ProgressCallbackType>(Progress));
		listener.addParsedNodeCallback(make_shared<Sy2CustomListener::ParsedNodeCallbackType>(ParsedNode), Model::Sy2Node::SY2_COMMAND);
		//listener.addParsedNodeCallback(make_shared<Sy2CustomListener::ParsedNodeCallbackType>(ParsedNode), Model::Sy2Node::SY2_SYMBOL);
		//listener.addParsedNodeCallback(make_shared<Sy2CustomListener::ParsedNodeCallbackType>(ParsedNode), Model::Sy2Node::SY2_NAME);
		//listener.addParsedNodeCallback(make_shared<Sy2CustomListener::ParsedNodeCallbackType>(ParsedNode), Model::Sy2Node::SY2_SIGNATURE);
		//listener.addParsedNodeCallback(make_shared<Sy2CustomListener::ParsedNodeCallbackType>(ParsedNode), Model::Sy2Node::SY2_ADDRESS);
		//listener.addParsedNodeCallback(make_shared<Sy2CustomListener::ParsedNodeCallbackType>(ParsedNode), Model::Sy2Node::SY2_FUNCTION);

		sy2Parser.addParseListener(&listener);

		Sy2Parser::FileContext *sy2Tree = sy2Parser.file();

		const Model::Node<> *node = listener.getNode().get();
		while (node)
		{
			string indent(node->getDepth(), ' ');
			cout << indent << node->getType() << " (" << node->getLine() << ", " << node->getColumn() << "): " << node->getValue() << endl;
			node = node->next();
		}
	}

	return 0;
}
