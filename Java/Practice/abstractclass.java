abstract class base 
{
	int roll = 03;
	String name = "Tanay";
	abstract void show();
	void absmet()
	{
		System.out.println("This is a Abstract method");
	}
}
class child extends base 
{
	void show()
	{
		System.out.println("Your Name is :"+name);
		System.out.println("Your Roll is :"+roll);
	}
	public static void main(String []args)
	{
		child obj = new child();
		obj.show();
		obj.absmet();
	}
}
