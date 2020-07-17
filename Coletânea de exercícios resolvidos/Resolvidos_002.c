#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Solicitar e receber um nome e imprimir as letras na posição impar*/
main(){
setlocale(LC_ALL, "Portuguese");
int tam;
int x;
int pp;
char apelido[30];
printf("Escreva seu nome abaixo: \n");
gets(apelido);
tam = strlen(apelido);
printf("\nO nome digitado foi: ");
printf("\nAs letras na posição impar são: \n");
while(pp <= tam - 1){
    printf(" %c", apelido[pp]);
    pp += 2;
    }
printf("\n");
system("pause");
return 0;
}
