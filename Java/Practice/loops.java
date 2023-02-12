class loops 
{
	public static void main(String[] as)
	{
		int x = 30;
		int y = 1;
		for (y=1;y<5;y++)
		{
			System.out.println("This is a For Loop");
		}
		y = 0;
		while (y<10)
		{
			System.out.println("This is a While Loop");
			y = y+1;
		}
		y = 0;
		do 
		{
			System.out.println("This is a Do While Loop");
		}while (y != 0);
	}
}
