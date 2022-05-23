// overload a binary operator + using a friend function 
#include <iostream>
using namespace std;
class A
{
	public:
	int no1;
	A()
	{
		cout<<"Enter a Number";
		cin>>no1;
	}
	void friend operator+(A obj1,A obj2);
};
void operator+(A obj1,A obj2)
{
	cout<<"Addition of Number 1 and Number 2 is";
	cout<<obj1.no1+obj2.no1;
}
int main()
{
	A obj1,obj2;
	obj1+obj2;
	return 0;
}
