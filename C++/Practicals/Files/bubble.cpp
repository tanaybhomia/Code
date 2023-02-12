#include <iostream>
using namespace std;
int main()
{
	int ar[50]; // declaring array of size 50 ahead;
	int i,j; // for dual looping 
	int temp; // for storing the variable in a temp variable when swapping 
	int n; // for defining the size
	
	 
	cout<<"Size of the Array : ";
	cin>>n;
	cout<<"Now Enter the Elements :\n";
	for (i=0;i<n;++i)
		cin>>ar[i];
		for (i=1;i<n;++i)
		{
			for (j=0;j<(n-i);++j)
			if (ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;		
			}		
		}
	cout<<"Array is : ";
	for (i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	return 0;
}
