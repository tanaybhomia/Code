#include <iostream>
using namespace std;
template (class T)
class add
{
	public:
	T no;
	demo (T n)
	{
		no=n;
	}
	void print()
	{
		cout<<"Number is"<<no;
	}
};
int main()
{
	demo <int>
	obj1(10);
	obj1.print();
	demo <float>
	obj2(20.5);
	return 0;
}	
