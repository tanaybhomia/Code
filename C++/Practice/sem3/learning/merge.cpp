#include <iostream>
using namespace std;

int main()
{
    int size1,size2,size3;
    int i,j;
    int ar1[10],ar2[10],ar3[10];
    
    size1=5;
    size2=5;
    size3=size1+size2;

    cout<<"Enter values for Array 1 :";
    for (i=0;i<size1;i++)
    {
        cin>>ar1[i];
    }

    cout<<"Enter values for Array 2 :";
    for (i=0;i<size2;i++)
    {
        cin>>ar2[i];
    }

    cout<<"Array 1 is :\n";
    for (i=0;i<size1;i++)
    {
        cout<<ar1[i];
    }

    cout<<"\nArray 2 is :\n";
    for (i=0;i<size2;i++)
    {
        cout<<ar2[i];
    }
}