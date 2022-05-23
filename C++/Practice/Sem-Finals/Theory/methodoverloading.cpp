#include <iostream>
using namespace std;
class base 
{
    public:
    int no;
    void in()
    {
        cout<<"This is a Default Constructor\n";
    }
    void in(int x)
    {
        cout<<"This is the second Constructor\n";
    }
    void in(int x,int y)
    {
        cout<<"This is a Thrid Contructor";
    }
};
int main()
{
    base obj;
    obj.in();
    obj.in(10);
    obj.in(10,20);
    return 0;
}