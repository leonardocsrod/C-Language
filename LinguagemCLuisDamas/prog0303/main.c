#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Verifica se o número introduzido é zero.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if(num == 0)
        printf("O número é zero: \n");
    else
        printf("O número é diferente de zero!!!\n");
    printf("\n");
    system("pause");
    return 0;

}
