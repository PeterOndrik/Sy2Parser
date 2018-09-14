#pragma once

#include "Sy2BaseListener.h"
#include "Sy2Node.h"
#include "Node.h"
#include "Command.h"
#include "Symbol.h"

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

	~Sy2CustomListener()
	{
	}

	void enterFile(Sy2Parser::FileContext *ctx) override;
	void exitFile(Sy2Parser::FileContext *ctx) override;
	void exitCommand(Sy2Parser::CommandContext *ctx) override;

	NodeType getNode() const;
	void setProgressCallback(ProgressCallbackPtr callback);
	void addParsedNodeCallback(ParsedNodeCallbackPtr callback, Model::Sy2Node sy2Node);

private:
	typedef std::unordered_multimap<size_t, ParsedNodeCallbackPtr> ParsedNodeCallbackListType;

	NodeType _node;
	ProgressType _size;
	ProgressType _progress;
	ProgressCallbackPtr _progressCb;
	ParsedNodeCallbackListType _parsedNodeCbList;

	void callCallback(const Model::Node<> *node, Model::Sy2Node sy2Node);
};
