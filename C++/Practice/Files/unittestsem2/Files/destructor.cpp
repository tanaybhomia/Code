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
		cout<<"\nAddition of the number is = :"<<no1+no2;
	}
	~add()
	{
		cout<<"\nDestructor is called ";
	}
};
int main()
{
	add obj;
	return 0;
}
