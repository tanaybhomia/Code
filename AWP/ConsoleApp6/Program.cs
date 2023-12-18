using System;
public class Program
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Enter the character");
        char a = Convert.ToChar(Console.ReadLine());
        switch (a)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                Console.WriteLine("Character is a vowel");
                break;
            default:
                Console.WriteLine("Character is not a vowel");
                break;
        }
        Console.ReadKey();
    }
}
