final class base 
{
	void check()
	{
		System.out.println("This is a method inside a final class");
	}
}
class child extends base
{
	void check2()
	{
		super.check();
	}
}
class main
{
	public static void main(String args[])
	{
		child obj = new child();
		obj.check2();
	}
}

