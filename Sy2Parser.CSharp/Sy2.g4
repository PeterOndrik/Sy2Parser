grammar Sy2;

/*
Example:
# Command Type   Name            Address     Signature
# ----------------------------------------------------
RegCmd    DATA   var1            0040DE3C    I32
RegCmd    DATA   var2            0040DD0C    C_UI8
RegCmd    DATA   var3            0040DE20    C_PTR32_C_PTR32_C_PTR32_I32
*/

options
{
	language = CSharp;
}

@members
{
	int tokenPos = 0;
}

/*
 * Parser Rules
 */

symbolList : symbol+ EOF ;
symbol : command SEP type SEP name SEP address SEP signature NL ;
command : CMD ;
type : TYPE ;
name : ID ;
address : ADDR ;
signature : SIGN ;

/*
 * Lexer Rules
 */
CMD : ('RegCmd' | 'RegVar') { tokenPos == 0}? { tokenPos++; } ;
TYPE : ('BIT' | 'STRUCT' | 'PROC' | 'DATA') { tokenPos == 1}? {tokenPos++; } ;
ID : [a-zA-Z_][a-zA-Z_0-9]* { tokenPos == 2 }? { tokenPos++; } ;
ADDR : NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER { tokenPos == 3 }? { tokenPos++; };
SIGN : [A-Z][A-Z0-9_]* { tokenPos == 4 }? { tokenPos = 0; };
SEP : WS+ ;
WS : (' ' | '\t' );
NL : ('\r'? '\n' | '\r')+ ;
fragment NUMBER : [a-fA-F0-9];
