#include <iostream>
#include <chrono>
#include <thread>	// for std::this_thread::sleep_for, 

#include "sy2parser_api.h"

using namespace std;
using namespace std::chrono_literals;

void SY2PARSER_API_CALL errorCallback(Sy2ParserHandle handle, unsigned int line, unsigned int column, unsigned int code, const char *message, void *callbackContext)
{
	printf("Error: line %u, column %u, code %u, message %s\n", line, column, code, message);
}

void SY2PARSER_API_CALL progressCallback(Sy2ParserHandle handle, unsigned int progress, void *callbackContext)
{
	printf("Progress: %u%%\n", progress);

	//if (progress > 3)
	//{
	//	sy2AbortParsing(handle);
	//}
}

int main()
{
	Sy2ParserHandle handle = SY2PARSER_INVALID_HANDLE;
	T_Sy2Node node = { T_Sy2NodeType::SY2_UNSPECIFIED, 0, 0, 0, 0 };

	Sy2ParserStatus status = sy2Open("..\\Test\\In\\test-19.sy2", &handle);
	status = sy2SetParsingErrorCallback(handle, errorCallback, NULL);
	status = sy2SetParsingProgressCallback(handle, progressCallback, NULL);

	thread t([handle]()
	{
		cout << "Waiting to abort parsing..." << endl;
		this_thread::sleep_for(15s);
		sy2AbortParsing(handle);
		cout << "Parsing aborted." << endl;
	});

	cout << "Parsing started..." << endl;
	status = sy2Parse(handle);

	status = sy2ReadNext(handle, &node);
	while (status == SY2_SUCCESS)
	{
		printf("%s: %s\n", sy2NodeName[node.type], node.value);

		status = sy2ReadNext(handle, &node);
	}

	status = sy2Close(handle);
	cout << "Parsing finished." << endl;

	t.join();
}
