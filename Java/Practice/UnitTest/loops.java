class whloop 
{
	void whlooping()
	{
		int i = 1;
		while (i<=10)
		{	
			System.out.println("While Loop - "+i);
			i = i+1;
		}	
	}
}
class dowhloop
{
	void dowhlooping()
	{
		int j = 1;
		do
		{
			System.out.println("Do While Loop - "+j);
			j = j+1;
		}while(j<=10);	
	}
}
class forloop 
{
	int k;
	void forlooping()
	{
		for (k=1;k<=10;k++)
		{
			System.out.println("For Loop - "+k);
		}	
	}
}
class foreach
{
	void foreach()
	{
		int [] arr = new int[5];
		arr[0] = 1;
		arr[0] = 2;
		arr[0] = 3;
		arr[0] = 4;
		arr[0] = 5;
		for (int m : arr)
		{
			System.out.println("For Each Loop - "+m);
		}
	}
}
class main
{
	public static void main(String args[])
	{
		whloop obj1 = new whloop();
		obj1.whlooping();
		dowhloop obj2 = new dowhloop();
		obj2.dowhlooping();
		forloop obj3 = new forloop();
		obj3.forlooping();
		foreach obj4 = new foreach();
		obj4.foreach();
	}
}

