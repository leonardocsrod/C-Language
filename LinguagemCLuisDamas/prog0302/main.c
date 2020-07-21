#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if(num >= 0)
        printf("O número '%d' é positivo!!!\n", num);
    else
        printf("O número '%d' é negativo!!!\n", num);
    printf("\n");
    system("pause");
    return 0;
}
