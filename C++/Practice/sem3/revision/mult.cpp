#include <iostream>
using namespace std;

int main()
{
    int a1[3][3];
    int a2[3][3];
    int a3[3][3];
    int i,j,k;
    int sum;

    cout<<"Enter Your Array :\n";
    cout<<"\n";
    cout<<"Enter Array 1 : \n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>a1[i][j];
        }
    }

    cout<<"Enter Array 2 : \n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>a2[i][j];
        }
    }

    // Displaying Arrays 
    cout<<"Array 1 : \n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<a1[i][j]<<" ";
            if (j>=2)
            {
                cout<<"\n";
            }
        }
    }

    cout<<"Array 2 : \n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<a2[i][j]<<" ";
            if (j>=2)
            {
                cout<<"\n";
            }
        }
    }

    // Operations 
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            sum=0;
            for (k=0;k<3;k++)
            {
                sum = sum + a1[i][k]*a2[k][j];
                a3[i][j] = sum ;
            }
        }
    }

    cout<<"Array 3 : \n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<a3[i][j]<<" ";
            if (j>=2)
            {
                cout<<"\n";
            }
        }
    }
}