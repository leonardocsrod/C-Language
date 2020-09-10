#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const int num = 10;

void inic(int s[])
{
    int i;
    for(i = 0; i < num; i++)
    {
        s[i] = 0;
    }
}

int main()
{
    int i;
    int v[num];
    for(i = 0; i < num; i++)
    {
        v[i] = i;
    }

    for(i = num - 1; i >= 0; i--)
    {
        printf("%d\n", v[i]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}
