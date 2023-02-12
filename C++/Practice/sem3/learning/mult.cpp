#include <iostream>
using namespace std;

int main()
{
    int ar1[3][3],ar2[3][3],ar3[3][3];
    int i,j,k;
    int sum;

    cout<<"Enter Elements :\n";
    cout<<"\nArray 1\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>ar1[i][j];
        }
    }
    cout<<"\nArray 2\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>ar2[i][j];
        }
    }

    cout<<"\nEntered Array are : ";
    cout<<"\nArray 1\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<ar1[i][j]<<" ";
            if (j>=2)
            {
                cout<<"\n";
            }
        }
    }
    cout<<"\nArray 2\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<ar2[i][j]<<" ";
            if (j>=2)
            {
                cout<<"\n";
            }
        }
    }
    cout<<"\nArray After Multiplication is :\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            sum=0;
            for (k=0;k<3;k++)
            {
                sum = sum + ar1[i][j]*ar2[i][j];
                ar3[i][j]=sum;
            }
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<ar3[i][j]<<" ";
            if (j>=2)
            {
                cout<<"\n";
            }
        }
    }
}