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

    cout<<"Array is :";
    for (i=0;i<size;i++)
    {
        cout<<a[i];
    }
}