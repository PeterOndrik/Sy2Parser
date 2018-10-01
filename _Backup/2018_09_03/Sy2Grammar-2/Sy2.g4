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
	int symPosType = 0;	// 0 - BITMASK, 1 - OFFSET, 2 - ADDRESS, 3 - VALUE
}

/*
 * Parser Rules
 */

file : (NL | commands += command)+ EOF ;
command : (keyword value | keyword symbol) NL ;
keyword : KEYWORD ;
value : CMD_VALUE ;
symbol : type name position signature ;
type : TYPE ;
name : ID ;
position : BITMASK | OFFSET | ADDRESS | VALUE ;
signature : SIGNATURE ;

/*
 * Lexer Rules
 */

KEYWORD : ( 'TEngSetSignVersion' | 'RegCmd' | 'RegVar' ) { tokenPos == 0 }? { tokenPos++; } ;
CMD_VALUE : [0-9]+ { tokenPos == 1 }? { tokenPos = 0; } ;
TYPE : ( BIT | STRUCT | UNION | ENUM | PROC | DATA ) { tokenPos == 1 }? { tokenPos++;
															if (Text.CompareTo("BIT") == 0) symPosType = 0; 
															if (Text.CompareTo("STRUCT") == 0 || Text.CompareTo("UNION") == 0) symPosType = 1; 
															if (Text.CompareTo("PROC") == 0 || Text.CompareTo("DATA") == 0) symPosType = 2;
															if (Text.CompareTo("ENUM") == 0) symPosType = 3;
														} ;
ID : [a-zA-Z_][a-zA-Z_0-9]* { tokenPos == 2 }? { tokenPos++; } ;
BITMASK : [0-9]+ { tokenPos == 3 && symPosType == 0 }? { tokenPos++; } ;
OFFSET : [0-9]+ { tokenPos == 3 && symPosType == 1 }? { tokenPos++; } ;
ADDRESS : NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER { tokenPos == 3 && symPosType == 2 }? { tokenPos++; } ;
VALUE : [0-9]+ { tokenPos == 3 && symPosType == 3 }? { tokenPos++; } ;
SIGNATURE : [A-Z][a-zA-Z0-9_]* { tokenPos == 4 }? { tokenPos = 0; } ;
BIT : 'BIT' ;
STRUCT : 'STRUCT' ;
UNION : 'UNION' ;
ENUM : 'ENUM' ;
PROC : 'PROC' ;
DATA : 'DATA' ;
LINE_COMMENT : '#' .*? NL -> channel(HIDDEN) ;
WS : (' ' | '\t' ) -> skip ;
NL : ('\r'? '\n' | '\r')+ ;
fragment NUMBER : [a-fA-F0-9] ;
