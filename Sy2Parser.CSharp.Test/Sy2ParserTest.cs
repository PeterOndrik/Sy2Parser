using System;
using Antlr4.Runtime;
using Antlr4.Runtime.Tree;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Sy2Parser.CSharp.Test
{
    [TestClass]
    public class Sy2ParserTest
    {
        private Sy2Parser Setup(String text)
        {
            AntlrInputStream inputStream = new AntlrInputStream(text);
            Sy2Lexer lexer = new Sy2Lexer(inputStream);
            CommonTokenStream commonTokenStream = new CommonTokenStream(lexer);
            Sy2Parser parser = new Sy2Parser(commonTokenStream);

            return parser;
        }

        [TestMethod]
        public void TestFile()
        {
            Sy2Parser parser = this.Setup("RegCmd   DATA    var1 0040DE3C I32\nRegCmd DATA var2 0040DD0C C_UI8\n");

            Sy2Parser.SymbolListContext context = parser.symbolList();

            Assert.AreNotEqual(null, context);
        }

        [TestMethod]
        public void TestSymboList()
        {
            Sy2Parser parser = this.Setup("RegCmd DATA var1 0040DE3C I32\nRegCmd DATA var2 0040DD0C C_UI8\n");

            Sy2Parser.SymbolListContext context = parser.symbolList();
            Sy2Visitor visitor = new Sy2Visitor();
            visitor.Visit(context);

            Assert.AreEqual(2, visitor.Symbols.Count);
        }
    }
}
