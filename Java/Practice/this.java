class base
{
	void print1()
	{
		System.out.println ("This is a Base Class ^_^");
	}
}
class child extends base
{
	void print1()
	{
		System.out.println ("This is a Child Class ^_^");
		super.print1();
	}
}
class main
{
	public static void main(String args[])
	{
		child obj = new child();
		obj.print1();	
	}
}
