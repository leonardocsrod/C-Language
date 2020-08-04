#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num%10 != 0)
    {
        if(num%3 != 0)
            printf("%d ", num);
            num++;

    }

    printf("\n\n");
    system("pause");
    return 0;
}
