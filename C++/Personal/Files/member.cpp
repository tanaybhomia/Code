// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class area
{
    public:
    int a,b;
    area()
    {
        cout<<"\nAns is "<<a*b;
    }
    area(int a,int b)
    {
        
    }
};
int main() 
{
    int a1,b1;
    cout<<"\nEnter 2 numbers";
    cin>>a1>>b1;
    area obj;
    area obj1(a1,b1);
    return 0;
}
