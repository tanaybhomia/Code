#include <iostream>
using namespace std;
class base1
{
    public:
    int no1;
    void in1()
    {
        cout<<"Enter Number 1 =";
        cin>>no1;
    }
};
class base2
{
    public:
    int no2;
    void in2()
    {
        cout<<"Enter Number 2 =";
        cin>>no2;
    }
};
class child:public base1,public base2
{
    public:
    void mult()
    {
        cout<<"Multiplying both the numbers we get\n";
        cout<<no1*no2;
    }
};
int main()
{
    child obj;
    obj.in1();
    obj.in2();
    obj.mult();
}