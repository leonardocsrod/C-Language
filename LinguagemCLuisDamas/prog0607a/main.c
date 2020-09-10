#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define DIM 3

int main()
{
    char Velha [DIM] [DIM] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int i, j;

    Velha[0][0] = 'X';
    Velha[0][2] = '0';
    Velha[1][1] = 'X';
    Velha[2][2] = '0';

    for(i = 0; i < DIM; i++)
    {
        for(j = 0; j < DIM; j++)
        {
            printf("%c %c", Velha[i][j], j == DIM - 1 ? ' ' : '|');
        }
        if(i != DIM - 1)
        {
            printf("\n-----\n");
        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
