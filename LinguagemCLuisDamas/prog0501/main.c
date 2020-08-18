#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    char c;
    for(i = 0; i < 20; i++)
    {
        putchar('*');
    }
    printf("\n");
    printf("Nùmeros entre 1 a 5");
    printf("\n");
    for(i = 0; i < 20; i++)
    {
        putchar('*');
    }
    printf("\n");
    for(i = 0; i <= 5; i++ )
    {
        printf("%d\n", i);
    }
    for(i = 0; i < 20; i++)
    {
        putchar('*');
    }
    printf("\n\n");
    system("pause");
    return 0;
}
