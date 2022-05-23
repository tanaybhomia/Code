#include <iostream>
using namespace std;
class base
{
    public:
    int r,i;
    base()
    {
        cout<<"Enter a Real Number =";
        cin>>r;
        cout<<"Enter a Imaginary Number =";
        cin>>i;
    }
    void add(base obj1,base obj2)
    {
        int real,img;
        real=obj1.r+obj2.r;
        img=obj1.i+obj2.i;
        cout<<"The Final ans is :\n";
        cout<<real<<" + "<<img<<" i";
    }
};
int main()
{
    base obj1,obj2;
    obj1.add(obj1,obj2);
    return 0;
}