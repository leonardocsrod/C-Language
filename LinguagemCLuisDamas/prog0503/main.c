#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

linha()
{

    int i;
    for(i = 1; i <= 20; i++)
    {
        putchar('*');
    }
    putchar('\n');
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    linha();
    printf("Nùmeros entre 1 e 5\n");
    linha();
    for(i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    linha();
    printf("\n\n");
    system("pause");
    return 0;
}
