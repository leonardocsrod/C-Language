#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d --- %d\n", i, n-i+1);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
