#include <iostream>
using namespace std;
class length 
{
	public:
	int i,t,kilo,meter,km,m;
	length()
	{
		cout<<"Enter Kilometers an Meters\n";
		cout<<"Enter in KM and M\n";
		cin>>km>>m;
	}
	void add(length obj1,length obj2)
	{
		kilo=obj1.km+obj2.km;
		meter=obj1.m+obj2.m;
		if(meter>=1000)
		{
			t=meter/1000;
			meter=meter%1000;
		}
		kilo=kilo+t;
		cout<<"Adding the Kilometer and Meter is = \n";
		cout<<kilo<<" kilo "<<meter<<" meter ";
	}
};
int main()
{
	length obj1,obj2;
	obj1.add(obj1,obj2);
	return 0;
}
