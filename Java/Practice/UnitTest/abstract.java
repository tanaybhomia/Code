abstract class base 
{
	abstract void abmethod();
}
class child extends base
{
	void abmethod()
	{
		System.out.println("This is a abstract method inside a child class");
	}
	public static void main(String args[])
	{
		child obj = new child();
		obj.abmethod();
	}
}
