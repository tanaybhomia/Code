#include <iostream>
using namespace std;
class base1
{
	public:
	int no;
	void getin()
	{
		cout<<"Enter the number = ";
		cin>>no;
	}
};
class base2:public base1
{
	public:
	void sq()
	{
		cout<<"square of the number is "<<no*no<<"\n";
	}
};
class child:public base2
{
	public:
	void cu()
	{
		cout<<"Cube of the number is "<<no*no*no;
	}
};
int main()
{
	child obj;
	obj.getin();
	obj.sq();
	obj.cu();
	return 0;
}
