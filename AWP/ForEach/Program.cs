using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForEach
{
    internal class Program
    {
        static void Main(string[] args)
        {
            String[] st = { "Tanay", "Manan", "Sarvesha", "Sharwari", "Sanika" };
            foreach(string s in st)
            {
                Console.WriteLine(s);
            }

            int[] ints = { 1, 2, 3, 5};
            foreach(int i in ints)
            {
                Console.WriteLine(i); 
            }
            Console.ReadKey();  
        }
    }
}
