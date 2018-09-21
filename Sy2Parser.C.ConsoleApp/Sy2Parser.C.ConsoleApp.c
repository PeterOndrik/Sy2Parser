// Sy2Parser.C.ConsoleApp.cpp : Defines the entry point for the console application.
//

#include "sy2parser_api.h"
#include <stdio.h>
#include <string.h>

#define INDENT_SIZE 100U

void setIndent(char *indent, int count)
{
	for (int i = 0; i < count; i++)
	{
		indent[i] = ' ';
	}
}

void resetIndent(char *indent)
{
	memset(indent, 0, INDENT_SIZE);
}

void SY2PARSER_API_CALL progressCallback(Sy2ParserHandle handle, unsigned int progress, void *callbackContext)
{
	printf("Progress: %d%%\n", progress);
}

void SY2PARSER_API_CALL parsedNodeCallback(Sy2ParserHandle handle, const T_Sy2Node *node, void *callbackContext)
{
	char indent[INDENT_SIZE] = { 0 };

	setIndent(indent, node->depth);
	printf("%s%s: %s\n", indent, sy2NodeName[node->type], node->value);

	T_Sy2Node newNode = { 0 , 0 };
	Sy2ParserStatus status = sy2ReadNext(handle, &newNode);
	while (status == SY2_SUCCESS && newNode.depth > node->depth)
	{
		setIndent(indent, newNode.depth);
		printf("%s%s: %s\n", indent, sy2NodeName[newNode.type], newNode.value);
		resetIndent(indent);

		status = sy2ReadNext(handle, &newNode);
	}
	printf("\n");
}

int main()
{
	Sy2ParserHandle handle = SY2PARSER_INVALID_HANDLE;
	T_Sy2Node node = { 0, 0 };
	char indent[INDENT_SIZE] = { 0 };

	Sy2ParserStatus status = sy2Open("test-09.sy2", &handle);
	status = sy2SetParsingProgressCallback(handle, progressCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_COMMAND, parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_SYMBOL, parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_SIGNATURE,  parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_NAME,  parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_FUNCTION,  parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_INT, parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_STRUCT, parsedNodeCallback, NULL);

	//status = sy2RemoveParsedNodeCallback(handle, SY2_COMMAND,  parsedNodeCallback);

	status = sy2Parse(handle);

	printf("\n");
	status = sy2ReadNext(handle, &node);
	while (status == SY2_SUCCESS)
	{
		setIndent(indent, node.depth);
		printf("%s%s: %s\n", indent, sy2NodeName[node.type], node.value);
		resetIndent(indent);

		status = sy2ReadNext(handle, &node);
	}

	status = sy2Close(handle);

    return 0;
}
