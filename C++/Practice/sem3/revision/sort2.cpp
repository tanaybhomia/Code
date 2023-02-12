#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int size;
    int i,j;
    int temp;

    cout<<"Enter the size of the Array : ";
    cin>>size;

    cout << "Enter the Elements :\n";
    for (i = 0; i<size;i++)
    {
        cout<<"Enter "<<i<<" element :";
        cin>>a[i];
    }

    cout << "Your Array is :\n";
    for (i=0; i<size;i++)
    {

        cout<<a[i];
    }

    for (i=0;i<size;i++)
    {
        for (j=0;j<(size-1);j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    cout <<"\nYour Array After sorting is :\n";
    for (i=size-1;i>=0;i--)
    {

        cout<<a[i]<<" ";
    }
}