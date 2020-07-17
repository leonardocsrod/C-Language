#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Solcitar um nome, imprimir o nome e as letras na posição par.*/
main(){
setlocale(LC_ALL, "Portuguese");
int tam;
int pp;
char apelido[30];
printf("Digite seu nome abaixo: \n");
gets(apelido);
tam = strlen(apelido);
printf("O nome digitado foi: %s\n", apelido);
printf("As letras do nome na posição par são: \n");
for(pp = 1; pp <= tam; pp += 2)
    printf(" %c", apelido[pp]);
printf("\n");
system("pause");
}
