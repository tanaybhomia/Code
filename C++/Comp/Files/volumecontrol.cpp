// first their will be 2 input numbers which are a and b 
	// a is where the volume is and b is where the volume should be 
	// t is the test case 
// there will be 1 output integer
	// ans 
// then there will be the number of test case t and loop i


#include <iostream>
using namespace std;
class in
{
	public:
		int a,b,ans,i,t;
		void input()
		{
			cin>>t;
			for(i=0;i<t;i++)
			{
				cin>>a>>b;
				if(a>b)
				{
					cout<<"\n"<<a-b;
				}
				else if(b>a)
				{
					cout<<"\n"<<b-a;
				}
				else if(b==a)
				{
					cout<<0;
				}
			}
		}
};
int main()
{
	in obj;
	obj.input();
	return 0;
}
