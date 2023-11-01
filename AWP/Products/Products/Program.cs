using System;
namespace Product
{
    class Program
    {
        public static void Main(string[] args)
        {
            int a, b, c, d, product;
            Console.WriteLine("Enter 4 Numbers :");
            a = Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine());
            c = Convert.ToInt32(Console.ReadLine());
            d = Convert.ToInt32(Console.ReadLine());
            product = a* b * c * d;
            Console.WriteLine("The Product is :"+product);
            Console.ReadKey();
        }
    }
}