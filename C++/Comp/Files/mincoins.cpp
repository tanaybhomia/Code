#include <iostream>
using namespace std;
class A
{
    public:
    int no,t,i,ans;
    int x=1;
    // no for input 
    // t for test case 
    // x for shortcut when remained is generated
    // i for loop
    // ans for final ans;
    void getno()
    {
        cin>>t;
        // taking the number t for test cases
        for (i=0;i<t;i++)
        {
            cin>>no;
            if (no%10==5)
            {
                ans=no/10;
                // saves the ans as the output 
                ans=ans+x;
                // adds 1 in the ans 
                cout<<ans<<"\n";
                // prints the output 
            }
            else if (no%10==0)
            {
                ans=no/10;
                cout<<ans<<"\n";
            }
            else if (no%10!=0 || no%10!=5)
            {
                cout<<"-1"<<"\n";
            }
        }
    }
};
int main()
{
    A obj;
    obj.getno();
    return 0;
}