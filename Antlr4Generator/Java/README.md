# Sy2 Grammar
## Introduction

An ANTLR4 grammar for the Sy2 format. 

The Sy2 format represents a simple symbol and data type extraction from an object formatted file. So created a list of symbols and data types can be used as a script for another tools.

The Sy2 format is represented by a list of commands where each command consists from series of attributes ended by a new line. 
The last Signature attribute is parsed according to the Sign2016 grammar.

## The Sy2 parser generation
1. Run gjava-sy2.bat, to generate Java source code to the Output directory.
2. Run bjava-sy2.bat, to build the generated Java source code.
3. Run tjava-sy2.bat, to generate an image of the AST.
4. Run tjava-sy2-tokens.bat, to show the tokens detected.

## The Sign2016 parser generation
1. Run gjava-sign2016.bat, to generate Java source code to the Output directory.
2. Run bjava-sign2016.bat, to build the generated Java source code.
3. Run tjava-sign2016.bat, to generate an image of the AST.
4. Run tjava-sign2016-tokens.bat, to show the tokens detected.

## Example
```
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
```

