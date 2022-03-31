#include <iostream>
using namespace std;
class base 
{
	public:
	int a,b;
	void getin()
	{
		cout<<"Enter the Variables for the equations = ";
		cin>>a>>b;
	}
};
class child:public base
{
	public:
	void ans()
	{
		cout<<"Ans of the number is = "<<a*b;
	}	
};
int main()
{
	child obj;
	obj.getin();
	obj.ans();
	return 0;
}
