#include <iostream>
using namespace std;
class base
{
	public:
	void print()
	{
		cout<<"This is a print() function of a base class\n";
	}
	void show()
	{
		cout<<"This is a show() function of a base class\n";
	}
};
class derived:public base
{
	public:
	void print()
	{
		cout<<"This is a print() function of a derived class\n";
	}
	void show()
	{
		cout<<"This is a show() fun of a derived class\n";
	}
};
int main()
{
	derived obj;
	obj.print();
	obj.show();
	obj.base::print();
	obj.base::show();
	return 0;
}
