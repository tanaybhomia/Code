#include <iostream>
using namespace std;
int main()
{
	int i,j,temp;
	int ar[50];
	int n;
	cout<<"Enter the Size of the Array : ";
	cin>>n;
	cout<<"Enter the Elements :";
	for (i=0;i<n;++i)
		cin>>ar[i];
		for (i=1;i<n;++i)
		{
			for (j=0;j<(n-i);++j)
				if (ar[j]>ar[j+1])
				{
					temp=ar[j];
					ar[j]=ar[j+1];
					ar[j+1]=ar[j];
				}
		}
		cout<<"Array After the Sorting is : ";
		for (i=0;i<n;++i)
		{
			cout<<ar[i];
		}
}
