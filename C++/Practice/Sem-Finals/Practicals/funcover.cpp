// this is a technique where there are 2 method which have the same parameters and same name and return type

#include <iostream>
using namespace std;
class base
{
    public:
    int no1,no2;
    void add()
    {
        cout<<"This is a Function from Base class\n";
    }
};
class child:public base
{
    public:
    void add()
    {
        cout<<"\nThis is a function from Child class";
    }
};
int main()
{
    child obj;
    obj.add();
    obj.base::add();
    base obj1;
    obj1.add();
}