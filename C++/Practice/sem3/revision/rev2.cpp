#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int i,j,k;
    int temp;
    int size;

    cout<<"Enter Array size :";
    cin>>size;

    cout<<"Enter the Elements :\n";
    for (i=0;i<size;i++)
    {
        cin>>a[i];
    }

    cout<<"\nBefore Reversing the Array :\n";
    for (i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\nAfter Reversing the Array :";
    for (i=size-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}