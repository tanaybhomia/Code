using System;
public class CustomException:Exception
{
	public CustomException (string message):base(message)
	{

	}
}
public void Main(string[] args)
{
	void validate()
	{
		Console.WriteLine("Enter a Number :");
		int x = int.Parse(Console.ReadLine());
		if(x<18)
		{
			throw new CustomException("Invalid Age");
		}
		else 
		{
			Console.WriteLine("Access granted");
		}
	}
	try
	{
		validate();
	}
	catch(CustomException e)
	{
		Console.WriteLine(e.Message);
	}
	catch(Exception x)
	{
		Console.WriteLine(x.Message);
	}
	finally
	{
		Console.WriteLine("Code is Complete");
	}
}