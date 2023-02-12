#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i,j,k;
    int temp;   
    int size;

    cout<<"Enter Array Size :";
    cin>>size;

    cout<<"\nEnter Your Array Below:\n";
    for (i=0;i<size;i++)
    {
        cin>>a[i];
    }

    for (i=1;i<size;i++)
    {
        temp=a[i];
        j=i-1;
        while ((temp < a[j]) && (j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }

    for (i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}