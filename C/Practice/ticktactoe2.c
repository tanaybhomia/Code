#include <stdio.h>
#include <stdbool.h>

void showBoard(char ar[3][3]);
bool checkWin(char ar[3][3], char player);
bool isDraw(char ar[3][3]);

int main()
{
    printf("User 1 enters Position for 'X'\n");
    printf("User 2 enters Position for 'O'\n");

    char ar[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
    int in1, in2;
    int count = 0;

    while (count < 9)
    {
        // User 1's turn
        printf("Positions for X U1: ");
        scanf("%d %d", &in1, &in2);
        if (in1 < 0 || in1 > 2 || in2 < 0 || in2 > 2 || ar[in1][in2] != '-')
        {
            printf("Invalid input or position already taken. Try again.\n");
            continue;
        }
        ar[in1][in2] = 'X';
        count++;
        showBoard(ar);
        if (checkWin(ar, 'X'))
        {
            printf("User 1 is the winner [X]\n");
            break;
        }
        if (isDraw(ar))
        {
            printf("This was a Draw\n");
            break;
        }

        // User 2's turn
        printf("Positions for O U2: ");
        scanf("%d %d", &in1, &in2);
        if (in1 < 0 || in1 > 2 || in2 < 0 || in2 > 2 || ar[in1][in2] != '-')
        {
            printf("Invalid input or position already taken. Try again.\n");
            continue;
        }
        ar[in1][in2] = 'O';
        count++;
        showBoard(ar);
        if (checkWin(ar, 'O'))
        {
            printf("User 2 is the winner [O]\n");
            break;
        }
    }

    if (count == 9 && !checkWin(ar, 'X') && !checkWin(ar, 'O'))
    {
        printf("This was a Draw\n");
    }

    return 0;
}

void showBoard(char ar[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", ar[i][j]);
        }
        printf("\n");
    }
}

bool checkWin(char ar[3][3], char player)
{
    for (int i = 0; i < 3; i++)
    {
        if (ar[i][0] == player && ar[i][1] == player && ar[i][2] == player)
            return true;
        if (ar[0][i] == player && ar[1][i] == player && ar[2][i] == player)
            return true;
    }
    if (ar[0][0] == player && ar[1][1] == player && ar[2][2] == player)
        return true;
    if (ar[0][2] == player && ar[1][1] == player && ar[2][0] == player)
        return true;
    return false;
}

bool isDraw(char ar[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (ar[i][j] == '-')
                return false;
        }
    }
    return true;
}
