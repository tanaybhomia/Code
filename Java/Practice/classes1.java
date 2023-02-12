class parent 
{
	int i = 10;
	void printer()
	{
		System.out.println("Value of i is, "+i);
	}
}
class child extends parent
{
	int x = 20;
	void printer()
	{
		System.out.println("Value of i is, "+i);
		System.out.println("Value of x is, "+x);
	}
	public static void main(String args[])
	{
		child obj = new child();
		obj.printer();
	}
}
