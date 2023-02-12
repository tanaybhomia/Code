#include <iostream>
using namespace std;

int main()
{
    int i,j,temp;
    int ar[3][3];
    int tar[3][3];

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<"Enter the Element :";
            cin>>ar[i][j];
        }
    }
    
    cout<<"\nArray Before Transposing\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<ar[i][j]<<" ";
            if (j>=2)
            {
                cout<<"\n";
            }
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
           tar[i][j]=ar[j][i];
        }
    }
    cout<<"\nAfter Transposing\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<tar[i][j]<<" ";
            if (j>=2)
            {
                cout<<"\n";
            }
        }
    }
}