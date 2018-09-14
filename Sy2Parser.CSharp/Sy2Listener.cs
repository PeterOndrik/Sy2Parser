using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Antlr4.Runtime.Misc;

namespace Sy2Parser.CSharp
{
    public class Sy2Listener : Sy2BaseListener
    {
        public override void EnterFile([NotNull] Sy2Parser.FileContext context)
        {
            Console.WriteLine("Enter File");
            base.EnterFile(context);
        }

        public override void ExitFile([NotNull] Sy2Parser.FileContext context)
        {
            Console.WriteLine("Exit File");
            base.ExitFile(context);
        }

        public override void EnterCommand([NotNull] Sy2Parser.CommandContext context)
        {
            Console.WriteLine("Enter Command");
            base.EnterCommand(context);
        }

        public override void ExitCommand([NotNull] Sy2Parser.CommandContext context)
        {
            Console.WriteLine("Exit Command");
            base.ExitCommand(context);
        }
    }
}
