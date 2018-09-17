// Sy2Parser.C.ConsoleApp.cpp : Defines the entry point for the console application.
//

#include "sy2parser_api.h"
#include <stdio.h>

Sy2ParserHandle handle = SY2PARSER_INVALID_HANDLE;

void SY2PARSER_API_CALL progressCallback(unsigned int progress)
{
	printf("Progress: %d\n", progress);
}

void SY2PARSER_API_CALL parsedNodeCallback(const T_Sy2Node *node)
{
	printf("%d - %s", node->type, node->value);
	T_Sy2Node newNode = { 0 , 0 };
	Sy2ParserStatus status = sy2ReadNext(handle, &newNode);
	while (status == SY2_SUCCESS && newNode.depth > node->depth)
	{
		printf(", %d - %s", newNode.type, newNode.value);
		status = sy2ReadNext(handle, &newNode);
	}
	printf("\n");
}

int main()
{
	T_Sy2Node node = { 0, 0 };

	Sy2ParserStatus status = sy2Open("test-03.sy2", &handle);
	status = sy2AddParsedNodeCallback(handle, parsedNodeCallback, SY2_COMMAND);
	status = sy2Parse(handle, progressCallback);

	status = sy2ReadNext(handle, &node);
	while (status == SY2_SUCCESS)
	{
		if (node.type == SY2_COMMAND)
		{
			printf("\n");
		}
		printf("%d - %s, ", node.type, node.value);
		status = sy2ReadNext(handle, &node);
	}

	status = sy2Close(handle);

    return 0;
}

