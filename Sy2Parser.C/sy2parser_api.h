#ifndef SY2PARSER_API_H
#define SY2PARSER_API_H

/*!
\file sy2parser_api.h
*/

/*!
\mainpage Sy2 Parser API

\tableofcontents

\section sec_introduction Introduction

A parser is a software component that takes input data and builds an abstract syntax tree (ABS). The Sy2 Parser reads a symbol file in the Sy2 format and builds a corresponding ABS.
This API provides functions to parse a file and read such created ABS. The nodes in the tree have a hierarchical relationship to each other. The terms parent, child, and sibling are used to describe the relationships.


The Sy2 format is primarily designed for a test engine but contains lots of information for any tool which needs to work with symbols of a source program. A symbol represents 
a data type, variable or function. Each line starts with a command keyword followed by a value or the symbol attributes.

For example:
- command to specify a type of signature version of a symbol file (the signature describes a data type of a symbol):
\code
  TEngSetSignVersion 2016
\endcode

- commands to specify a variable of 32-bit integer data type and const pointer to unsigned char data type
C-style syntax: 
\code
  uint32_t var1;
  uint8_t * const var2;
\endcode
\code
# Command Type   Name            Address     Signature
# ----------------------------------------------------
RegCmd    DATA   var1            0040DD0C    I32
RegCmd    DATA   var2            0040DE20    C_PTR32_UI8
\endcode

A line started by the '#' sign is a comment. Columns "Type", "Name", "Address" and "Signature" are symbol attributes, where "Signature" describes data type. The Sy2 format is used to describe data type 
signature version 2016.

The Sy2 Parser generates following ABS for example above:
\image html Sy2-1.PNG "Figure 1: Sy2 ABS Example"

The signature is internally parsed separated Sign2016 Parser but the API provides the same functions.
For example ABS for the signatures above is following:
<table align="center">
<tr>
<td>
\image html Sign2016-1.PNG Figure 2: Sign2016 "I32" ABS Example
</td>
<td>
\image html Sign2016-2.PNG Figure 3: Sign2016 "C_PTR32_UI8" ABS Example
</td>
</tr>
</table>
The Sy2 Parser is provided as dynamic link library \c sy2parser.dll. 
The programming interface consists of C-style functions which signatures are availale in \c sy2parser_api.h.
\section sec_open_parse_view_example Read ABS after parsing
To parse and display ABS the following code can be used:
\code
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

void SY2PARSER_API_CALL errorCallback(Sy2ParserHandle handle, unsigned int line, unsigned int column, const char *message, void *callbackContext)
{
  printf("Error: line %u, column %u, message %s\n", line, column, message);
}

void SY2PARSER_API_CALL progressCallback(Sy2ParserHandle handle, unsigned int progress, void *callbackContext)
{
  printf("Progress: %u%%\n", progress);
}

int main()
{
  Sy2ParserHandle handle = SY2PARSER_INVALID_HANDLE;
  T_Sy2Node node = { 0 };
  char indent[INDENT_SIZE] = { 0 };

  // initialization
  Sy2ParserStatus status = sy2Open("test.sy2", &handle);
  status = sy2SetParsingErrorCallback(handle, errorCallback, NULL);
  status = sy2SetParsingProgressCallback(handle, progressCallback, NULL);

  // parsing
  status = sy2Parse(handle);

  // printing ABS
  status = sy2ReadNext(handle, &node);
  while (status == SY2_SUCCESS)
  {
    setIndent(indent, node.depth);
    printf("%s%s: %s\n", indent, sy2NodeName[node.type], node.value);
    resetIndent(indent);

    status = sy2ReadNext(handle, &node);
  }

  // closing
  status = sy2Close(handle);

  return 0;
}
\endcode

Input the test.sy2 file:
\code
TEngSetSignVersion 2016

# Command Type   Name            Address     Signature
# ----------------------------------------------------
RegCmd    DATA   var1            0040DD0C    I32
RegCmd    DATA   var2            0040DE20    C_PTR32_UI8
\endcode

Output:
\code
Progress: 9%
Progress: 75%
Progress: 99%
Progress: 100%

FILE: test.sy2
 COMMAND: TEngSetSignVersion
  CMD_VALUE: 2016
 COMMAND: RegCmd
  SYMBOL: var1
   TYPE: DATA
   NAME: var1
   ADDRESS: 0040DD0C
   SIGNATURE: I32
    INT: I
     SIZE: 32
 COMMAND: RegCmd
  SYMBOL: var2
   TYPE: DATA
   NAME: var2
   ADDRESS: 0040DE20
   SIGNATURE: C_PTR32_UI8
    POINTER: PTR
     TYPE_QUALIFIER: C
     SIZE: 32
     UINT: UI
      SIZE: 8
\endcode

\section sec_open_parse_callback_example Read ABS during parsing
\code
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

void SY2PARSER_API_CALL errorCallback(Sy2ParserHandle handle, unsigned int line, unsigned int column, const char *message, void *callbackContext)
{
  printf("Error: line %u, column %u, message %s\n", line, column, message);
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

  T_Sy2Node newNode = { 0 };
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

  // initialization
  Sy2ParserStatus status = sy2Open("test.sy2", &handle);
  status = sy2SetParsingErrorCallback(handle, errorCallback, NULL);
  status = sy2SetParsingProgressCallback(handle, progressCallback, NULL);
  status = sy2AddParsedNodeCallback(handle, SY2_COMMAND, parsedNodeCallback, NULL);

  // parsing
  status = sy2Parse(handle);

  // closing
  status = sy2Close(handle);

  return 0;
}
\endcode

Input the test.sy2 file:
\code
TEngSetSignVersion 2016

# Structure TAG PointTag, sizeof(PointTag) is 16 Byte(s):
# Command Type   Name              Offset      Signature
# -------------------------------------------------------------------------------------------------------
RegVar    STRUCT PointTag          0           S128_PointTag                                             
RegVar    STRUCT PointTag_x        0           F32                                                       
RegVar    STRUCT PointTag_y        4           F96 

# Command Type   Name            Address     Signature
# ----------------------------------------------------
RegCmd    DATA   var2            0040DD0C    C_UI8
RegCmd    DATA   var3            0040DE20    C_PTR32_C_I32
RegCmd    DATA   point1          0040DF20    S128_PointTag                                             
RegCmd    DATA   point1_x        0040DF20    F32                                                       
RegCmd    DATA   point1_y        0040DF24    F96
\endcode

Output:
\code
Progress: 2%
 COMMAND: TEngSetSignVersion
  CMD_VALUE: 2016

Progress: 35%
 COMMAND: RegVar
  SYMBOL: PointTag
   TYPE: STRUCT
   NAME: PointTag
   OFFSET: 0
   SIGNATURE: S128_PointTag
    STRUCT: PointTag
     SIZE: 128

Progress: 46%
 COMMAND: RegVar
  SYMBOL: PointTag_x
   TYPE: STRUCT
   NAME: PointTag_x
   OFFSET: 0
   SIGNATURE: F32
    FLOAT: F
     SIZE: 32

Progress: 51%
 COMMAND: RegVar
  SYMBOL: PointTag_y
   TYPE: STRUCT
   NAME: PointTag_y
   OFFSET: 4
   SIGNATURE: F96
    FLOAT: F
     SIZE: 96

Progress: 67%
 COMMAND: RegCmd
  SYMBOL: var2
   TYPE: DATA
   NAME: var2
   ADDRESS: 0040DD0C
   SIGNATURE: C_UI8
    UINT: UI
     TYPE_QUALIFIER: C
      SIZE: 8

Progress: 73%
 COMMAND: RegCmd
  SYMBOL: var3
   TYPE: DATA
   NAME: var3
   ADDRESS: 0040DE20
   SIGNATURE: C_PTR32_C_I32
    POINTER: PTR
     TYPE_QUALIFIER: C
     SIZE: 32
     INT: I
      TYPE_QUALIFIER: C
      SIZE: 32

Progress: 84%
 COMMAND: RegCmd
  SYMBOL: point1
   TYPE: DATA
   NAME: point1
   ADDRESS: 0040DF20
   SIGNATURE: S128_PointTag
    STRUCT: PointTag
     SIZE: 128

Progress: 94%
 COMMAND: RegCmd
  SYMBOL: point1_x
   TYPE: DATA
   NAME: point1_x
   ADDRESS: 0040DF20
   SIGNATURE: F32
    FLOAT: F
     SIZE: 32

Progress: 99%
 COMMAND: RegCmd
  SYMBOL: point1_y
   TYPE: DATA
   NAME: point1_y
   ADDRESS: 0040DF24
   SIGNATURE: F96
    FLOAT: F
     SIZE: 96

Progress: 100%
\endcode
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
#define SY2PARSER_API_MAJOR_VERSION   0U
//! Minor version number of the programming interface.
#define SY2PARSER_API_MINOR_VERSION   1U

//! Version number of the programming interface as DWORD.
#define SY2PARSER_API_VERSION ( (SY2PARSER_API_MAJOR_VERSION << 16) | SY2PARSER_API_MINOR_VERSION ) 
/*!
@}
*/

