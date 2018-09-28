using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Antlr4.Runtime.Misc;

namespace Sy2Parser.CSharp
{
    public class Sign2016Visitor : Sign2016BaseVisitor<Object>
    {
        public override object VisitIntType([NotNull] Sign2016Parser.IntTypeContext context)
        {
            String text = context.GetText();

            return base.VisitIntType(context);
        }

        public override object VisitUintType([NotNull] Sign2016Parser.UintTypeContext context)
        {
            String text = context.GetText();

            return base.VisitUintType(context);
        }
    }
}
