class base 
{
	static int a = 10;
}
class child extends base 
{
	int a = 20;
	public static void main(String args[])
	{
		base obj = new base();
		base obj2 = new base();
		System.out.println(" Value of Static a for first object is = "+obj.a);
		obj.a = obj.a+1;
		System.out.println(" Value of Static a for first object is = "+obj.a);
	}
}
