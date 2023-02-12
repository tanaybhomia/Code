class conditions
{
	public int a = 10;
	public int b = 20;
}
class Final extends conditions
{
	public void check()
	{
		if (a > b)
		{
			System.out.println("A is greater than B");
		}
		else if (b > a)
		{
			System.out.println("B is greater than A");
		}
		else 
		{
			System.out.println("Something is Wrong");
		}	
	}
}
class main
{
	public static void main(String args[])
	{
		Final obj = new Final();
		obj.check();
	}
}