/*!
\defgroup uda_device_constants_types Constants and Types
@{

\brief Constants and types used in the programming interface.
*/

//! The value zero is an invalid handle.
#define SY2PARSER_INVALID_HANDLE	0U

//! Status code returned by API functions.
typedef unsigned int Sy2ParserStatus;

//! Sy2 Parser handle type used by the DLL. The value #SY2PARSER_INVALID_HANDLE (zero) is an invalid handle.
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

//! Sy2 Node types.
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
	SY2_BOOL,
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
	SY2_ARRAY_SIZE,
	SY2_NODE_COUNT
} T_Sy2NodeType;

//! Sy2 Node type names.
const char *sy2NodeName[SY2_NODE_COUNT] = {
	"UNSPECIFIED",
	"FILE",
	"COMMAND",
	"CMD_VALUE",
	"SYMBOL",
	"TYPE",
	"NAME",
	"BITMASK",
	"OFFSET",
	"ADDRESS",
	"ENUM_VALUE",
	"SIGNATURE",
	"VOID",
	"BOOL",
	"INT",
	"UINT",
	"FLOAT",
	"STRUCT",
	"POINTER",
	"FUNCTION",
	"RETURN",
	"PARAMETER",
	"TYPE_QUALIFIER",
	"SIZE",
	"ARRAY_SIZE"
};

