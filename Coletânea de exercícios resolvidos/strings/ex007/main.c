#include <stdio.h>
#include <stdlib.h>
/*
** Digite um nome , calcule e mostre quantas letras tem.
*/
int main(){
    char nome[20];
    int tam;
    printf("Digite seu nome: ");
    gets(nome);
    tam = strlen(nome);
    printf("O nome %s tem %d letras.\n", nome, tam);

    return 0;
}
