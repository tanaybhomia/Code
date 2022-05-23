// overload + functionusing member function 

#include <iostream>
#include <math.h>
// required for modulus function
using namespace std;
class complex
{
	public:
	float r,i;
	complex()
	{
		cout<<"Enter a Real and Imaginary number";
		cin>>r>>i;
	}
	void operator +(complex obj1)
	{
		float real,img;
		real=r+obj1.r;
		img=i+obj1.i;
		cout<<real<<"+"<<img<<"i";
	}
};
int main()
{
	complex obj1,obj2;
	obj1+obj2;
	return 0;
}

