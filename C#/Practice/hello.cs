using System;
namespace StaticVarApplication
{
	class StaticVar
	{
		public static int number;
		public void count()
		{
			number++;
		}
		public int getnumber()
		{
			return number;
		}
	}
	class StaticTester
	{
		static void main(String[] args)
		{
			StaticVar s1 = new StaticVar();
			StaticVar s2 = new StaticVar();

			s1.count();
			s1.count();
			s1.count();
			s2.count();
			s2.count();
			s2.count();
			Console.WriteLine("Variable num for s1: {0}", s1.getNum());
 			Console.WriteLine("Variable num for s2: {0}", s2.getNum());
 			Console.ReadKey();
		}
	}
}