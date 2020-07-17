#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
char nome[20];
int idade;
char sexo;
setlocale(LC_ALL, "Portuguese");
printf("Informe seu nome: ");
gets(nome);
printf("Informe o seu sexo[F,f,M,m]: ");
scanf("%c", &sexo);
printf("Informe sua idade: ");
scanf("%d", &idade);

if((sexo == 'f' || sexo == 'F') && idade < 25)
    printf("\n%s ACEITA\n\n", nome);
else
    printf("%s NÃO ACEITA\n\n", nome);
printf("\n");
system("pause");
return 0;

}
