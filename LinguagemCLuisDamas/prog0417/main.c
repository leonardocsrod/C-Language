#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, i, j;
    char tipo;
    printf("Enter a number of lines: ");
    scanf("%d", &num);
    fflush(stdin);
    printf("Enter a type of charactere: ");
    scanf("%c", &tipo);
    for(i = 1; i <= num; i++)
    {
        for(j = 1; j <= num; j++)
        {
            printf("%c", tipo);
        }
        putchar('\n');
    }
    printf("\n\n");
    system("pause");
    return 0;
}
