#include <iostream>
using namespace std;
class A
{
    public:
    int x;
    void getno()
    {
        cin>>x;
    }
};
class B:public A
{
    public:
    void check()
    {
        if(x>=750)
        {
            cout<<"YES";
        }
        else if (x<750)
        {
            cout<<"NO";
        }
    }
};
int main()
{
    B obj;
    obj.getno();
    obj.check();
    return 0;
}