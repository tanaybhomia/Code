#include <iostream>
using namespace std;
class base 
{
    public:
    int no1,no2;
    int no3;
    void in()
    {
        cout<<"Enter a Number for NO1= ";
        cin>>no1;
        cout<<"Enter a Number for NO2= ";
        cin>>no2;
        no3=no1-no2;
    }
    void check()
    {
        try
        {
            if(no3<10)
            {
                throw(1);
            }
            else if(no3>10)
            {
                throw(1.2);
            }
            else if(no3>20)
            {
                throw('h');
            }
        }
        catch(int x)
        {
            cout<<"Subtraction was Less than 10";
        }
        catch(float y)
        {
            cout<<"Subtraction was greater than 10";
        }
        catch(char e)
        {
            cout<<"Subtraction was greator than 20";
        }
    }
};
int main()
{
    base obj;
    obj.in();
    obj.check();
}