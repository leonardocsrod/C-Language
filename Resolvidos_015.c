#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");
char name[30];
printf("Informe o seu nome: ");
scanf("%s", name);
if(name[0] == 'a' || name[0] == 'A')
    puts(name);
else
    puts("Nome não começa com a!");

printf("\n\n");
system("pause");
return 0;


}
