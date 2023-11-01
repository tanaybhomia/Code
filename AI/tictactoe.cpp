#include<iostream>
using namespace std;
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
void draw()
{
	cout<<a[1]<<" | " <<a[2]<<" | "<<a[3]<<"\n";
	cout<<"------------------\n";
	cout<<a[4]<<" | " <<a[5]<<" | "<<a[6]<<"\n";
	cout<<"------------------\n";
	cout<<a[7]<<" | " <<a[8]<<" | "<<a[9]<<"\n";
}
int check()
{
	if((a[1]==a[2]&& a[2]==a[3])||(a[4]==a[5]&& a[5]==a[6])|| (a[7]==a[8]&& a[8]==a[9]))
	{
		return 1;
	}
	else if((a[1]==a[4] && a[4]==a[7])||(a[2]==a[5]&& a[5]==a[8])||(a[3]==a[6] && a[6]==a[9]))
	{
		return 1;
	}
	else if ((a[1]==a[5] && a[5]==a[9])||(a[3]==a[5]&& a[5]==a[7]))
	{
		return 1;
	}
	else if (a[1] !='1' && a[2] !='2' && a[3]!='3' && a[4]!='4' && a[5]!='5' && a[6]!='6' && a[7]!='7' && a[8]!='8' && a[9]!='9')
	{
		return 2;
	}
	else
	{
		return 0;
	}
}
int main()
{
	draw();
	int player=0,i,ch;
	char mark;
	cout<<"X is for player 1 and 0 for player 2"<<endl;
	check();
	do
	{
		player++;
		F:
		if(player%2!=0)
		{
			cout<<"player 1: enter choice";
			mark='X';
			cout<<endl;
		}
		else
		{
			cout<<"player 2: enter choice";
			mark='O';
			cout<<endl;
		}
			cin>>ch;
			if(a[ch]=='X' || a[ch]=='0')
		{
			cout<<"invalide choice ";
			goto F;
		}
			a[ch]=mark;
			draw();
			i=check();
		}
	while(i==0);
	if (i==2)
	{
		cout<<" game is tie";
	}
	else
	{
		if(player%2==0)
		{
			cout<< "player 2 won the game";
		}
		else
		{
			cout<<"player 1 won the game ";
		}
	}
}