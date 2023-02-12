#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int i,j,k;
    int size;
    int temp;

    cout<<"Enter the Size :";
    cin>>size;

    cout<<"Enter the Array :";
    for (i=0;i<size;i++)
    {
        cin>>a[i];
    }

    for (i=0;i<size;i++)
    {
        for (j=0;j<size;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"Your Array is :\n";
    for (i=0;i<size;i++)
    {
        cout<<a[i];
    }
}