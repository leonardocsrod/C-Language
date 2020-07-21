#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    printf("Introduza o primeiro número: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Introduza o segundo número: ");
    scanf("%d", &num2);
    printf("\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    printf("\n\n");
    system("pause");
    return 0;
}
