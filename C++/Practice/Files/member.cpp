#include <iostream>
using namespace std;
class A
{
	public:
	int no1;
	void out();
	void in();
	void sq();
};
void A::out()
{
	cout<<"Enter the Variable = ";
}
void A::in()
{
	cin>>no1;
}
void A::sq()
{
	cout<<"Square of the Variable is = "<<no1*no1;
}
int main()
{
	A obj;
	obj.out();
	obj.in();
	obj.sq();
	return 0;
}
