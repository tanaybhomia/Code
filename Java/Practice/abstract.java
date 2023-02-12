abstract class base 
{
	int i = 20;
	base()
	{
		System.out.println("This is a constructor for Base Class");
	}
	abstract void print();
}
class child extends base
{
	child()
	{
		System.out.println("This is a constructor for Child Class");
	}
	void print()
	{
		System.out.println("This value of i from Astract class is "+i);
	}
	public static void main (String args[])
	{
		child obj = new child();
		obj.print();
		child obj1 = new child();
	}
}
