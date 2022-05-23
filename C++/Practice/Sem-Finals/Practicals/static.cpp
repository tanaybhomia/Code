#include <iostream>
using namespace std;
class base 
{
    public:
    static int stno;
    int no;
    static void staticfunc()
    {
        cout<<"\nThis is a Static Variable and has access to Static Variables = "<<stno;
    }
    void normalfunc()
    {
        cout<<"\nThis is a Normal function which has access to both the normal variable and the static variable "<<no<<" and "<<stno;
    }
};
int base::stno;
int main()
{
    base obj;
    obj.staticfunc();
    obj.normalfunc();
    return 0;
}