using System;
class Program
{
    public void Fibonacci()
    {
        Console.WriteLine("Enter Range");
        int n = Convert.ToInt32(Console.ReadLine());
        int a = 0;
        int b = 1;
        int c;
        Console.WriteLine(a + "\n");
        Console.WriteLine(b + "\n");
        for (int i = 2; i < n; i++)
        {
            c = a + b;
            Console.WriteLine(c);
            a = b;
            b = c;
        }
    }
    public static void Main(string[] args)
    {
        Program ob = new Program();
        ob.Fibonacci();
        Console.ReadKey();
    }

}
