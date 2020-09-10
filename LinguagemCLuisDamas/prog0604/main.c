#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void inic(int s[])
{
    int i;
    for(i = 0; i < 10; i++)
    {
        s[i] = 0;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v[10];
    int i;

    inic(v);
    for(i = 0; i < 10; i++)
    {
        v[i] = i;
    }

    for(i = 0; i < 10; i++)
    {
            printf("%d\n", v[i]);

    }

    printf("\n\n");
    system("pause");
    return 0;
}
