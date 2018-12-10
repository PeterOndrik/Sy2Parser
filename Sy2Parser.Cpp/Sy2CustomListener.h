#pragma once

#include "Sy2BaseListener.h"
#include "Sy2CustomErrorListener.h"
#include "Sy2Node.h"
#include "Node.h"
#include "Command.h"
#include "TypeDefinition.h"
#include "Symbol.h"
#include "Signature.h"

//! Represents custom implementation of Sy2Listener.
class Sy2CustomListener : public Sy2BaseListener
{
public:
	typedef size_t ProgressType;
	/*
	https://stackoverflow.com/questions/2298242/callback-functions-in-c
	https://documentation.progress.com/output/ua/OpenEdge_latest/index.html#page/dvref%2Fsax-parse(-)-method.html%23
	*/
	typedef std::function<void(ProgressType)> ProgressCallbackType;
	typedef std::function<void(const Model::Node<> *)> ParsedNodeCallbackType;
	typedef std::shared_ptr<ProgressCallbackType> ProgressCallbackPtr;
	typedef std::shared_ptr<ParsedNodeCallbackType> ParsedNodeCallbackPtr;
	typedef std::shared_ptr<Model::Node<>> NodeType;

	Sy2CustomListener();
	Sy2CustomListener(const std::string &fileName);

	~Sy2CustomListener()
	{
	}

	void enterFile(Sy2Parser::FileContext *ctx) override;
	void exitFile(Sy2Parser::FileContext *ctx) override;

	void enterCommand(Sy2Parser::CommandContext *ctx) override;
	void exitCommand(Sy2Parser::CommandContext *ctx) override;

	void enterTypeDefinition(Sy2Parser::TypeDefinitionContext *ctx) override;
	void exitTypeDefinition(Sy2Parser::TypeDefinitionContext *ctx) override;

	void enterSymbol(Sy2Parser::SymbolContext *ctx) override;
	void exitSymbol(Sy2Parser::SymbolContext *ctx) override;

	void enterSignature(Sy2Parser::SignatureContext *ctx) override;
	void exitSignature(Sy2Parser::SignatureContext *ctx) override;

	void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override;

	NodeType getNode() const;
	void setErrorCallback(Sy2CustomErrorListener::ErrorCallbackPtr callback);
	void setProgressCallback(ProgressCallbackPtr callback);
	void addParsedNodeCallback(ParsedNodeCallbackPtr callback, Model::Sy2Node sy2Node);
	size_t getNumberOfSyntaxErrors();

	void setParser(antlr4::Parser *recognizer)
	{
		_recognizer = recognizer;
	}

	antlr4::Parser *getParser() const
	{
		return _recognizer;
	}

private:
	typedef std::unordered_multimap<Model::Sy2Node, ParsedNodeCallbackPtr> ParsedNodeCallbackListType;

	NodeType _rootNode;
	Model::Node<> *_currentNode;
	Model::Command *_currentCommand;
	Model::TypeDefinition *_currentTypeDefinition;
	Model::Symbol *_currentSymbol;
	Model::Signature *_currentSignature;
	ProgressType _size;
	ProgressType _progress;
	Sy2CustomErrorListener::ErrorCallbackPtr _errorCb;
	ProgressCallbackPtr _progressCb;
	ParsedNodeCallbackListType _parsedNodeCbList;
	std::string _fileName;
	size_t _syntaxErrors;
	antlr4::Parser *_recognizer;
	std::vector<Model::Node<> *> _unspecifiedNodeList;

	void callCallback(const Model::Node<> *node, Model::Sy2Node sy2Node);
};
