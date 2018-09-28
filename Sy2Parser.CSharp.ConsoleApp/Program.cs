using Antlr4.Runtime;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sy2Parser.CSharp.ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            using (Stream stream = File.Open(@"..\..\..\Test\In\test-01.sy2", FileMode.Open))
            {
                AntlrInputStream inputStream = new AntlrInputStream(stream);
                Sy2Lexer lexer = new Sy2Lexer(inputStream);
                CommonTokenStream commonTokenStream = new CommonTokenStream(lexer);
                Sy2Parser parser = new Sy2Parser(commonTokenStream);

                Sy2Listener sy2Listener = new Sy2Listener();
                parser.AddParseListener(sy2Listener);

                Stopwatch stopwatch = new Stopwatch();
                stopwatch.Start();

                Sy2Parser.FileContext context = parser.file();
                int childCount = context.ChildCount;

                stopwatch.Stop();
                Console.WriteLine($"Time elapsed: {stopwatch.Elapsed}");
            }
        }
    }
}
