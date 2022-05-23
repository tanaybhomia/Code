#include <iostream>
using namespace std;
template <class t1>
class demo
{
    public:
    t1 no1,no2;
    demo(int x,int y)
    {
        cout<<"This is a Constructor with 2 Values\n";
        no1=x;
        no2=y;
    }
    void mult()
    {
        cout<<"\nThis is a function for multiplication\n";
        cout<<"\n"<<no1*no2;
    }
};
int main()
{
    demo <int> obj(10,20);
    obj.mult();
    return 0;
}