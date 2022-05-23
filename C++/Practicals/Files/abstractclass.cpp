#include <iostream>
using namespace std;
class abstract
{
	public:
	virtual void sum()=0;
};
class abstract2
{
	public:
	int no1,no2;
	void sum()
	{
		cin>>no1>>no2;
		cout<<"Addition of the number is "<<no1+no2;
	}
};
int main()
{
	abstract2 obj;
	obj.sum();
	return 0;
}
