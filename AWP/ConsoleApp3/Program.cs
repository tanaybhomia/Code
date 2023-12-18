using System;
public class Student
{
    public struct Stud
    {
        public int Stud_id;
        public string StudName, CourseName;
        public DateTime DOB;
    }
    public class Program1
    {
        static void Main(String[] args)
        {
            Stud[] s = new Stud[5];
            Console.WriteLine("Enter the Following Information");
            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine("Enter Stud_id: ");
                s[i].Stud_id = Convert.ToInt32(Console.ReadLine());
                Console.Write("Stud_Name: ");
                s[i].StudName = Console.ReadLine();
                Console.Write("Enter Course name");
                s[i].CourseName = Console.ReadLine();
                Console.Write("enter Date Of Birth");
                s[i].DOB = Convert.ToDateTime(Console.ReadLine());
            }
            Console.WriteLine("\n Student Information");
            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine("\n Student" + i);
                Console.WriteLine("Stud_id: " + s[i].Stud_id);
                Console.WriteLine("Stud_Name: " + s[i].StudName);
                Console.WriteLine("Course_Name: " + s[i].CourseName);
                Console.WriteLine("Date Of Birth: " + s[i].DOB);
            }
            Console.ReadKey();
        }
    }
}