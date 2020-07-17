#include<stdio.h>
/*Solicitar um nome exibir as quatro primeiras letras desse nome*/
main(){
char nome[30];
int b;
printf("Informe um nome: \n");
gets(nome);
for(b = 0; b <= 3; b++)
    printf("%c", nome[b]);
printf("\n\n");
system("PAUSE");
return 0;
}

