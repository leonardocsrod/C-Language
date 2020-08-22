#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float pot(float x, int n)
{
    float res;
    int i;
    for(i = 1, res = 1.0; i <= n; i++)
        res *= x;
    return res;
}

int main()
{
    printf("%.2f %.2f %.2f", pot(2.0, 4), pot(1.234, 3), pot(3.0, 0));
    printf("\n\n");
    system("pause");
    return 0;
}
