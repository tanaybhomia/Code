abstract class base 
{
	int i = 20;
	int x = 25;
	abstract void meti();
	abstract void metx();
}
class child1 extends base
{
	void meti()
	{
		System.out.println("Value os i is"+i);
	}
	
	void metx()
	{
		System.out.println("Value os x is"+x);
	}		
}
class child2 extends base
{
	void meti()
	{
		System.out.println("Value os i is"+i);
	}
	
	void metx()
	{
		System.out.println("Value os x is"+x);
	}	
}
class operation
{
	public static void main(String args[])
	{
		child1 obj1 = new child1();
		child2 obj2 = new child2();
		obj1.meti();
		obj2.metx();
	}
}
