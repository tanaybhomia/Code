#include <iostream>
using namespace std;
class add
{
	public:
	int a,b;
	void adding();
	void ans();
};
void add::adding()
{
	cout<<"Enter 2 Numbers = ";
	cin>>a>>b;
}
void add::ans()
{
	cout<<"Ans is = "<<a+b;
}
int main()
{
	add obj;
	obj.adding();
	obj.ans();
	return 0;
}
