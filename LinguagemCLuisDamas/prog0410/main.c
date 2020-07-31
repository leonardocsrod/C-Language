#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Programa que mostra os 10 primeiros números pares.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, count;
    printf("Contagem com FOR!!!\n");
    for(count = 1; count <= 10; count++)
    {
        printf("%d\n", count * 2);
    }
    printf("Contagem com WHILE!!!\n");
    count = 1;
    while(count <= 10)
    {
        printf("%d\n", count * 2);
        count++;
    }
    printf("Contagem com DO...WHILE!!!\n");
    count = 1;
    do
    {
        printf("%d\n", count * 2);
        count++;
    }
    while(count <= 10);

    printf("\n\n");
    system("pause");
    return 0;
}
