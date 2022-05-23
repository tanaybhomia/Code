#include <iostream>
using namespace std;
class parent 
{
	public:
	int no1,no2;
	void square1();
	void square2();
};
void parent::square1()
{
	cout<<"Enter Number 1 ";
	cin>>no1;
	cout<<"\n"<<no1*no1;
}
void parent::square2()
{
	cout<<"\nEnter Number 2 ";
	cin>>no2;
	cout<<"\n"<<no2*no2;
}
int main()
{
	parent obj;
	obj.square1();
	obj.square2();
	return 0;
}
