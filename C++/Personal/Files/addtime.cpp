// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class timer
{
    public:
    int kg,g;
    timer()
    {
        cout<<"Enter Weight in KG and G format\n";
        cin>>kg>>g;
    }
    void print(timer w1, timer w2)
    {
        cout<<"\nWeight of the first person is :"<<w1.kg<<" kg "<<w1.g<<" gm";
        cout<<"\nWeight of the Second person is :"<<w2.kg<<" kg "<<w2.g<<" gm";
    }
    void add(timer w1,timer w2)
    {
        int t,i,kilo,gram;
        kilo=w1.kg+w2.kg;
        gram=w1.g+w2.g;
        if (gram>=1000)
        {
            gram=gram%1000;
            t=gram/1000;
            kilo=t+kilo;
        }
        cout<<"\nTotal Weight is = "<<kilo<<" kg "<<gram<<" gm";
        
    }
};
int main() 
{
    timer w1,w2;
    w1.print(w1,w2);
    w1.add(w1,w2);
    return 0;
}
