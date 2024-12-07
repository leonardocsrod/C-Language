#include <stdio.h>
#include <stdlib.h>
/*
*Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. Imprimir o nome da pessoa
*e a palavra ACEITA. Caso contrario imprimir NAO ACEITA.
*/
int main(){
    char nome[20];
    char genero;
    int idade;
    printf("Informe seu nome: ");
    gets(nome);
    fflush(stdin);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);
    printf("Informe o genero[h/m]: ");
    scanf("%c", &genero);
    system("cls");
    sleep(1);
    if (genero =='m' || genero == 'M' && idade < 25)
        printf("\n%s = ACEITA\n", nome);
    else
    printf("\n%s = NAO ACEITA\n", nome);

    return 0;
}
