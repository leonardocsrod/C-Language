#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Escrever seu nome na tela, 10 vezes, um nome por linha*/
main(){
setlocale(LC_ALL, "Portuguese");
char nome[30];
int n;
printf("Digite seu nome abaixo: \n");
gets(nome);
printf("\nSeu nome escrito 10 vez abaixo: \n");
for(n = 0; n <= 9; n++)
    printf("%d - %s\n",n + 1 ,  nome);
printf("\n");
system("pause");

}
