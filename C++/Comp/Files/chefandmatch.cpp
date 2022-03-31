#include <iostream>
using namespace std;
class A
{
	public:
	int t;
	// test case 
	int i;
	// loop
	int a,b;
	// team scores 
	int diff;
	// difference between a and b;
	int d;
	// d which is the overall limit
	void getnos()
	{
		// takes the number of test cases 
		cin>>a>>b>>d;
	}
	void gett()
	{
		cin>>t;
		// takes the number of test case 
	}
	void check()
	{
		for(i=1;i<=t;i++);
		{
			void getnos();
			diff=a-b;
			if (diff<=d)
			{
				cout<<"YES";
			}
			else if(diff>d)
			{
				cout<<"NO";
			}
		}
	}
};
int main()
{
	A obj;
	obj.gett();
	obj.check();
	return 0;
}
