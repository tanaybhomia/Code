#include <iostream>
using namespace std;
class add
{
	public:
	int no1,no2;
	add()
	{
		cout<<"Enter the number : \n";
		cin>>no1>>no2;
		cout<<"\n Addition of the number is = :"<<no1+no2;
	}
	add(add obj)
	{		

		cout<<"Ans is "<<obj.no1*obj.no2;
	}
};
int main()
{
	add obj;
	obj.add(obj)
	return 0;
}
