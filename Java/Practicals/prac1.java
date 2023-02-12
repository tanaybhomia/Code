import java.util.*;
class prac1
{
	public static void main (String[] as)
	{
		Scanner no = new Scanner(System.in);
		System.out.println("Enter a Number :");
		int x = no.nextInt();
		int i = 1;
		for (i=1;i<=10;i++)
		{
			System.out.println(x+" x "+i+" = "+x*i);
		}
	}
}
