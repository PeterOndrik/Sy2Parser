/*
An ANTLR4 grammar for the signature data type description version 2016.

Summary:
- the upper case letter combination is used to describe a signature type name
- the size of data type is based on idea fixed size according to the C99 standard
- the pointers are specified together with a data type they point to
- the beginning and the end of a function is clearly stated
- a type qualifier is applied to a signature type
*/

grammar Sign2016;

options
{
	language = Java;
}

@members
{
	int afterSize = 0;
	int isStruct = 0;
}

/*
 * Parser Rules
 */

signature : (boolType | intType | uintType | floatType | structType | ptrType | function) EOF ;
voidType : VOID_TYPE ;
boolType : typeQualifier? BOOL_TYPE (arraySizes += arraySize)* ;
intType : typeQualifier? INT_TYPE size (arraySizes += arraySize)* ;
uintType : typeQualifier? UINT_TYPE size (arraySizes += arraySize)* ;
floatType : typeQualifier? FLOAT_TYPE size (arraySizes += arraySize)* ;
structType : typeQualifier? STRUCT_TYPE size (arraySizes += arraySize)* SEP name ;
ptrType : typeQualifier? PTR_TYPE size (arraySizes += arraySize)* SEP (typeQualifier? voidType | boolType | intType | uintType | floatType | structType | ptrType | function) ;
function : FB SEP returnType (SEP paramType)+ SEP FE ;
returnType : (voidType | boolType | intType | uintType | floatType | structType | ptrType) ;
paramType : (voidType | boolType | intType | uintType | floatType | structType | ptrType) ;
typeQualifier : CONST_TYPE SEP ;
size : SIZE ;
arraySize : SEP ARRAY_SIZE ;
name : ID ;

/*
 * Lexer Rules
 */

CONST_TYPE : 'C' ;
VOID_TYPE : 'V' ;
BOOL_TYPE : 'B' { afterSize++;} ; // doesn't have token SIZE but may be array e.g. B-5
INT_TYPE : 'I' { afterSize = 0; };
UINT_TYPE : 'UI' { afterSize = 0; } ;
FLOAT_TYPE : 'F' { afterSize = 0; } ;
STRUCT_TYPE : 'S' { afterSize = 0; isStruct++; } ;
PTR_TYPE : 'PTR' { afterSize = 0; } ;
FB : 'FB' ;
FE : 'FE' ;
ARRAY_SIZE : SIZE { afterSize > 0 }? ;
SIZE : [0-9]+ { afterSize++; } ;
SEP : '-' ;
ID : CHAR+ { isStruct > 0 }? { isStruct = 0 ; } ;

/*
 * 0026 = &, 0028 = (, 0029 = ), 002A = *, 002C = ,, 002E = ., 003A = :, 003C = <, 003E = >, 007E = ~
 * - is separator, don't put it to CHAR
 */
fragment CHAR : [a-zA-Z_0-9\u0026\u0028\u0029\u002A\u002C\u002E\u003A\u003C\u003E\u007E] ;
