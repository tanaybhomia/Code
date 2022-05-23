#include <iostream>
using namespace std;
class para
{
	public:
	int no1,no2;
	para(int no1,int no2)
	{
		cout<<"Adding 1 and 2 we get";
		cout<<no1+no2;
	}
};
int main()
{
	para obj(10,20);
	return 0;
}
