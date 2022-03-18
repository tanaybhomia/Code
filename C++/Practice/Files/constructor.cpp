// Take 2 numbers from the user and add them with a function
#include <iostream>
using namespace std;
class base 
{
    public:
    int no;
    base () 
    {
        cout<<"Enter the number = ";
        cin>>no;
    }
    base (int no)
    {
        void check()
        {
            if (no>0)
            {
                cout<<"The Number is +ve";
            }
            if (no<0)
            {
                cout<<"The Number is -ve";
            }
            else 
            {
                cout<<"Check if the number you have enterd in not Zero";
            }
        }
    }
};
int main()
{
    base obj;
    base obj(obj);
    obj.check;
    return 0;
}