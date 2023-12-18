using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp11
{
    public delegate void
        Delevent();
    class DelDem
    {
        public static event Delevent add;
        public static void Main(string[] args)
        {
            add += new Delevent(India);
            add += new Delevent(USA);
            add += new Delevent(ENGLAND);
            add.Invoke();
            Console.ReadKey();
        }
        static void India()
        {
            Console.WriteLine("India");
        }
        static void USA()
        {
            Console.WriteLine("USA");
        }
        static void ENGLAND()
        {
            Console.WriteLine("ENGLAND");
        }
    }
}
