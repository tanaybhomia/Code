using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Program
{
    class fibo
    {
        public void run()
        {
            Console.WriteLine("Enter the Range");
            int a = 0;
            int b = 0;
            int n = Convert.ToInt32(Console.ReadLine());
            int c;
            for (int i = 2; i < n; i++)
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
            fibo f = new fibo();
            f.run();
            Console.ReadKey();
        }
    }
}