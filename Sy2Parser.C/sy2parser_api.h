#ifndef SY2PARSER_API_H
#define SY2PARSER_API_H

/*!
\file uda2_api.h
*/

/*!
\mainpage The SY2 PARSER API

\tableofcontents

\section sec_introduction Introduction

Node Relationships

The nodes in the node tree have a hierarchical relationship to each other.
The terms parent, child, and sibling are used to describe the relationships.

In a node tree, the top node is called the root (or root node)
Every node has exactly one parent, except the root (which has no parent)
A node can have a number of children
Siblings (brothers or sisters) are nodes with the same parent


*/

// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the SY2PARSER_API_EXPORT
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// SY2PARSER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SY2PARSER_API_EXPORT
// API function declaration used if the .h file is included by the DLL implementation itself.
#define SY2PARSER_API __declspec(dllexport)
#else
// API function declaration used if the .h file is included (imported) by client code.
#define SY2PARSER_API __declspec(dllimport)
#endif

// Calling convention of exported API functions.
#define SY2PARSER_API_CALL __stdcall

#ifdef __cplusplus
extern "C" {
#endif

/*!
\defgroup sy2parser_api_version_constants Interface Version Constants
@{

\brief Version number of the programming interface exported from the DLL.

If changes are made to the interface that are compatible with previous versions
of the interface then the minor version number will be incremented.
If changes are made to the interface that cause an incompatibility with previous versions
of the interface then the major version number will be incremented.

It can use udaGetApiVersion() to retrieve the API version implemented by the DLL.
*/
//! Major version number of the programming interface.
#define SY2PARSER_API_MAJOR_VERSION   0
//! Minor version number of the programming interface.
#define SY2PARSER_API_MINOR_VERSION   1

//! Version number of the programming interface as DWORD.
#define SY2PARSER_API_VERSION ( (((unsigned int)SY2PARSER_API_MAJOR_VERSION) << 16) | ((unsigned int)SY2PARSER_API_MINOR_VERSION) ) 
/*!
@}
*/

/*!
\defgroup uda_device_constants_types Constants and Types
@{

\brief Constants and types used in the programming interface.
*/

//! The value zero is an invalid handle.
#define SY2PARSER_INVALID_HANDLE	0

//! Status code returned by API functions, see \ref sec_status_codes_handling.
typedef unsigned int Sy2ParserStatus;

//! Sy2 Parser handle type used by the DLL. The value #UDA_INVALID_HANDLE (zero) is an invalid handle.
typedef unsigned int Sy2ParserHandle;

//! Sy2 Parser status codes
typedef enum Sy2ParserStatusCode
{
	SY2_SUCCESS			= 0x0,			//!< The operation completed successfully.
	SY2_FAILD			= 0x1,			//!< The operation failed.
	SY2_FILE_NOT_FOUND	= 0x2,			//!< File not found.
	SY2_EOF				= 0x3,			//!< End of file.
	SY2_UNKNOWN_TOKEN	= 0x4,			//!< Unknown token.
	SY2_INVALID_HANDLE = 0x05,
} T_Sy2ParserStatusCode;

typedef enum Sy2NodeType
{
	SY2_UNSPECIFIED,
	SY2_FILE,
	SY2_COMMAND,
	SY2_CMD_VALUE,
	SY2_SYMBOL,
	SY2_TYPE,
	SY2_NAME,
	SY2_BITMASK,
	SY2_OFFSET,
	SY2_ADDRESS,
	SY2_ENUM_VALUE,
	SY2_SIGNATURE,
	SY2_VOID,
	SY2_INT,
	SY2_UINT,
	SY2_FLOAT,
	SY2_STRUCT,
	SY2_POINTER,
	SY2_FUNCTION,
	SY2_RETURN,
	SY2_PARAMETER,
	SY2_TYPE_QUALIFIER,
	SY2_SIZE,
	SY2_ARRAY_SIZE
} T_Sy2NodeType;

typedef struct Sy2Node
{
	T_Sy2NodeType type;
	char value[256];
	unsigned int depth;
	unsigned int line;
	unsigned int column;
} T_Sy2Node;

/*!
@}
*/

typedef void SY2PARSER_API_CALL ParsingProgressCallback(Sy2ParserHandle handle, unsigned int progress, void *callbackContext);
typedef void SY2PARSER_API_CALL ParsedNodeCallback(Sy2ParserHandle handle, const T_Sy2Node *node, void *callbackContext);

/*!
\brief Open a Sy2 Parser by using a file name.

\param[in] fileName
Specifies the name of a file to be parse.
Parsing and then close the specified file.

\param[out] handle
Address of a caller-provided variable which will be set to a handle value if the function succeeds.
The handle represents a Sy2 Parser instance and is required for all subsequent API calls.
Note that the value #SY2PARSER_INVALID_HANDLE (zero) is an invalid handle.
If the function succeeds it will return a valid non-zero handle.

\return
The function returns #SY2_SUCCESS if successful, an error code otherwise.
Some specific error codes are described below.

\retval #SY2_FILE_NOT_FOUND
The file is not present.
*/
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2Open(const char *fileName, Sy2ParserHandle *handle);

/*!
\brief Close an opened Sy2 Parser.

The specified Sy2 Parser will be closed and the provided handle becomes invalid
after this call. The handle must not be used with any further API calls.

\param[in] handle
A descriptor identifying a Sy2 Parser.
The specified handle becomes invalid after this call and must not be used with any subsequent call.

\return
The function returns #SY2_SUCCESS if successful, an error code otherwise.
If a valid handle is specified, the function returns always #SY2_SUCCESS.
*/
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2Close(Sy2ParserHandle handle);

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2SetParsingProgressCallback(Sy2ParserHandle handle, ParsingProgressCallback *callback, void *callbackContext);
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2AddParsedNodeCallback(Sy2ParserHandle handle, T_Sy2NodeType nodeType, ParsedNodeCallback *callback, void *callbackContext);
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2RemoveParsedNodeCallback(Sy2ParserHandle handle, T_Sy2NodeType nodeType, ParsedNodeCallback *callback);

/*!
Performs a single-call parse of an Sy2 file associated with a handle.
Returns when one of the following occurs:
- The parser reaches the end of the file.
- A callback invokes RETURN ERROR.
- An error occurred because the parser could not start or could not continue parsing.


While sy2Parse is running, each time the parser detects an node, the corresponding callback is invoked.
*/
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2Parse(Sy2ParserHandle handle);

/*!
Read next.
*/
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2ReadNext(const Sy2ParserHandle handle, T_Sy2Node *node);

#ifdef __cplusplus

}
#endif

#endif
