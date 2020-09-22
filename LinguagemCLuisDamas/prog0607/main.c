#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM])
{
    int i, j;
    for(i = 0; i < DIM; i++)
    {
        for(j = 0; j < DIM; j++)
        {
            s[i][j] = ESPACO;
        }
    }
}
void mostra(char s[DIM][DIM])
{
    int i, j;
    for(i = 0; i < DIM; i++)
    {
        for(j = 0; j < DIM; j++)
        {
            printf("%c %c", s[i][j], j == DIM-1?' ':'|');
        }
        if(i!=DIM-1)
            printf("\n--------");
        putchar('\n');
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char Velha[DIM][DIM];
    int posx, posy;
    int n_jogadas = 0;
    char ch = '0';

    inic(Velha);
    while (1)
    {
        mostra(Velha);
        printf("\nIntroduza a posição de linha Coluna: ");
        scanf("%d %d", &posx, &posy);
        /*posx-;
        posy-;*/
        if(Velha[posx][posy] == ESPACO)
        {
            Velha[posx][posy] = ch = (ch =='0'?'X':'0');
            n_jogadas++;
        }
        else
            printf("Posição já ocupada\nJOgue novamente!!!\n");
        if(n_jogadas == DIM * DIM)
            break;
    }
    mostra(Velha);
}
