// overload subtract operator using friend function
#include <iostream>
#include <math.h>
using namespace std;
class weight
{
	public:
	int kg,gm;
	weight()
	{
		cout<<"Enter Weight in kg and gm";
		cin>>kg>>gm;
	}
	friend void operator -(weight w1,weight w2);
};
void operator -(weight w1,weight w2)
{
	float kilo,gram;
	kilo=abs(w1.kg-w2.kg);
	gram=abs(w1.gm-w2.gm);
	cout<<kilo<<" kilo "<<gram<<" gram";
}
int main()
{
	weight w1,w2;
	w1-w2;
	return 0;
}	
