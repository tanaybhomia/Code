#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
class A
{
	public:
	// this is a abstract class
	virtual void input()=0;
};
class B:public A
{
	public:
	void input()
	{
		cout<<"This is a Normal function made by overiding the virtual function in the abstract class";
	}
};
int main()
{
	B obj;
	obj.input();
	return 0;
}
