class StaticDemo 
{
  static int count = 0; // static variable

  static void incrementCount() 
  { // static method
		count++;
  }

  public static void main(String[] args) 
  {
	    StaticDemo.incrementCount();
	    StaticDemo.incrementCount();
		System.out.println("Count: " + StaticDemo.count);
  }
}

