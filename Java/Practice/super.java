class base 
{
	int i = 20;
	int x = 30;
	void print()
	{
		i = 200;
		x = 300;
	}
	void show()
	{
		System.out.println("The Value of i and x are "+i+" "+x);
	}
	public static void main(String args[])
	{
		base obj = new base();
		obj.print();
		obj.show();
	}
}
