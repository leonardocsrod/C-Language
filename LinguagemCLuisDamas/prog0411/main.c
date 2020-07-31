#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Programa para o laço com break*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    for(num = 1; num <= 100; num++)
    {
        if (num == 30)
            break;
        else
            printf("%2d\n", 2 * num);
    }
    printf("FIM DO LAÇO!!!\n");
    printf("\n\n");
    return 0;
}
