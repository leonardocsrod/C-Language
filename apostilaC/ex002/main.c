/*
Elabore um programa em linguagem C para receber três números pelo teclado e exibir a média
aritmética dos mesmos.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, num1, num2, num3, media;
    printf("Digite o valor 1: \n");
    scanf("%d", &num1);
    printf("Digite o valor 2: \n");
    scanf("%d", &num2);
    printf("Digite o valor 3: \n");
    scanf("%d", &num3);
    media = (num1 + num2 + num3) / 3;
    printf("A média entre os valores %d, %d, e %d sera %d.\n\n", num1, num2, num3, media);
    return 0;
}
