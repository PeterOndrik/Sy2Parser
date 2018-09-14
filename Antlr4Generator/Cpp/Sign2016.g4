grammar Sign2016;

options
{
	language = Cpp;
}

@members
{
	int afterSize = 0;
	int isStruct = 0;
	int isSep = 0;
}

/*
 * Parser Rules
 */

signature : (boolType | intType | uintType | floatType | structType | ptrType | function) EOF ;
voidType : VOID_TYPE ;
boolType : typeQualifier BOOL_TYPE arraySize ;
intType : typeQualifier INT_TYPE size arraySize ;
uintType : typeQualifier UINT_TYPE size arraySize ;
floatType : typeQualifier FLOAT_TYPE size arraySize ;
structType : typeQualifier STRUCT_TYPE size arraySize SEP ID ;
ptrType : typeQualifier PTR_TYPE size arraySize SEP (voidType | boolType | intType | uintType | floatType | structType | ptrType | function) ;
function : FB SEP returnType (SEP paramType)+ SEP FE ;
returnType : (voidType | boolType | intType | uintType | floatType | structType | ptrType) ;
paramType : (voidType | boolType | intType | uintType | floatType | structType | ptrType) ;
typeQualifier : (TYPE_QUALIFIER SEP)? ;
size : SIZE ;
arraySize : (SEP ARRAY_SIZE)* ;

/*
 * Lexer Rules
 */

TYPE_QUALIFIER : 'C' ;
VOID_TYPE : 'V' ;
BOOL_TYPE : 'B' ;
INT_TYPE : 'I' { afterSize = 0; };
UINT_TYPE : 'UI' { afterSize = 0; } ;
FLOAT_TYPE : 'F' { afterSize = 0; } ;
STRUCT_TYPE : 'S' { afterSize = 0; isStruct++; } ;
PTR_TYPE : 'PTR' { afterSize = 0; } ;
FB : 'FB' ;
FE : 'FE' ;
ARRAY_SIZE : SIZE { afterSize > 0 }? { isSep = 0; } ;
SIZE : [0-9]+ { afterSize++; isSep = 0; } ;
SEP : '_' { isSep++; } ;
ID : [a-zA-Z_][a-zA-Z_0-9]* { isStruct > 0 && ((isSep == 0 && getText().at(0) != '_') || (isSep > 0) ) }? ;
