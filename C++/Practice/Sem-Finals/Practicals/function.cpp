#include <iostream>
using namespace std;
class base
{
    public:
    template <class T1,class T2>
    void disp(T1 a,T2 b,T1 c)
    {
        cout<<"a = "<<a;
        cout<<"\nb = "<<b;
        cout<<"\nc = "<<c;
    }
};
int main()
{
    base obj;
    obj.disp(10,10.2,20);
}