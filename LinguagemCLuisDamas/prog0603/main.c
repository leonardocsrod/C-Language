#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void inic(int s[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        s[i] = 0;
    }
}

int main()
{
    int i;
    int v[10];
    int x[20];
    inic(v, 10);
    inic(x, 20);
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", v[i]);
    }
    printf("\n\n");
    for(i = 0; i < 20; i++)
    {
        printf("%d\n", x[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
