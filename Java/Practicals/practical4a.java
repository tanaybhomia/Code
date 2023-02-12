Code : 
import java.util.*;
class ascdec
{
    Scanner input = new Scanner(System.in);
    int num,i;
    int arr[];
    int temp = 0;
    public void getdata()
    {
   	 System.out.print("Enter the Size of Array : ");
   	 num = input.nextInt();
   	 for (i=0;i<num;i++)
   	 {
   		 System.out.print("Enter a Number ");
   		 arr[i]=input.nextInt();
   	 }
   	 
    }
    void putdata()
    {
   	 System.out.println("The Array is");
   	 for (i=0;i<num;i++)
   	 {
   		 System.out.print(i);
   	 }
    }
    void asc()
    {
   	 for (i=0;i<num;i++)
   	 {
   		 for (j=1;j<num;j++)
   		 {
   			 if (arr[i]>arr[j])
   			 {
   				 temp = arr[i];
   				 arr[i] = arr[j];
   				 arr[j] = temp;
   			 }
   		 }
   	 }
    
   	 System.out.println("Your Number is:\n")
   	 {
   		 for (i=0;i<num;i++)
   		 {
   			 System.out.println(i);
   		 }
   	 }
    }   		 
    void dec()
    {
   	 for (i=0;i<num;i++)
   	 {
   		 for (j=1;j<num;j++)
   		 {
   			 if (arr[i]>arr[j])
   			 {
   				 temp = arr[i];
   				 arr[i] = arr[j];
   				 arr[j] = temp;
   			 }
   		 }
   	 }
    
   	 System.out.println("Your Number is:\n")
   		 for (i=num;i>=0;i--)
   		 {
   			 System.out.println(i);
   		 }
    }
    public static void main()
    {
   	 ascdec obj = new ascdec;
   	 obj.getdata();
   	 obj.putdata();
   	 obj.asc();
   	 obj.dec();
    }
}


