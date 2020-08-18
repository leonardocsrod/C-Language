#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

linha()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    for(i = 1; i <= 20; i++)
    {
        putchar('*');
    }
    putchar('\n');
}
