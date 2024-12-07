/*
Elabore um programa para exibir o quadrado de um número digitado.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, square;
    printf("Digite um numero: ");
    scanf("%d", &n);
    square = n * n;
    printf("O quadrado do numero %d e %d.\n\n", n, square);
    return 0;
}
