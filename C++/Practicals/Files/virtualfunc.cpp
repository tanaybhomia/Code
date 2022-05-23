#include <iostream>
using namespace std;
class A
{
	 public:
	 virtual void cube()=0;
};
class B
{
	public:
	int no;
	void cube()
	{
		cout<<"Enter a Variable :";
		cin>>no;
		cout<<"Cube of the number is"<<no*no*no;
	}
};
int main()
{
	B obj;
	obj.cube();
	return 0;
}
