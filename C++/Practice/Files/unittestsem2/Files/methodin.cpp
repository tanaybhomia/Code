#include <iostream>
using namespace std;
class add
{
	public:
	int a,b;
	void adding()
	{
		cout<<"Enter 2 numbers = ";
		cin>>a>>b;
	}
	void ans()
	{
		cout<<"Ans is = "<<a+b;
	}
};
int main()
{
	add obj;
	obj.adding();
	obj.ans();
	return 0;
}
