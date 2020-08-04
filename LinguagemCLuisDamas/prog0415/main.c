#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    for(i = 0; i <= 255; i++)
    {
        printf("%3d --> %c\n", i, (char)i);
    }
    printf("\n\n");
    return 0;
}
