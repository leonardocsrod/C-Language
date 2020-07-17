#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");
char name[20];
int tam;
printf("Informe seu nome: ");
gets(name);
tam = strlen(name);
printf("O nome %s tem %d letras!", name, tam);
printf("\n");
system("pause");
return 0;
}
