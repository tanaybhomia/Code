#include <iostream>
using namespace std;

int main()
{
    int ar[10];
    int i,j,temp;

    cout<<"Enter Array Elements : \n";
    for (i=0;i<10;i++)
    {
        cout<<"Enter "<<i<<" element :";
        cin>>ar[i];
    }

    cout<<"\nArray before sorting \n";
    for (i=0;i<10;i++)
    {
        cout<<ar[i];
    }
    cout<<"\nArray After sorting \n";
    for (i=0;i<10;i++)
    {
        for (j=0;j<10-1;j++)
        {
            if (ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for (i=0;i<10;i++)
    {
        cout<<ar[i];
    }

}