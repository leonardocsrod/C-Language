#include <stdio.h>//diretivas de compila��o
#include <stdlib.h>
#include <conio.h>

//Objetivo: Criar um programa que leia 2 n�meros do teclado e mostre o resultado da soma dos mesmos.

int main(){
    int num1, num2, result;
    printf("Valor 1: ");
    scanf("%d", &num1);
    printf("Valor 2: ");
    scanf("%d", &num2);
    result = num1 + num2;
    printf("The resultado da soma entre %d e %d e %d.", num1, num2, result);
    printf("\n\n");
    system("pause");
    return 0;

}
