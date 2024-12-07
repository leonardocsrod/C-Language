#include <stdio.h>
#include <stdlib.h>
//4)Escrever seu nome na tela 10 vezes. Um nome por linha.
int main(){
    char nome[20];
    printf("Digite o seu nome: ");
    gets(nome);
    system("cls");
    sleep(1);
    int i;
    for(i = 0; i <= 9; i++){
        printf(nome);
        printf("\n");
    }
}
