#include <stdio.h>
#include <stdlib.h>
//5)Ler nome, endereço, telefone e imprimir
int main(){
    char nome[20], endereco[30], telefone[10];
    printf("Informe seu nome: ");
    gets(nome);
    fflush(stdin);
    printf("Endereco: ");
    gets(endereco);
    fflush(stdin);
    printf("Telefone: ");
    scanf("%10s", telefone);
    system("cls");
    sleep(2);
    printf("Nome: %s\n", nome);
    printf("Endereco: %s\n", endereco);
    printf("Telefone: %s\n", telefone);

    return 0;
}
