class Main
{
	public static void main(String[] as)
	{
		int x;
		int y;
		
		x = 20;
		y = 35;
		
		if (x<y)
		{
			x = 30;
			y = 25;
			if (x>y)
			{
				System.out.println("X = "+x);
			}
		}
		else 
		{
			System.out.println("X is Greater than Y");
		}
	}
}
