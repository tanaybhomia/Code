using System;
class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Enter a Number:");
        int n = Convert.ToInt32(Console.ReadLine());
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                count++;
        }
        if (count != 0)
            Console.WriteLine("{0} is not prime", n);
        else
            Console.WriteLine("{0} is prime", n);
        Console.ReadKey();
    }
}
