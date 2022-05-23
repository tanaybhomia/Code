#include <iostream>
using namespace std;
class A 
{
    public:
    int no1,no2;
    A()
    {
        cout<<"A Constructor was triggered;\n";
        cout<<"Enter A Number =";
        cin>>no1;
    }
    friend void operator -(A obj1,A obj2);
};
void operator -(A obj1,A obj2)
{
    int no3;
    cout<<"After Subtracting the 2 Objects we get =\n";
    no3=obj1.no1-obj2.no1;
    cout<<no3;
}
int main()
{
    A obj1,obj2;
    obj1-obj2;
    return 0;
}