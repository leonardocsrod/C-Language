#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres*/
main(){
setlocale(LC_ALL, "Portuguese");
char name[10];
int length;
int n;
printf("Informe o seu nome: ");
gets(name);
length = strlen(name);
for(n = 0; n <= length - 1; n++)
    printf("%d - %s\n", n +1, name);
printf("\n\n");
system("pause");
return 0;
}
