#include "sy2parser_api.h"
#include <stdio.h>  // printf()
#include <string.h>  // memset()

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

void SY2PARSER_API_CALL errorCallback(Sy2ParserHandle handle, unsigned int line, unsigned int column, unsigned int code, const char *message, void *callbackContext)
{
	printf("Error: line %u, column %u, code 0x%04X, message %s\n", line, column, code, message);
}

void SY2PARSER_API_CALL progressCallback(Sy2ParserHandle handle, unsigned int progress, void *callbackContext)
{
	printf("Progress: %u%%\n", progress);

	//if (progress > 3)
	//{
	//	sy2AbortParsing(handle);
	//}
}

void SY2PARSER_API_CALL parsedNodeCallback(Sy2ParserHandle handle, const T_Sy2Node *node, void *callbackContext)
{
	char indent[INDENT_SIZE] = { 0 };

	setIndent(indent, node->depth);
	printf("%s%s (0x%04X): %s\n", indent, sy2NodeName[node->type], node->status, node->value);

	T_Sy2Node newNode = { 0 };
	Sy2ParserStatus status = sy2ReadNext(handle, &newNode);
	while (newNode.depth > node->depth)
	{
		setIndent(indent, newNode.depth);
		printf("%s%s (0x%04X): %s\n", indent, sy2NodeName[newNode.type], status, newNode.value);
		resetIndent(indent);

		status = sy2ReadNext(handle, &newNode);
	}
	printf("\n");
}

int main()
{
	Sy2ParserHandle handle = SY2PARSER_INVALID_HANDLE;
	T_Sy2Node node = { 0 };
	char indent[INDENT_SIZE] = { 0 };

	unsigned int apiVer = sy2GetApiVersion();
	unsigned int dllVer = sy2GetDllVersion();

	Sy2ParserStatus status = sy2Open("..\\Test\\In\\test-00.sy2", &handle);
	T_Sy2FileInfo fileInfo;
	status = sy2GetFileInfo(handle, &fileInfo);

	status = sy2SetParsingErrorCallback(handle, errorCallback, NULL);
	//status = sy2SetParsingProgressCallback(handle, progressCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_COMMAND, parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_TYPEDEF, parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_SYMBOL, parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_SIGNATURE,  parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_NAME,  parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_FUNCTION,  parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_INT, parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_STRUCT, parsedNodeCallback, NULL);
	//status = sy2AddParsedNodeCallback(handle, SY2_UNSPECIFIED, parsedNodeCallback, NULL);

	//status = sy2RemoveParsedNodeCallback(handle, SY2_COMMAND,  parsedNodeCallback);

	status = sy2Parse(handle);

	printf("\n");
	status = sy2ReadNext(handle, &node);
	while (status != SY2_EOF)
	{
		setIndent(indent, node.depth);
		printf("%s%s (0x%04X): %s\n", indent, sy2NodeName[node.type], status, node.value);
		resetIndent(indent);

		status = sy2ReadNext(handle, &node);
	}

	status = sy2Close(handle);

    return 0;
}
