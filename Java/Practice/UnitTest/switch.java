import java.util.*;
class base 
{
	public static void main(String args[])
	{
		int i = 0;
		System.out.println("Enter a Number from 1 to 3 : ");
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		
		switch(n)
		{
			case 1 :
				System.out.println("User has selected the Option 1");
			case 2 :
				System.out.println("User has selected the Option 2");
			case 3 :
				System.out.println("User has selected the Option 3");
		}	
	}
}
