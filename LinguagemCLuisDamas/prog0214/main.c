#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Introduza um número [0 a 255]: ");
    scanf("%d", &num);
    printf("Foi introduzido o número '%d' que corresponde ao caractere '%c'!!!\n", num , (char) num);
    printf("O caractere seguinte '%c' tem o ASCII nº '%d'!!!", (char) (num + 1), num + 1);
    printf("\n");
    system("pause");
    return 0;
}
