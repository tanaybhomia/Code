class methods 
{
	public void print()
	{
		System.out.println("This is a simple method");
	}
	public void print(int a)
	{
		System.out.println("This is a Parameterized method, value in the parameter is -> "+a);
	}
	public static void main(String args[])
	{
		methods obj = new methods();
		obj.print();
		obj.print(20);
	}
}
