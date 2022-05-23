#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	char s1[10]="hello";
	char s2[10]="tanay";
	cout<<"\nBefore Concatination";
	cout<<"\nLength of S1 is = "<<strlen(s1);
	cout<<"\nLength of S2 is = "<<strlen(s2);
	cout<<"\nConcatination result is ="<<strcat(s1,s2);
	cout<<"\nAfter Concatination";
	cout<<"\nLength of S1 is ="<<strlen(s1);
	cout<<"\nLength of S2 is ="<<strlen(s2);
	return 0;
}
