#include <iostream>
using namespace std;
class base
{
	public:
	int no1,no2;
	void print();
	static int no3;
};
base:void print()
{
	cout<<"Enter 2 Varaibles\n";
	cin>>no1>>no2;
	cout<<"Multiplying we Get\n";
	cout<<no1*no2;
}
int main()
{
	base obj;
	obj.print();
	return 0;
}
