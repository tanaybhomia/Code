using System;
public class Product
{
    public static void Main()
    {
        int a, b, c, d, prod;
        Console.WriteLine("Enter Four Numbers");
        a = Convert.ToInt32(Console.ReadLine());
        b = Convert.ToInt32(Console.ReadLine());
        c = Convert.ToInt32(Console.ReadLine());
        d = Convert.ToInt32(Console.ReadLine());
        prod = a * b * c * d;
        Console.WriteLine("Product is: " + prod);
        Console.ReadKey();
    }
}