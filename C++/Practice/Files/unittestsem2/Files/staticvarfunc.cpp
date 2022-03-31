#include <iostream>
using namespace std;
class base
{
	public:
	int no1;
	static int no2;
	void out()
	{
		cout<<"Value in normal number 1 is = "<<no1;
	}
	static void out1()
	{
		cout<<"Value in the Static number 2 is = "<<base::no2; // for using the static variable we need to use it with the class name and it is same for the static function we need to call it using the class name;
	}
};
int base::no2=0;
int main()
{
	base obj;
	obj.out();
	base::out1();
}
