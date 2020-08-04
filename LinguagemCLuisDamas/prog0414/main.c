#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, j;
    for(i = 1; i <= 10; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            printf("%d ", j);
            if(i == j)
                break;
        }
        putchar('\n');
    }

    printf("\n\n");
    system("pause");
    return 0;
}
