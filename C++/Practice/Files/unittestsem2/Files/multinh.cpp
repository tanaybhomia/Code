#include <iostream>
using namespace std;
class A
{
	public:
	int a;
	void getno()
	{
		cout<<"Enter the First number - ";
		cin>>a;
	}
};
class B 
{
	public:
	int b;
	void getno1()
	{
		cout<<"Enter the Second number - ";
		cin>>b;
	}	
};
class C:public A,public B
{
	public:
	void getans()
	{
		cout<<"Ans of the numbers is "<<a*b;
	}
};
int main()
{
	C obj;
	obj.getno();
	obj.getno1();
	obj.getans();
	return 0;
}
