#include <iostream>
using namespace std;
class base
{
    public:
    int no1,no2;
    friend void in();
};
void in()
{
    cout<<"Friend function is triggered\n";
} 
int main()
{
    base obj;
    in();
}