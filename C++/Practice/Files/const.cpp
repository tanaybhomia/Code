#include <iostream>
using namespace std;
class add
{
	public:
	int no;
	add()
	{
		cout<<"Enter a number";
		cin>>no;
	}
	void addy(add obj1,add obj2)
	{
		int no2;
		no2=obj1.no+obj2.no;
		cout<<"Addtion of both the number gave"<<no2;
	}
};
int main()
{
	add obj1,obj2;
	obj1.addy(obj1,obj2);
	return 0;
}		
