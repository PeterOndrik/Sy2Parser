from sy2parser_wrapper import *
from os import path

# display of the parsed node
def showNode(handle, addrNode, callbackContext):
	node = cast(addrNode, POINTER(T_Sy2Node)).contents
	print("{}: {}".format(T_Sy2NodeType(node.type).name, node.value))

	newNode = T_Sy2Node()
	status = sy2dll.sy2ReadNext(handle, byref(newNode))
	while newNode.depth > node.depth:
		print("{}: {}".format(T_Sy2NodeType(newNode.type).name, newNode.value))
		status = sy2dll.sy2ReadNext(handle, byref(newNode))
	print()

# create a callback function
parsedNodeCallback = T_ParsedNodeCallback(showNode)

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

	status = sy2dll.sy2AddParsedNodeCallback(handle, T_Sy2NodeType.SY2_COMMAND, parsedNodeCallback, None)

	# parsing
	print("Parsing...")
	status = sy2dll.sy2Parse(handle);
	print("... complete")
	print()

	# closing
	status = sy2dll.sy2Close(handle)
else:
	print("sy2Open() failed: ", hex(status))