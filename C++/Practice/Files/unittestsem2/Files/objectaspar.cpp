#include <iostream>
using namespace std;
class A 
{
	public:
	int a,b;
	void getno()
	{
		cout<<"Enter the Numbers = ";
		cin>>a>>b;
	}
	void mult(A obj)
	{
		cout<<"Multiplying these 2 "<<obj.a<<" "<<obj.b<<" we get "<<obj.a*obj.b;
	}
};
int main()
{
	A obj;
	obj.getno();
	obj.mult(obj);
	return 0;
}
