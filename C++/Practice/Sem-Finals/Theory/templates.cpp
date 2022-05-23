#include <iostream>
using namespace std;
template <class T1,class T2>
class base 
{
    public:
    T1 no1;
    T2 no2;
    base(int x, float y)
    {
        cout<<"Constructor :\n";
        no1=x;
        no2=y;
    }
    void out()
    {
        cout<<"The Values entered are \n";
        cout<<no1<<"\n";
        cout<<no2;
    }
};
int main()
{
    base<int,float> obj(10,20.1);
    obj.out();
    return 0;
}