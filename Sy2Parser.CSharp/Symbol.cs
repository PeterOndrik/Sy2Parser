using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sy2Parser.CSharp
{
    public class Symbol
    {
        public String Command { get; set; }
        public String Type { get; set; }
        public String Name { get; set; }
        public UInt64 Address { get; set; }
        public String Signature { get; set; }
    }
}
