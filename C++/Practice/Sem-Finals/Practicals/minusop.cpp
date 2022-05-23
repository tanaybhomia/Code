// overload the - operator using a friend function 

#include <iostream>
using namespace std;
class binary 
{
    public:
    int no1;
    binary()
    {
        cout<<"Enter Number 1 = \n";
        cin>>no1;
    }
    friend void operator -(binary obj1, binary obj2);
};
void operator -(binary obj1,binary obj2)
{
    int ans;
    ans=obj1.no1-obj2.no1;
    cout<<ans;
}
int main()
{
    binary obj1,obj2;
    obj1-obj2;
    return 0;
}