grammar Sy2;

/*
Example:

TEngSetSignVersion 2016

# Bit field TAG BitFieldTag, sizeof(BitFieldTag) is 8 Byte(s):
# Command Type   Name            Bitmask     Signature
# ----------------------------------------------------
RegVar    BIT    BitFieldTag     0           S64_BitFieldTag
RegVar    BIT    BitFieldTag_a   1           UI32
RegVar    BIT    BitFieldTag_b   2           UI32
RegVar    BIT    BitFieldTag_c   12          UI32

# Structure TAG PointTag, sizeof(PointTag) is 8 Byte(s):
# Command Type   Name            Offset      Signature
# ----------------------------------------------------
RegVar    STRUCT PointTag        0           S64_PointTag
RegVar    STRUCT PointTag_x      0           F32
RegVar    STRUCT PointTag_y      4           F32

# Command Type   Name             Address     Signature
# ------------------------------------------------------------------------------------------------------
RegCmd    PROC   func1           00401410     FB_V_V_FE                                                 
RegCmd    PROC   func2           00401415     FB_I32_C_PTR32_C_I8_FE                                    
RegCmd    PROC   func3           0040141A     FB_PTR32_FB_PTR32_V_I16_FE_PTR32_FB_I8_F32_FE_PTR32_I16_FE

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

file : (NL | symbols += symbol)+ EOF ;
symbol : command type name address signature NL;
command : COMMAND ;
type : TYPE ;
name : ID ;
address : ADDRESS ;
signature : SIGNATURE ;

/*
 * Lexer Rules
 */

COMMAND : ('RegCmd' | 'RegVar') { tokenPos == 0}? { tokenPos++; } ;
TYPE : ('BIT' | 'STRUCT' | 'PROC' | 'DATA') { tokenPos == 1}? {tokenPos++; } ;
ID : [a-zA-Z_][a-zA-Z_0-9]* { tokenPos == 2 }? { tokenPos++; } ;
ADDRESS : NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER { tokenPos == 3 }? { tokenPos++; };
SIGNATURE : [A-Z][A-Z0-9_]* { tokenPos == 4 }? { tokenPos = 0; };
LINE_COMMENT : '#' .*? NL -> channel(HIDDEN) ;
WS : (' ' | '\t' ) -> skip ;
NL : ('\r'? '\n' | '\r')+ ;
fragment NUMBER : [a-fA-F0-9];
