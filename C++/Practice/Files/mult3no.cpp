#include <iostream>
using namespace std;

class A
{
    public:
    int no1,no2,no3,no12,ans;
    friend void mult(A obj);
};
void mult(A obj)
{
    cout<<"\nEnter 3 Numbers = ";
    cin>>obj.no1>>obj.no2>>obj.no3;
    obj.no12=obj.no1*obj.no2;
    obj.ans=obj.no12*obj.no3;
    cout<<"Multiplying 3 numbers we get : "<<obj.ans;
}
int main()
{
    A obj;
    mult(obj);
    return 0;
}