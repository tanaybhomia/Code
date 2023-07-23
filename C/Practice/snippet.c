if (count>=5)
			{
				if (ar[0][0] == ar[0][1] == ar[0][2]) // ---
				{
					showfinal(ar);
					if (ar[0][0] == 'X')
					{
						printf("User 1 is the winner [X]");
					}
					else if (ar[0][0] == 'O')
					{
						printf("User 2 is the winner [O]");
					}
				}
				else if (ar[1][0] == ar[1][1] == ar[1][2]) // done
				{
					showfinal(ar);
					if (ar[0][0] == 'X')
					{
						printf("User 1 is the winner [X]");
					}
					else if (ar[0][0] == 'O')
					{
						printf("User 2 is the winner [O]");
					}
				}
				else if (ar[2][0] == ar[2][1] == ar[2][2]) // done
				{
					showfinal(ar);
					if (ar[0][0] == 'X')
					{
						printf("User 1 is the winner [X]");
					}
					else if (ar[0][0] == 'O')
					{
						printf("User 2 is the winner [O]");
					}
				}
				else if (ar[0][0] == ar[1][0] == ar[2][0]) // done
				{
					showfinal(ar);
					if (ar[0][0] == 'X')
					{
						printf("User 1 is the winner [X]");
					}
					else if (ar[0][0] == 'O')
					{
						printf("User 2 is the winner [O]");
					}
				}
				else if (ar[0][1] == ar[1][1] == ar[2][2])
				{
					showfinal(ar);
					if (ar[0][0] == 'X')
					{
						printf("User 1 is the winner [X]");
					}
					else if (ar[0][0] == 'O')
					{
						printf("User 2 is the winner [O]");
					}
				}
				else if (ar[0][2] == ar[1][2] == ar[2][2])
				{
					showfinal(ar);
					if (ar[0][0] == 'X')
					{
						printf("User 1 is the winner [X]");
					}
					else if (ar[0][0] == 'O')
					{
						printf("User 2 is the winner [O]");
					}
				}
				else if (ar[0][0] == ar[1][1] == ar[2][2])
				{
					showfinal(ar);
					if (ar[0][0] == 'X')
					{
						printf("User 1 is the winner [X]");
					}
					else if (ar[0][0] == 'O')
					{
						printf("User 2 is the winner [O]");
					}
				}
				else if (ar[0][2] == ar[1][2] == ar[2][0])
				{
					showfinal(ar);
					if (ar[0][0] == 'X')
					{
						printf("User 1 is the winner [X]");
					}
					else if (ar[0][0] == 'O')
					{
						printf("User 2 is the winner [O]");
					}
				}
				else 
				{
					printf("This was a Draw");
					showfinal(ar);
				}