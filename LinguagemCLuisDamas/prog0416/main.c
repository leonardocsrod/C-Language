#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, num, dec;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(num = 1, dec = i; num <= i; num++, dec--)
    {
        printf("%d --- %d\n", num, dec);
    }

    printf("\n\n");
    system("pause");
    return 0;
}
