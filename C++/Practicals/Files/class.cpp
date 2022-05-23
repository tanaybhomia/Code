#include <iostream>
using namespace std;
class parent
{
	public:
	void out()
	{
		cout<<"Out is the function which is inside the class";
		cout<<"\n Classes dont have thier own runtime but depend on the objects";
	}
};
int main()
{
	parent obj;
	obj.out();
	return 0;
}
