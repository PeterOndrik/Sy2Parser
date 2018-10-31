/*
An ANTLR4 grammar for the Sy2 format. The Sy2 format represents a simple symbol and data type extraction from an object file formatted file.

The Sy2 format is represented by a list of commands where each command consists from series of attributes ended by a new line. 
The last Signature attribute is parsed according to the Sign2016 grammar.

Example:

# Header

Encoding little_endian

TEngSetSignVersion 2016

# Bit field TAG BitFieldTag, sizeof(BitFieldTag) is 8 Byte(s):
# Command Type   Name            Offset     Bitmask     Signature
# -------------------------------------------------------------------------------------------------------
RegVar    BIT    BitFieldTag     0          0x0         S64-BitFieldTag
RegVar    BIT    BitFieldTag_a   0          0x1         UI32
RegVar    BIT    BitFieldTag_b   0          0x2         UI32
RegVar    BIT    BitFieldTag_c   0          0xC         UI32

# Structure TAG PointTag, sizeof(PointTag) is 8 Byte(s):
# Command Type   Name            Offset      Signature
# -------------------------------------------------------------------------------------------------------
RegVar    STRUCT PointTag        0           S64-PointTag
RegVar    STRUCT PointTag_x      0           F32
RegVar    STRUCT PointTag_y      4           F32

# Union TAG DataTag, sizeof(DataTag) is 20 Byte(s):
# Command Type   Name              Offset      Signature
# -------------------------------------------------------------------------------------------------------
RegVar    UNION  DataTag           0           S160-DataTag                                              
RegVar    UNION  DataTag_i         0           I32                                                       
RegVar    UNION  DataTag_f         0           F32                                                       
RegVar    UNION  DataTag_str       0           I8-20                                                     

# Enumeration TAG ColorTag, sizeof(ColorTag) is 4 Byte(s):
# Command Type   Name              Value       Signature
# -------------------------------------------------------------------------------------------------------
RegVar    ENUM   ColorTag_BLACK    -1          I32                                                      
RegVar    ENUM   ColorTag_RED      0           I32                                                      
RegVar    ENUM   ColorTag_BLUE     1           I32                                                      
RegVar    ENUM   ColorTag_GREEN    2           I32                                                      
RegVar    ENUM   ColorTag_YELLOW   3           I32                                                      
RegVar    ENUM   ColorTag_WHITE    4           I32  

# Command Type   Name             Address     Signature
# ------------------------------------------------------------------------------------------------------
RegCmd    PROC   func1           00401410     FB-V-V-FE                                                 
RegCmd    PROC   func2           00401415     FB-I32-C-PTR32-C-I8-FE                                    
RegCmd    PROC   func3           0040141A     FB-PTR32-FB-PTR32-V-I16-FE-PTR32-FB-I8-F32-FE-PTR32-I16-FE
RegCmd    PROC   func4           00401454     FB-C-PTR32-S64-PointTag-PTR32-C-S64-PointTag-UI32-UI8-FE

# Command Type   Name            Address     Signature
# ------------------------------------------------------------------------------------------------------
RegCmd    DATA   var1            0040DE3C    I32
RegCmd    DATA   var2            0040DD0C    C-UI8
RegCmd    DATA   var3            0040DE20    C-PTR32-C-PTR32-C-PTR32-I32
*/
grammar Sy2;

options
{
	language = Cpp;
}

@members
{
	/*
	 * Determines what information about a symbol position may follow.
	 * 0 - OFFSET, 0 - BITMASK, 2 - VALUE, 3 - ADDRESS
	 * For example:
	 *                                                Offset     Bitmask
	 * Command:       RegVar    BIT    BitFieldTag    0          0x0         S64_BitFieldTag
	 * positionType:            0      0              0          0           0
	 *
	 *                                                Offset
	 * Command:       RegVar    STRUCT PointTag       0           S64_PointTag
	 * positionType:            0      0              0           0
	 *
	 *                                                Value
	 * Command:       RegVar    ENUM   ColorTag_BLACK -1          I32
	 * positionType:                                  3
	 */
	int positionType = 0;		

	/*
	 * Determines if a token may be an identifier or a signature. The lexer rule to seach an identifier is very versatile.
	 * These all is for the better error messages.
	 * 0 - command type, 1 - symbol or typedef type, 2 - ID, 3 - position, 4 - SIGNATURE
	 */	 
	int searchFor = 0;	
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
typeDefinition 
	: BIT name offset bitmask signature
	| STRUCT name offset signature
	| UNION name offset signature
	| ENUM name enumValue signature
	;
symbol 
	: PROC name address signature
	| DATA name address signature
	;
name : ID ;
offset : OFFSET ;
bitmask : BITMASK ;
address : ADDRESS ;
enumValue : ENUM_VALUE ;
signature : SIGN ;

/*
 * Lexer Rules
 */

ENCODING : 'Encoding' ;
LITTLE_ENDIAN : 'little_endian' ;
BIG_ENDIAN : 'big_endian' ;

SIGN_VERSION : 'TEngSetSignVersion' ;
V2016 : '2016' ;

REG_VAR : 'RegVar' { searchFor = 1; } ;
REG_CMD : 'RegCmd' { searchFor = 1; } ;

BIT : 'BIT' { searchFor == 1 }? { positionType = 0; searchFor = 2; } ;
STRUCT : 'STRUCT' { searchFor == 1 }? { positionType = 0; searchFor = 2; } ;
UNION : 'UNION' { searchFor == 1 }? { positionType = 0; searchFor = 2; } ;
ENUM : 'ENUM' { searchFor == 1 }? { positionType = 2; searchFor = 2; } ;
PROC : 'PROC' { searchFor == 1 }? { positionType = 3; searchFor = 2; } ;
DATA : 'DATA' { searchFor == 1 }? { positionType = 3; searchFor = 2; } ;

OFFSET : NUM+ { positionType == 0 }? { searchFor = 4; } ;
BITMASK : '0x' HEX+ { positionType == 0 }? { searchFor = 4; } ;
ENUM_VALUE : '-'? NUM+ { positionType == 2 }? { searchFor = 4; } ;
ADDRESS : HEX HEX HEX HEX HEX HEX HEX HEX { positionType == 3 }? { searchFor = 4; } ;

ID : CHAR+ { searchFor == 2 }? { searchFor = 3; } ;
SIGN : CHAR ('-' | CHAR)* { searchFor == 4 }? ;

LINE_COMMENT : '#' .*? NL -> channel(HIDDEN) ;
WS : (' ' | '\t' ) -> skip ;
NL : ('\r'? '\n' | '\r')+ { searchFor = 0; } ;
ANY : ~[ \t\r\n]+ { searchFor++; } ;

fragment NUM : [0-9] ;
fragment HEX : [a-fA-F0-9] ;
fragment CHAR : [a-zA-Z_0-9\u002A\u002C\u002E\u003A\u003C\u003E\u007E] ;
