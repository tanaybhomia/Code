#include <iostream>
using namespace std;
class base
{
    public:
    int no;
    base()
    {
        cout<<"This is a Default Constructor\n";
    }
    base(int x,int y)
    {
        cout<<"This is a Parameterized constructor";
    }
};
int main()
{
    base obj1,obj2;
    base obj3(20,30);
    return 0;
}