#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
	int no1;
	int no2;
	cout<<"Choose a Number (1st,2nd)";
	cin>>no1>>no2;
	try
	{
		if(no1==1)
		{
		cout<<"Congratulations you have won the lotery";
		}
		else if(no1==2)
		{
		throw (2);
		}
		else
		{
		throw ('s');
		}
	}
	catch(int no1)
	{
		cout<<"Sorry you were not lucky";
	}
	catch(char b)
	{
		cout<<"Sorry This was an error";
	}
	return 0;
}
