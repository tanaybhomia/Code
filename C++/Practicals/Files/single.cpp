#include <iostream>
using namespace std;
class base
{
	public:
	int no1;
	void input()
	{
		cout<<"Enter a Number";
		cin>>no1;
	}
};
class child:public base
{
	public:
	void output()
	{
		cout<<"Cube of the number is";
		cout<<no1*no1*no1;
	}
};
int main()
{
	child obj;
	obj.input();
	obj.output();
	return 0;
}
