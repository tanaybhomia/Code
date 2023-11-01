using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace inheritance
{
    public class Furniture
    {
        public string material;
        public void getmaterial()
        {
            Console.WriteLine("Enter Your Material");
            material = Console.ReadLine();
        }
    }
    class Table : Furniture
    {
        public int height, surface_area;
        public void getdata()
        {
            Console.WriteLine("Enter the Height :");
            height = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter the Surface Area");
            surface_area = Convert.ToInt32(Console.ReadLine());
        }
        void show()
        {
            Console.WriteLine("The height")
        }
    }
    public class Program
    {
        public static void Main(string[] args)
        {
            Table f1 = new Table();
            f1.getmaterial();
            f1.getdata();
            Console.ReadKey();
        }
    }
}