import java.util.*;
class greatestsmallest
{
	public static void main(String args[])
	{
		Scanner input1 = new Scanner(System.in); // input variable
		System.out.println("Enter the size of the array :");
		int n = input1.nextInt(); // size of the array 
		int arr[] = new int[n];
		int i = 0;
		int j;
		int smallest , largest;
		for (i=0;i<n;i++)
		{
			System.out.print("Enter a Number :");
			j = input1.nextInt();
			arr[i] = j;
		}
		smallest = arr[0];
		largest = arr[0];
		for (i=0;i<n;i++)
		{
			if (arr[i]>largest)
			{
				largest = arr[i];
			}
			else if(arr[i]<smallest)
			{
				smallest = arr[i];
			}
		}
		System.out.println("Smallest Number is "+smallest);
		System.out.println("Largest Number is "+largest);
	}
}
