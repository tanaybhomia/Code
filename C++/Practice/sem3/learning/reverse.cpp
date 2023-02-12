#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int i,j,temp,size;
    cout<<"Enter the size of array : ";
    cin>>size;

    for (i=0;i<size;i++)
    {
        cout<<"Enter "<<i<<" number of element :";
        cin>>a[i];
    }
    cout<<"\nBefore Reversing the Array : \n";
    for (i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    j=i-1;
    i=0;
    while (i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<"\nAfter Reversing the Array : \n";
    for (i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}