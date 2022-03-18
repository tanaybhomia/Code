#include <iostream>
using namespace std;
class A
{
    public:
    int no1,no2;
    void getno();
}
void A::getno()
{
    cout<<"Enter the first number = ";
    cin>>no1;
    cout<<"Enter the second number = ";
    cin>>no2;
}
class B:public A
{
    public:
    void mult()
    {
        cout<<"Multiplication of the number is "<<no1*no2;
    }
};
class C:public A
{
    public:
    void cube()
    {
        cout<<"Cube of first number is "<<no1*no1*no1;
        cout<<"Cube of second number is "<<no2*no2*no2;
    }
};
int main()
{
    B obj1;
    C obj2;
    obj1.getno();
    obj1.mult();
    obj2.getno();
    obj2.cube();
}