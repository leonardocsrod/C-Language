#include <stdio.h>
#include <stdlib.h>
/*
**Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.
*/
int main(){
    char nome[20];
    int tam;
    printf("Digite seu nome: ");
    gets(nome);
    fflush(stdin);
    tam = strlen(nome);
    system("cls");
    sleep(1);
    int i;
    for(i =0; i <= tam - 1; i++)
        printf("%s\n", nome);
    return 0;
}