//! The basic information to unique Sy2 node identification. The Sy2 node represents a terminal and a non-terminal lexical token.
typedef struct Sy2Node
{
	T_Sy2NodeType type;		//!< The type of a node see #Sy2NodeType.
	char value[256];		//!< The value of a node.
	unsigned int depth;		//!< The length of the path from root to the end.
	unsigned int line;		//!< The number of line.
	unsigned int column;	//!< The column of character.
} T_Sy2Node;

/*!
@}
*/

/*!
\defgroup sy2parser_api_functions Sy2 Parser API Functions
@{

\brief Functions exported from the DLL and called by the application.
*/

/*!
  \brief Callback function which is called when an error occurs.

  \param[in] handle
	A descriptor identifying an open Sy2 parser.

  \param[in] line
	The number of line.

  \param[in] column
	The number of column.

  \param[in] message
	The error message.

  \param[in] callbackContext
	The pointer value that was passed when the callback was registered.
*/
typedef void SY2PARSER_API_CALL ParsingErrorCallback(Sy2ParserHandle handle, unsigned int line, unsigned int column, const char *message, void *callbackContext);

/*!
  \brief Callback function which is called when parsing progress is changed.

  \param[in] handle
	A descriptor identifying an open Sy2 parser.

  \param[in] progress
	The value of progress in percentages.
	
  \param[in] callbackContext
	The pointer value that was passed when the callback was registered.
*/
typedef void SY2PARSER_API_CALL ParsingProgressCallback(Sy2ParserHandle handle, unsigned int progress, void *callbackContext);

/*!
  \brief Callback function which is called after a node is completely parsed.

  Otherwise the ParsingErrorCallback is called.

  \param[in] handle
	A descriptor identifying an open Sy2 parser.

  \param[in] node
	Information about parsed node.

  \param[in] callbackContext
	The pointer value that was passed when the callback was registered.
*/
typedef void SY2PARSER_API_CALL ParsedNodeCallback(Sy2ParserHandle handle, const T_Sy2Node *node, void *callbackContext);

/*!
\brief Open a Sy2 Parser by using a file name.

\param[in] fileName
Specifies the name of a file to be parse.

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

/*!
  \brief Set a callback to receive a parsing error.

  The callback is invoked during running the #sy2Parse() function.

  \param[in] handle
	A descriptor identifying an open Sy2 parser.

  \param[in] callback
	Address of a caller-provided callback function.

  \param[in] callbackContext
	Caller-provided pointer which will be passed to the callback function unmodified. Can be set to NULL if unused.

  \return
	The function returns #SY2_SUCCESS if successful, an error code otherwise.
*/
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2SetParsingErrorCallback(Sy2ParserHandle handle, ParsingErrorCallback *callback, void *callbackContext);

