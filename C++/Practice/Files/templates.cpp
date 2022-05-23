#include <iostream>
using namespace std;
template <class t1,class t2>
class A
{
	public:
	t1 no1;
	t2 no2;
	A()
	{
		cout<<"Enter a Integer and a float";
		cin>>no1>>no2;
	}
	void print()
	{
		cout<<"Numbers which were entered are";
		cout<<no1<<no2;
	}
};
int main()
{
	A <int,float> obj1;
	obj1.print();
	return 0;
}
