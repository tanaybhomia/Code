#include <stdio.h>
void showfinal(char ar[3][3]);
void check(char ar[3][3]);
void main()
{
	printf("The User 1 enters Position for 'X' \n");
	printf("The User 2 enters Position for 'O'\n");

	char ar[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}}; // array for Matrix 
	int in1; // Position for row
	int in2; // Position for Column
	int count = 0;
	int flag = 0;
	for (int j = 0;j<5;j++) // loop for the first user 
	{
		printf("Positons for X U1 :");
		scanf("%d%d",&in1,&in2);
		ar[in1][in2] = 'X';
		count = count+1;
		if ( j == 4 )
		{
			break;
		} 
		for (int i =0;i<3;i++) // shows the current state 
		{
			for (int j = 0;j<3;j++)
			{
				printf("%c ",ar[i][j]);	
			}
			printf("\n");
		}
		for (int k = 0;k<3;k++) // loop for second user
		{
			if (count>=5)
			{
				flag = 1;
				check(ar);
				break;
			}
			else if (count == 9)
			{
				printf("This was a Draw");
			}
			else 
			{
				printf("Positons for 0 U2 :");
				scanf("%d%d",&in1,&in2);
				ar[in1][in2] = 'O';
				count= count+1;
				for (int i =0;i<3;i++) // shows the current state 
				{
					for (int j = 0;j<3;j++)
					{
						printf("%c ",ar[i][j]);

					}
					printf("\n");
				}
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	showfinal(ar);	
}

// printing matrix function
void showfinal(char ar[3][3])
{
	for (int i =0;i<3;i++)
	{	
		for (int j = 0;j<3;j++)
		{
			printf("%c ",ar[i][j]);
		}
		printf("\n");
	}
}	
void check(char ar[3][3])
{
	if (ar[0][0] == ar[0][1] && ar[0][0] == ar[0][2]) // 
	{
		if (ar[0][0] == 'X')
		{
			printf("User 1 is the winner [X]\n");
		}
		else if (ar[0][0] == 'O')
		{
			printf("User 2 is the winner [O]\n");
		}
	}
	else if (ar[1][0] == ar[1][1] && ar[1][0] == ar[1][2]) // done
	{
		if (ar[1][0] == 'X')
		{
			printf("User 1 is the winner [X]\n");
		}
		else if (ar[1][0] == 'O')
		{
			printf("User 2 is the winner [O]");
		}
	}
	else if (ar[2][0] == ar[2][1] && ar[2][0] == ar[2][2]) // done
	{
		if (ar[2][0] == 'X')
		{
			printf("User 1 is the winner [X]\n");
		}
		else if (ar[2][0] == 'O')
		{
			printf("User 2 is the winner [O]\n");
		}
	}
	else if (ar[0][0] == ar[1][0] && ar[0][0] == ar[2][0]) // done
	{
		if (ar[0][0] == 'X')
		{
			printf("User 1 is the winner [X]\n");
		}
		else if (ar[0][0] == 'O')
		{
			printf("User 2 is the winner [O]\n");
		}
	}
	else if (ar[0][1] == ar[1][1] && ar[0][1] == ar[2][2])
	{
		if (ar[0][1] == 'X')
		{
			printf("User 1 is the winner [X]\n");
		}
		else if (ar[0][1] == 'O')
		{
			printf("User 2 is the winner [O]\n");
		}
	}
	else if (ar[0][2] == ar[1][2] && ar[0][2]  == ar[2][2])
	{
		if (ar[0][2] == 'X')
		{
			printf("User 1 is the winner [X]\n");
		}
		else if (ar[0][2] == 'O')
		{
			printf("User 2 is the winner [O]\n");
		}
	}
	else if (ar[0][0] == ar[1][1] && ar[0][0] == ar[2][2])
	{
		if (ar[0][0] == 'X')
		{
			printf("User 1 is the winner [X]\n");
		}
		else if (ar[0][0] == 'O')
		{
			printf("User 2 is the winner [O]\n");
		}
	}
	else if (ar[0][2] == ar[1][1] && ar[0][2] == ar[2][0])
	{
		if (ar[0][2] == 'X')
		{
			printf("User 1 is the winner [X]\n");
		}
		else if (ar[0][2] == 'O')
		{
			printf("User 2 is the winner [O]\n");
		}
	}
	else 
	{

	}
}

