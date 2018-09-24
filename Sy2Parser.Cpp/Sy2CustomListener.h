#pragma once

#include "Sy2BaseListener.h"
#include "Sy2ErrorListener.h"
#include "Sy2Node.h"
#include "Node.h"

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

	void exitCommand(Sy2Parser::CommandContext *ctx) override;

	NodeType getNode() const;
	void setErrorCallback(Sy2ErrorListener::ErrorCallbackPtr callback);
	void setProgressCallback(ProgressCallbackPtr callback);
	void addParsedNodeCallback(ParsedNodeCallbackPtr callback, Model::Sy2Node sy2Node);
	size_t getNumberOfSyntaxErrors();

private:
	typedef std::unordered_multimap<Model::Sy2Node, ParsedNodeCallbackPtr> ParsedNodeCallbackListType;

	NodeType _node;
	ProgressType _size;
	ProgressType _progress;
	Sy2ErrorListener::ErrorCallbackPtr _errorCb;
	ProgressCallbackPtr _progressCb;
	ParsedNodeCallbackListType _parsedNodeCbList;
	std::string _fileName;
	size_t _syntaxErrors;

	void callCallback(const Model::Node<> *node, Model::Sy2Node sy2Node);
};
