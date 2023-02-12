#include <iostream>
using namespace std;
int main()
{
    int ar[10];
    int i,j,temp,size;

    cout<<"Enter the Size :\n";
    cin>>size;

    for (i=0;i<size;i++)
    {
        cout<<"Enter the Element: \t";
        cin>>ar[i];
    }

    for (i=0;i<size;i++)
    {
        temp=ar[i];
        j=i-1;
        while ((temp<ar[j]) && (j>=0))
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=temp;
    }

    cout<<"Ans is :\n";
    for (i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
}