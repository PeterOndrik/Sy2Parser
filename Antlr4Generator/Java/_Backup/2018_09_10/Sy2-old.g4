grammar sy2;

options
{
  contextSuperClass=CommonTree;
}

@members
{
  private CommonTree parseSignature(String signature)
  {
    try
	{
	  signLexer lexer = new signLexer(new ANTLRStringStream(signature));
	  signParser parser = new signParser(new CommonTokenStream(lexer));
      return (CommonTree)parser.parse().getTree();
	}
	catch(Exception ex)
	{
	  return new CommonTree(new CommonToken(-1, ex.getMessage()));
	}
  }
}

/*
 * Parser Rules
 */
// The EOF is predefined by ANTLR and it matches the end of the input.
// To make sure to match all the input put the EOF token at the end of the start rule.
symbolList : symbol+ EOF;
//symbol : signature NewLine;
symbol : command type name address signature NewLine;
command : ( RegVar | RegCmd ) Whitespace;
type : ( BitType | StructType | ProcType | DataType ) Whitespace;
name : Identifier Whitespace;
address : Address Whitespace;
signature : Identifier {parseSignature($Identifier.text);};

/*
 * Lexer Rules
 *
 */
RegVar : 'RegVar';
RegCmd : 'RegCmd';
BitType : 'BIT';
StructType : 'STRUCT';
ProcType : 'PROC';
DataType : 'DATA';
Address : [0-9a-fA-F]+;
NewLine : ('\r'? '\n' | '\r')+;
Whitespace : (' ' | '\t');
Identifier : ID;
fragment ID : [a-zA-Z_][a-zA-Z_0-9]*;
