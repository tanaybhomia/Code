#include <iostream>
using namespace std;
class A
{
	public:
	int no1;
	void print()
	{
		cout<<"Variable in no1 is = "<<no1;
	}
};
int main()
{
	A obj;
	obj.print();
}
