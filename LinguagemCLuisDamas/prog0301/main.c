#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
    printf("\nO resultado de %d == %d : %d", num1, num2, num1 == num2);
    printf("\nO resultado de %d != %d : %d", num1, num2, num1 != num2);
    printf("\nO resultado de %d < %d : %d", num1, num2, num1 < num2);
    printf("\nO resultado de %d > %d : %d", num1, num2, num1 > num2);
    printf("\nO resultado de %d >= %d : %d", num1, num2, num1 >= num2);
    printf("\nO resultado de %d < %d : %d", num1, num2, num1 < num2);
    printf("\nO resultado de %d <= %d : %d", num1, num2, num1 <= num2);


    printf("\n\n");
    system("pause");
    return 0;
}
