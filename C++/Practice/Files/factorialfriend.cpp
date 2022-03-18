#include <iostream>
using namespace std;
class A
{
    public:
    int no;
    int i;
    int fact=1;
    friend void factorial(A obj);
};
void factorial(A obj)
{
    cout<<"\nEnter the number for finding the factorial = ";
    cin>>obj.no;
    for (obj.i=1;obj.i<=obj.no;obj.i++)
    {
        obj.fact=obj.fact*obj.i;
    }
    cout<<"Factorial of the number is = "<<obj.fact;
}
int main()
{
    A obj;
    factorial(obj);
    return 0;
}