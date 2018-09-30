# Sy2 Parser API
## Introduction

A parser is a software component that takes input data and builds an abstract syntax tree (ABS). The Sy2 Parser reads a symbol file in the Sy2 format and builds a corresponding ABS. This API provides functions to parse a file and read such created ABS. The nodes in the tree have a hierarchical relationship to each other. The terms parent, child, and sibling are used to describe the relationships.

The Sy2 format is primarily designed for a test engine but contains lots of information for any tool which needs to work with symbols of a source program. A symbol represents a data type, variable or function. Each line starts with a command keyword followed by a value or the symbol attributes.

For example:
- command to specify a type of signature version of a symbol file (the signature describes a data type of a symbol):
```
TEngSetSignVersion 2016
```
- commands to specify a variable of 32-bit integer data type and const pointer to unsigned char data type C-style syntax:
```
uint32_t var1;
uint8_t * const var2;
```
```
# Command Type   Name            Address     Signature
# ----------------------------------------------------
RegCmd    DATA   var1            0040DD0C    I32
RegCmd    DATA   var2            0040DE20    C_PTR32_UI8
```

A line started by the '#' sign is a comment. Columns "Type", "Name", "Address" and "Signature" are symbol attributes, where "Signature" describes data type. The Sy2 format is used to describe data type signature version 2016.

The Sy2 Parser generates following ABS for example above: 

<table align=center>
<tr>
<td>

![alt text][Sy2-1]

[Sy2-1]: file:///doc/img/Sy2-1.PNG "Figure 1: Sy2 ABS Example"
Figure 1: Sy2 ABS Example
</td>
</tr>
</table>

<table align=center>
<tr>
<td>

![alt text][Sign2016-1]

[Sign2016-1]: file:///doc/img/Sign2016-1.PNG "Figure 2: Sign2016 I32 ABS Example"
Figure 2: Sign2016 "I32" ABS Example
</td>
<td>

![alt text][Sign2016-2]

[Sign2016-2]: file:///doc/img/Sign2016-2.PNG "Figure 3: Sign2016 C_PTR32_UI8 ABS Example"
Figure 3: Sign2016 "C_PTR32_UI8" ABS Example
</td>
</tr>
</table>
The Sy2 Parser is provided as dynamic link library in bin\Release\Win32\sy2parser.dll. 
The programming interface consists of C-style functions which signatures are availale in Sy2Parser.C\sy2parser_api.h.

## Read ABS after parsing

To parse and display ABS the following code can be used: 
```
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
```
Input the test.sy2 file: 
```
TEngSetSignVersion 2016

# Command Type   Name            Address     Signature
# ----------------------------------------------------
RegCmd    DATA   var1            0040DD0C    I32
RegCmd    DATA   var2            0040DE20    C_PTR32_UI8
```
Output:
```
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
```
## Read ABS during parsing
```
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
```
Input the test.sy2 file: 
```
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
RegCmd    DATA   var2            0040DE20    C_PTR32_UI8
```
Output:
```
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
```
