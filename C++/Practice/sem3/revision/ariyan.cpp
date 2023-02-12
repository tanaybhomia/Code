#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, j, temp;
    cout<<"Enter the elements of the array - \n";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before sorting : ";
    for(j=0; j<10; j++)
    {
        cout<<arr[j]<<" ";
    }
    
    for(i=0; i<10; i++)
    {
        for(j=0; j<10-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"\nArray after sorting : ";
    for(j=9; j>=0; j--)
    {
        cout<<arr[j]<<" ";
    }
}