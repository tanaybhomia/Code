#include<iostream>
using namespace std;
int main()
{
int i, j, k, a1[50], a2[50], s1, s2, s, merge[100]; //s is size
cout<<"Enter Array 1 Size -\n";
cin>>s1;
cout<<"Enter Array 1 Elements - \n";
for(i=0; i<s1; i++)
{
cin>>a1[i];
}
cout<<"Enter Array 2 Size -\n";
cin>>s2;
cout<<"Enter Array 2 Elements - \n";
for(i=0; i<s2; i++)
{
cin>>a2[i];
}
for(i=0; i<s1; i++)
{
merge[i] = a1[i];
}
s = s1 + s2;
for(i=0,k=s1; k<s && i<s2; i++,k++)
{
merge[k] = a2[i];
}
cout<<"New Array after Merging - \n";
for(i=0; i<s; i++)
{
cout<<merge[i]<<" ";
}
}