using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Antlr4.Runtime;
using Antlr4.Runtime.Misc;

namespace Sy2Parser.CSharp
{
    public class Sy2Visitor : Sy2BaseVisitor<Object>
    {
        public List<Symbol> Symbols = new List<Symbol>();

        public override object VisitSymbol([NotNull] Sy2Parser.SymbolContext context)
        {
            String text = context.GetText();

            Sy2Parser.CommandContext cmd = context.command();
            text = cmd.GetText();

            Sy2Parser.TypeContext type = context.type();
            text = type.GetText();

            Sy2Parser.NameContext name = context.name();
            text = name.GetText();

            Sy2Parser.AddressContext address = context.address();
            text = address.GetText();

            Sy2Parser.SignatureContext sign = context.signature();
            text = sign.GetText();

            AntlrInputStream inputStream = new AntlrInputStream(text);
            Sign2016Lexer lexer = new Sign2016Lexer(inputStream);
            CommonTokenStream commonTokenStream = new CommonTokenStream(lexer);
            Sign2016Parser parser = new Sign2016Parser(commonTokenStream);

            Sign2016Visitor visitor = new Sign2016Visitor();
            visitor.Visit(parser.signature());

            
            Symbol symbol = new Symbol { Command = cmd.GetText(), Type = type.GetText(), Name = name.GetText(), Address = UInt32.Parse(address.GetText(), System.Globalization.NumberStyles.HexNumber), Signature = sign.GetText() };
            Symbols.Add(symbol);

            //return base.VisitSymbol(context);
            return symbol;
        }
    }
}
