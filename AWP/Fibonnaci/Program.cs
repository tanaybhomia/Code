using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fibonnaci
{
    internal class Fibo
    {
        public void fibo()
        {
            Console.WriteLine("Enter a Range : ");
            int range = Convert.ToInt32(Console.ReadLine());
            int a = 0;
            int b = 1;
            int c;
            Console.WriteLine(a);
            Console.WriteLine(b);  
            for (int i = 2; i < range; i++)
            {
                c = a + b;
                Console.WriteLine(c);
                a = b;
                b = c;
            }
        }
    }
    class Program
    { 
        public static void Main(string[] args)
        {
            Fibo f = new Fibo();
            f.fibo();
        }
    }

}
