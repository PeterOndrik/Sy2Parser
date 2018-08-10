grammar Sign2016;

options
{
	language = CSharp;
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
signature : (dataType | ptrType | function) EOF ;
dataType : typeQualifier (voidType | boolType | intType | uintType | floatType | structType) ;
ptrType : (typeQualifier PTR_TYPE SIZE arraySize)+ SEP (dataType | function) ;
function : FB SEP returnType (SEP paramType)+ SEP FE ;
typeQualifier : (TYPE_QUALIFIER SEP)? ;
voidType : VOID_TYPE ;
boolType : BOOL_TYPE arraySize ;
intType : INT_TYPE SIZE arraySize ;
uintType : UINT_TYPE SIZE arraySize ;
floatType : FLOAT_TYPE SIZE arraySize ;
structType : STRUCT_TYPE SIZE arraySize SEP ID ;
returnType : (dataType | ptrType) ;
paramType : (dataType | ptrType) ;
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
SIZE : [0-9]+ { afterSize++; isSep = 0; };
SEP : '_' { isSep++; };
ID : [a-zA-Z_][a-zA-Z_0-9]* { isStruct > 0 && ((isSep == 0 && Text[0] != '_') || (isSep > 0) ) }?;
