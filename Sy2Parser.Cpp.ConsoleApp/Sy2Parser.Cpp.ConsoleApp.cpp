// Sy2Parser.Cpp.ConsoleApp.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "antlr4-runtime.h"
#include "Sy2Lexer.h"
#include "Sy2Parser.h"
#include "Sy2CustomErrorListener.h"
#include "Sy2CustomListener.h"
#include "Sign2016Lexer.h"
#include "Sign2016Parser.h"
#include "Node.h"

#include <iostream>
#include <memory>

using namespace std;
using namespace antlr4;
using namespace antlrcpp;

void Error(size_t line, size_t column, const string &message, exception_ptr e)
{
	cerr << "Error: line " << line << ":" << column << " " << message << endl;
}

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
	string fileName = "..\\Test\\In\\test-00.sy2";

	ifstream stream(fileName);
	if (!stream.is_open())
	{
		cout << "Failed to open." << endl;
	}
	else
	{
		ANTLRInputStream sy2Input(stream);

		Sy2CustomErrorListener sy2ErrorListener;
		sy2ErrorListener.setErrorCallback(make_shared<Sy2CustomErrorListener::ErrorCallbackType>(Error));

		Sy2Lexer sy2Lexer(&sy2Input);
		sy2Lexer.removeErrorListeners();	// antlr4::ConsoleErrorListener is registered default
		sy2Lexer.addErrorListener(&sy2ErrorListener);

		CommonTokenStream sy2Tokens(&sy2Lexer);

		Sy2Parser sy2Parser(&sy2Tokens);
		sy2Parser.removeErrorListeners();
		sy2Parser.addErrorListener(&sy2ErrorListener);

		Sy2CustomListener listener(fileName);
		listener.setErrorCallback(make_shared<Sy2CustomErrorListener::ErrorCallbackType>(Error));
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

		cout << endl;
		cout << "Number of syntax errors (Sy2 Lexer): " << sy2Lexer.getNumberOfSyntaxErrors() << endl;
		cout << "Number of syntax errors (Sy2 Parser): " << sy2Parser.getNumberOfSyntaxErrors() << endl;
		cout << "Number of syntax errors (Sign 2016): " << listener.getNumberOfSyntaxErrors() << endl;
	}

	return 0;
}
