from sy2parser_wrapper import *
from os import path

# display an error message
def showError(handle, line, column, status, message, callbackContext):
	print("Error: line {}, column {}, status {}, message {}\n".format(line, column, hex(status), message))
# create a callback function
errorCallback = T_ParsingErrorCallback(showError)

# display of parsing progress
def showProgress(handle, progress, callbackContext):
	print("... progress: {}%".format(progress), end='\r')
# create a callback function
parsingProgressCallback = T_ParsingProgressCallback(showProgress)

status = sy2dll.sy2GetApiVersion()
print("The Sy2 API Version: " + hex(status))

status = sy2dll.sy2GetDllVersion()
print("The Sy2 Parser Version: " + hex(status))
print()

# initialization
sy2file = create_string_buffer(256)
sy2file.value = path.abspath("../../../Test/In/test-19.sy2").encode()
status = sy2dll.sy2Open(sy2file, byref(handle))
if status == T_Sy2ParserStatusCode.SY2_SUCCESS:
	status = sy2dll.sy2GetFileInfo(handle, byref(fileInfo));
	print("Sy2 File Size: {} B".format(fileInfo.size))
	print("Sy2 File Creation: {}-{}-{}".format(fileInfo.creation.year, fileInfo.creation.month, fileInfo.creation.day))
	print()

	status = sy2dll.sy2SetParsingErrorCallback(handle, errorCallback, None);
	status = sy2dll.sy2SetParsingProgressCallback(handle, parsingProgressCallback, None)

	# parsing
	print("Parsing...")
	status = sy2dll.sy2Parse(handle);
	print(end='\n')
	print("... complete")
	print()

	print("Result: ")
	if status == T_Sy2ParserStatusCode.SY2_SUCCESS:
		# printing AST
		status = sy2dll.sy2ReadNext(handle, byref(node))
		while status != T_Sy2ParserStatusCode.SY2_EOF:
			if node.type == T_Sy2NodeType.SY2_COMMAND:
				print()
			print("{}: {}".format(T_Sy2NodeType(node.type).name, node.value))
			status = sy2dll.sy2ReadNext(handle, byref(node))

	# closing
	status = sy2dll.sy2Close(handle)
else:
	print("sy2Open() failed: ", hex(status))