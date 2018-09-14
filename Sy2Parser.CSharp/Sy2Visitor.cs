using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Antlr4.Runtime;
using Antlr4.Runtime.Misc;
using Antlr4.Runtime.Tree;
using Sy2Parser.CSharp.Model;

namespace Sy2Parser.CSharp
{
    public class Sy2Visitor : Sy2BaseVisitor<Object>
    {
        private NonterminalNode _current = null;

        public List<INode> Commands = new List<INode>();

        public override object VisitCommand([NotNull] Sy2Parser.CommandContext context)
        {
            _current = new Command();
            base.VisitCommand(context);
            this.Commands.Add(_current);

            return _current;
        }

        public override object VisitSymbol([NotNull] Sy2Parser.SymbolContext context)
        {
            //_currentSymbol = new Symbol();

            /*
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

            //Symbol symbol = new Symbol { Command = cmd.GetText(), Type = type.GetText(), Name = name.GetText(), Address = UInt32.Parse(address.GetText(), System.Globalization.NumberStyles.HexNumber), Signature = sign.GetText() };
            //Symbols.Add(symbol);
            */

            //base.VisitSymbol(context);
            //this.Symbols.Add(_currentSymbol);
            _current.Add(new Symbol());

            return base.VisitSymbol(context);
        }

        /*
        public override object VisitType([NotNull] Sy2Parser.TypeContext context)
        {
            return base.VisitType(context);
        }

        public override object VisitName([NotNull] Sy2Parser.NameContext context)
        {
            return base.VisitName(context);
        }

        public override object VisitPosition([NotNull] Sy2Parser.PositionContext context)
        {
            return base.VisitPosition(context);
        }

        public override object VisitSignature([NotNull] Sy2Parser.SignatureContext context)
        {
            return base.VisitSignature(context);
        }
        */
    }
}
