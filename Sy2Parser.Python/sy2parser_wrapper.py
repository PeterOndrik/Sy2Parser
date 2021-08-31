from ctypes import *
from enum import IntEnum, unique

# the dll loader
# windll libraries call functions using the stdcall calling convention
# functions are accessed as attributes of the sy2dll object
sy2dll = windll.LoadLibrary("sy2parser.dll")

# Sy2 Parser status codes
@unique
class T_Sy2ParserStatusCode(IntEnum):
	SY2_SUCCESS					= 0x0000			# The operation completed successfully.
	SY2_FAILD					= 0x0001			# The operation failed.
	SY2_FILE_NOT_FOUND			= 0x0002			# File not found.
	SY2_EOF						= 0x0003			# End of file.
	SY2_INVALID_HANDLE			= 0x0004			# An invalid parser handle.
	SY2_INPUT_MISMATCHED		= 0x1000			# This signifies any kind of mismatched input error such as when the current input does not match the expected token.
	SY2_EXTRAENOUS_INPUT		= 0x1001			# A syntax error which requires the removal of a token from the input stream.
	SY2_NO_VIABLE_ALTERNATIVE	= 0x1002			# Indicates that the parser could not decide which of two or more paths to take based upon the remaining input.
	SY2_MISSING_TOKEN			= 0x1003			# This method is called to report a syntax error which requires the insertion of a missing token into the input stream.
	SY2_PARSING_ABORTED			= 0x1FFE			# Occurs when parsing was canceled by user.
	SY2_UNKNOWN					= 0x1FFF			# An unknown error.

# Sy2 Node types
@unique
class T_Sy2NodeType(IntEnum):
	SY2_UNSPECIFIED		= 0
	SY2_FILE			= 1
	SY2_COMMAND			= 2
	SY2_CMD_VALUE		= 3
	SY2_TYPEDEF			= 4
	SY2_SYMBOL			= 5
	SY2_TYPE			= 6
	SY2_NAME			= 7
	SY2_BITMASK			= 8
	SY2_OFFSET			= 9
	SY2_ADDRESS			= 10
	SY2_ENUM_VALUE		= 11
	SY2_SIGNATURE		= 12
	SY2_VOID			= 13
	SY2_BOOL			= 14
	SY2_INT				= 15
	SY2_UINT			= 16
	SY2_FLOAT			= 17
	SY2_STRUCT			= 18
	SY2_POINTER			= 19
	SY2_FUNCTION		= 20
	SY2_RETURN			= 21
	SY2_PARAMETER		= 22
	SY2_TYPE_QUALIFIER	= 23
	SY2_SIZE			= 24
	SY2_ARRAY_SIZE		= 25
	SY2_NODE_COUNT		= 26

# The basic information to unique Sy2 node identification. The Sy2 node represents a terminal and a non-terminal lexical token.
class T_Sy2Node(Structure):
	_fields_ = [("type", c_uint),
				("value", c_char * 512),
				("depth", c_uint),
				("line", c_uint),
				("column", c_uint),
				("status", c_uint)
				]

# represents the date and time of a parsed file
class T_FileDateTime(Structure):
	_fields_ = [("year", c_ushort),
				("month", c_ushort),
				("dayOfWeek", c_ushort),
				("day", c_ushort),
				("hour", c_ushort),
				("minute", c_ushort),
				("second", c_ushort),
				("milliseconds", c_ushort)
				]

# represents a parsed file information
class T_Sy2FileInfo(Structure):
    _fields_ = [("size", c_uint),
                ("creation", T_FileDateTime),
                ("lastAccess", T_FileDateTime),
                ("lastWrite", T_FileDateTime)
                ]

# the CFUNCTYPE() factory function creates types for callback functions using the cdecl calling convention
# the WINFUNCTYPE() factory function creates types for callback functions using the stdcall calling convention

# callback function which is called when parsing progress is changed
T_ParsingProgressCallback = WINFUNCTYPE(c_void_p, c_uint, c_uint, c_void_p)

# callback function which is called after a node is completely parsed
T_ParsedNodeCallback = WINFUNCTYPE(c_void_p, c_uint, POINTER(T_Sy2Node), c_void_p)

# status code definition
status = c_uint()
# file handle definition
handle = c_uint()
# info about an open file
fileInfo = T_Sy2FileInfo()
# sy2 node
node = T_Sy2Node()
