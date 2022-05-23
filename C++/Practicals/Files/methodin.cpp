#include <iostream>
using namespace std;
class A
{
	public:
	int no1;
	void method1()
	{
		cout<<"Enter a number please";
		cin>>no1;
	}
	void square()
	{
		cout<<"Square of the number is";
		cout<<"\n"<<no1*no1;
	}
};
int main()
{
	A obj;
	obj.method1();
	obj.square();
	return 0;
}	
