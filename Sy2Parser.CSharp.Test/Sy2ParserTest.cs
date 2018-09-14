using System;
using System.Diagnostics;
using System.IO;
using Antlr4.Runtime;
using Antlr4.Runtime.Tree;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Sy2Parser.CSharp.Test
{
    [TestClass]
    public class Sy2ParserTest
    {
        private Sy2Parser SetupFile(String file)
        {
            using (Stream stream = File.Open(file, FileMode.Open))
            {
                AntlrInputStream inputStream = new AntlrInputStream(stream);
                Sy2Lexer lexer = new Sy2Lexer(inputStream);
                CommonTokenStream commonTokenStream = new CommonTokenStream(lexer);
                Sy2Parser parser = new Sy2Parser(commonTokenStream);

                return parser;
            }
        }

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
            Sy2Parser parser = this.SetupFile("test_04.sy2");

            Sy2Parser.FileContext context = parser.file();
            int childCount = context.ChildCount;

            foreach (var childContext in context.children)
            {
                String childContextText = childContext.GetText();
                String childContextString = childContext.ToString();

                for (int i = 0; i < childContext.ChildCount; i++)
                {
                    var child = childContext.GetChild(i);
                    var childText = child.GetText();
                    Type type = child.GetType();
                    Debug.WriteLine(childText);
                }
            }

            Assert.AreNotEqual(null, context);
        }

        [TestMethod]
        public void TestSymboList()
        {
            Sy2Parser parser = this.Setup("TEngSetSignVersion 2016\nRegCmd DATA var1 0040DE3C I32 RW\nRegCmd DATA var2 0040DD0C C_UI8 RW\n");

            Sy2Parser.FileContext context = parser.file();
            Sy2Visitor visitor = new Sy2Visitor();
            visitor.Visit(context);

            Assert.AreEqual(2, visitor.Commands.Count);
        }
    }
}
