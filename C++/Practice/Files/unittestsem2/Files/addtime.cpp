#include <iostream>
using namespace std;
class timer
{
	public:
	int t,min,sec,m,s;
	// t for temporary;
	// min for adding minutes 
	// sec for adding sec
	// m for storing 2 min input
	// s for storing 2 sec input
	timer() 
	{
		cout<<"Enter the Time in Minutes and Seconds";
		cin>>m;
		cin>>s;
	}
	void add(timer obj1, timer obj2)
	{
		min=obj1.m+obj2.m;
		sec=obj1.s+obj2.s;
		if (sec>=60)
		{
			t=sec/60;
			sec=sec%60;
		}
		min=min+t;
		cout<<"Ans is\n";
		cout<<min<<" minutes "<<sec<<" secs ";
	}
};
int main()
{
	timer obj1,obj2;
	obj1.add(obj1,obj2);
	return 0;
}
