#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    int temp;
    int a[10];
    int size;
    cout<<"Enter the Size :";
    cin>>size;
    for (i=0;i<size;i++)
    cin>>a[i];
    for (i=0;i<size;i++)
    {
        for (j=0;j<size-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for (i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}