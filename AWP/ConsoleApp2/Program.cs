using System;
namespace ConsoleApp4
{
    class Program1
    {
        static void Main(String[] args)
        {
            String str2, str3, str4;
            Console.WriteLine("Enter a String: ");
            str2 = Console.ReadLine();
            Console.WriteLine("str2 is: " + str2);
            str3 = "Welcome to visual studio IDE";
            str4 = String.Copy(str3);
            Console.WriteLine("str4 is: " + str4);
            Console.WriteLine("Length of str4 is: " + str4.Length);
            Console.WriteLine("10th Element is: " + str3[9]);
            Console.WriteLine("Checking the suffix" + str3.EndsWith("IDE"));
            Console.WriteLine("Index of str3 is: " + str3.IndexOf("o"));
            Console.WriteLine("Insert operation: " + str2.Insert(6, "Hello"));
            Console.ReadKey();
        }
    }
}