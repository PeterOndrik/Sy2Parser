using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sy2Parser.CSharp.Model
{
    public abstract class Node : INode
    {
        IList<INode> nodes = new List<INode>();

        public int Count => throw new NotImplementedException();

        public bool IsReadOnly => throw new NotImplementedException();

        public void Add(INode item)
        {
            nodes.Add(item);
        }

        public void Clear()
        {
            nodes.Clear();
        }

        public bool Contains(INode item)
        {
            return nodes.Contains(item);
        }

        public void CopyTo(INode[] array, int arrayIndex)
        {
            throw new NotImplementedException();
        }

        public IEnumerator<INode> GetEnumerator()
        {
            throw new NotImplementedException();
        }

        public bool Remove(INode item)
        {
            throw new NotImplementedException();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            throw new NotImplementedException();
        }
    }
}
