#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
class base
{
	public:
		int no1,no2;
		void in1()
		{
			cout<<"Enter a Number";
			cin>>no1;
		}
		void in2()
		{
			cout<<"Enter a Number";
			cin>>no2;
		}
};
class child1:public base
{
	public:
		void sq()
		{
			cout<<"Suqare of number 1 is \n";
			cout<<no1*no1;
		}
};
class child2:public base
{
	public:
		void cu()
		{
			cout<<"Cube of number 2 is \n";
			cout<<no2*no2*no2;
		}
};
int main()
{
	child1 obj1;
	child2 obj2;
	obj1.in1();
	obj1.sq();
	obj2.in2();
	obj2.cu();
}
