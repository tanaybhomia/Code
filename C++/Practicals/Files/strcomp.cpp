#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	char s1[10]="A";
	char s2[10]="B";
	int r;
	r=strcmp(s1,s2);
	if(r==0)
	{
		cout<<"Both the string are equal";
	}
	else if(s1>s2)
	{
		cout<<"S1 is greater than S2 which means "<<s1<<" is greater than "<<s2;
	}
	else if (s2>s1)
	{
		cout<<"S2 is greater than S1 which means "<<s2<<" is greater than "<<s1;
	}
	return 0;
}

