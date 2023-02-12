class loops2
{
	public static void main(String args[])
	{
		int a[] = {1,2,3,4,5,6,7,8,9,10};
		int i;
		System.out.println("Printing the Array using the For Loop -->");
		for (i=0;i<10;i++)
		{
			System.out.println(a[i]);
		}
		
		System.out.println("Printing the Array using the For Each Loop -->");
		for (int j : a)
		{
			System.out.println(j);
		}
	}
}
