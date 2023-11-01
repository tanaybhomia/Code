using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Delegation
{
    public class divzero : Exception
    {
        public divzero(String message) : base(message)
        {

        }
    }

    class temp
    {
        public void disp()
        {
            Console.WriteLine("Enter the Value to Divide from :");
            int x = Convert.ToInt32(Console.ReadLine());
            if (x == 0)
            {
                throw (new divzero("\n Divided by Zero"));
            }
            else
            {
                Console.WriteLine("Not Divided by Zero");
            }
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            temp t1 = new temp();
            try
            {
                t1.disp();
            }
            catch (divzero e)
            {
                Console.WriteLine("An exception has occured " + e.Message);
            }
            Console.ReadKey();
        }
    }
}