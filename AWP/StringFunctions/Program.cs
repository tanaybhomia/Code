using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StringFunctions
{
    internal class Program
    {
        static void Main(string[] args)
        {
            String s1, s2;
            Console.WriteLine("Enter a String");
            s1 = Convert.ToString(Console.ReadLine());
            s2 = Convert.ToString(Console.ReadLine());
            String s3, s4;
            s3 = String.Copy(s1);
            Console.WriteLine("The String is copied from String s1 -> s3");
            
            // Copy
            Console.WriteLine(s3);

            // Length
            Console.WriteLine("The length of the S3 string is : "+ s3.Length);

            // Accessing 2nd Element 
            Console.WriteLine("The 2nd element in the String is : " + s3[2]);

            // Checking if a String ends with "something"
            if (s3.EndsWith("YES"))
            {
                Console.WriteLine("the string ends with YES");
            }
            else
            {
                Console.WriteLine("NO the string does not end with YES");
            }

            // Checking index
            Console.WriteLine("The Index of x in the String s1 is :"+s1.IndexOf("x"));
        }
    }
}
