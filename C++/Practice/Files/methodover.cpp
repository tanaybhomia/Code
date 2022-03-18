#include <iostream>
using namespace std;
class A
{
    public:
    int a;
    void out()
    {
        cout<<"Enter a number =";
        cin>>a;
    }
};
class B:public A
{
    public:
    void check()
    {
        if(a>o)
        {
            cout<<"Number is Positive";
        }
        if (a<0)
        {
            cout<<"Number is Negative";
        }
    }
};
class C:public A
{
    public:
    void sq()
    {
        cout<<"Square is = ";
    }
};
int main ()
{
    
}