/*!
  \brief Set a callback to receive a parsing progress.

  The callback is invoked during running the #sy2Parse() function.

  \param[in] handle
	A descriptor identifying an open Sy2 parser.

  \param[in] callback
	Address of a caller-provided callback function.

  \param[in] callbackContext
	Caller-provided pointer which will be passed to the callback function unmodified. Can be set to NULL if unused.

  \return
	The function returns #SY2_SUCCESS if successful, an error code otherwise.
*/
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2SetParsingProgressCallback(Sy2ParserHandle handle, ParsingProgressCallback *callback, void *callbackContext);

/*!
  \brief Add a callback to receive a parsed node.

  The callback is invoked during running the #sy2Parse() function.

  \param[in] handle
	A descriptor identifying an open Sy2 parser.

  \param[in] nodeType
    A node type for which the specified callback will be called only. See #Sy2NodeType.

  \param[in] callback
	Address of a caller-provided callback function.

  \param[in] callbackContext
	Caller-provided pointer which will be passed to the callback function unmodified. Can be set to NULL if unused.

  \return
	The function returns #SY2_SUCCESS if successful, an error code otherwise.
*/

SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2AddParsedNodeCallback(Sy2ParserHandle handle, T_Sy2NodeType nodeType, ParsedNodeCallback *callback, void *callbackContext);

/*!
  \brief Remove already added callback to receive a parsed node.

  \param[in] handle
	A descriptor identifying an open Sy2 parser.

  \param[in] nodeType
	A node type for which the specified callback will be called only. See #Sy2NodeType.

  \param[in] callback
	Address of a caller-provided callback function.

  \return
	The function returns #SY2_SUCCESS if successful, an error code otherwise.
*/
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2RemoveParsedNodeCallback(Sy2ParserHandle handle, T_Sy2NodeType nodeType, ParsedNodeCallback *callback);

/*!
  \brief Perform a single-call parse of an Sy2 file associated with a handle. This function internally creates ABS which can be read by using #sy2ReadNext() funcition after or during parsing.

  While sy2Parse() is running the previously registered callbacks are invoked. Functions sy2SetParsingErrorCallback(), sy2SetParsingProgressCallback() and sy2AddParsedNodeCallback().

  \param[in] handle
	A descriptor identifying an open Sy2 parser.

  \return
	The function returns #SY2_SUCCESS if successful, an error code otherwise.
*/
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2Parse(Sy2ParserHandle handle);

/*!
  \brief Read next node in generated ABS.

  \param[in] handle
    A descriptor identifying an open Sy2 parser.

  \param[out] node
    Node information.

  \return
	The function returns #SY2_SUCCESS if successful, an error code otherwise.
*/
SY2PARSER_API Sy2ParserStatus SY2PARSER_API_CALL sy2ReadNext(const Sy2ParserHandle handle, T_Sy2Node *node);

/*!
@}
*/

/*!
\defgroup sy2parser_api_runtime Run-Time DL API
@{

\brief API function signatures for run-time dynamic linking.
*/

typedef Sy2ParserStatus(SY2PARSER_API_CALL *T_sy2Open)(const char *fileName, Sy2ParserHandle *handle);
typedef Sy2ParserStatus(SY2PARSER_API_CALL *T_sy2Close)(Sy2ParserHandle handle);
typedef Sy2ParserStatus(SY2PARSER_API_CALL *T_sy2SetParsingErrorCallback)(Sy2ParserHandle handle, ParsingErrorCallback *callback, void *callbackContext);
typedef Sy2ParserStatus(SY2PARSER_API_CALL *T_sy2SetParsingProgressCallback)(Sy2ParserHandle handle, ParsingProgressCallback *callback, void *callbackContext);
typedef Sy2ParserStatus(SY2PARSER_API_CALL *T_sy2AddParsedNodeCallback)(Sy2ParserHandle handle, T_Sy2NodeType nodeType, ParsedNodeCallback *callback, void *callbackContext);
typedef Sy2ParserStatus(SY2PARSER_API_CALL *T_sy2RemoveParsedNodeCallback)(Sy2ParserHandle handle, T_Sy2NodeType nodeType, ParsedNodeCallback *callback);
typedef Sy2ParserStatus(SY2PARSER_API_CALL *T_sy2Parse)(Sy2ParserHandle handle);
typedef Sy2ParserStatus(SY2PARSER_API_CALL *T_sy2ReadNext)(const Sy2ParserHandle handle, T_Sy2Node *node);

/*!
@}
*/

#ifdef __cplusplus

}
#endif

#endif
