grammar Sy2;

/*
Example:

# Header

Encoding little_endian

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

# Union TAG DataTag, sizeof(DataTag) is 20 Byte(s):
# Command Type   Name              Offset      Signature
# -------------------------------------------------------------------------------------------------------
RegVar    UNION  DataTag           0           S160_DataTag                                              
RegVar    UNION  DataTag_i         0           I32                                                       
RegVar    UNION  DataTag_f         0           F32                                                       
RegVar    UNION  DataTag_str       0           I8_20                                                     

# Enumeration TAG ColorTag, sizeof(ColorTag) is 4 Byte(s):
# Command Type   Name              Value       Signature
# -------------------------------------------------------------------------------------------------------
RegVar    ENUM   ColorTag_RED      0           UI32                                                      
RegVar    ENUM   ColorTag_BLUE     1           UI32                                                      
RegVar    ENUM   ColorTag_GREEN    2           UI32                                                      
RegVar    ENUM   ColorTag_YELLOW   3           UI32                                                      
RegVar    ENUM   ColorTag_WHITE    4           UI32  

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
	language = Java;
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
command 
	: ENCODING encodingValue NL
	| SIGN_VERSION signValue NL
	| REG_VAR typeDefinition NL
	| REG_CMD symbol NL
	;
encodingValue : LITTLE_ENDIAN | BIG_ENDIAN ;
signValue : V2016 ;
typeDefinition : type name (bitmask | offset | enumValue) signature ;
symbol : type name address signature ;
type : TYPE ;
name : ID ;
bitmask : BITMASK ;
offset : OFFSET ;
address : ADDRESS ;
enumValue : ENUM_VALUE ;
signature : SIGNATURE ;

/*
 * Lexer Rules
 */

ENCODING : 'Encoding' { tokenPos == 0 }? { tokenPos++; } ;
LITTLE_ENDIAN : 'little_endian' { tokenPos == 1 }? { tokenPos = 0; } ;
BIG_ENDIAN : 'big_endian' { tokenPos == 1 }? { tokenPos = 0; } ;

SIGN_VERSION : 'TEngSetSignVersion' { tokenPos == 0 }? { tokenPos++; } ;
V2016 : '2016' { tokenPos == 1 }? { tokenPos = 0; } ;

REG_VAR : 'RegVar' { tokenPos == 0 }? { tokenPos++; } ;
REG_CMD : 'RegCmd' { tokenPos == 0 }? { tokenPos++; } ;
TYPE : ( BIT | STRUCT | UNION | ENUM | PROC | DATA ) { tokenPos == 1 }? { tokenPos++;
															if (getText().equals("BIT")) symPosType = 0; 
															if (getText().equals("STRUCT") || getText().equals("UNION")) symPosType = 1; 
															if (getText().equals("PROC") || getText().equals("DATA")) symPosType = 2; 
															if (getText().equals("ENUM")) symPosType = 3;
														} ;
ID : CHAR+ { tokenPos == 2 }? { tokenPos++; } ;
BITMASK : [0-9]+ { tokenPos == 3 && symPosType == 0 }? { tokenPos++; } ;
OFFSET : [0-9]+ { tokenPos == 3 && symPosType == 1 }? { tokenPos++; } ;
ADDRESS : NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER NUMBER { tokenPos == 3 && symPosType == 2 }? { tokenPos++; } ;
ENUM_VALUE : [0-9]+ { tokenPos == 3 && symPosType == 3 }? { tokenPos++; } ;
SIGNATURE : CHAR+ { tokenPos == 4 }? { tokenPos = 0; } ;
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
fragment CHAR : [a-zA-Z_0-9\u002A\u002C\u002E\u003A\u003C\u003E\u007E] ;
