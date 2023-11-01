using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace practical1cVowel
{
    class Check
    {
        public void vow()
        {
            Console.WriteLine("Enter a Character");
            char c = Convert.ToChar(Console.ReadLine());
            switch (c)
            {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    Console.WriteLine("Character is a vowel.");
                    break;
                default:
                    Console.WriteLine("Character is not a vowel.");
                    break;
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Check obj = new Check();
            obj.vow();
            Console.ReadKey();
        }
    }
}