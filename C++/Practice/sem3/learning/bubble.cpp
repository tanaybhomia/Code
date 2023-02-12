#include <iostream>
using namespace std;
int main()
{
    int ar[20];
    int i,j,k,temp;
    int size;

    cout<<"Enter Size of the Array :\n";
    cin>>size;

    for (i=0;i<size;i++)
    cin>>ar[i];

    for (i=1;i<size;++i)
    {
        for (j=0;j<(size-1);++j)
        {
            if (ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }

    cout<<"\nArray After Bubbling is :";
    for (i=0;i<size;++i)
    {
        cout<<ar[i]<<" ";
    }
}