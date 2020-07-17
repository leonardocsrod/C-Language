#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");
char name[20];
int cont, length;

printf("Informe seu nome: ");
fflush(stdin);
scanf("%s", &name);
length = strlen(name);
for(cont = length; cont >= 0; cont--)
    printf("%c", name[cont]);
printf("\n\n");
system("pause");
return 0;
}
