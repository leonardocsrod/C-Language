#include <stdio.h>
#include <stdlib.h>
/*
Elabore um programa em linguagem C para receber as seguintes informa��es:
Nome : Alfanum�rico de 15 caracteres;
Dia do nascimento: Num�rico inteiro;
M�s do nascimento: Num�rico inteiro;
Ano do nascimento: Num�rico inteiro;
Valor da mesada: Num�rico real de 7 d�gitos.
Ap�s o recebimento destas informa��es, o programa dever� apagar a tela e escrev�-las no
v�deo.
*/
int main(){
    char nome [30];
    int diaNascimento, mesNascimento, anoNascimento;
    float mesada;
    double rendaAnual;
    printf("Nome: ");
    scanf("%30s", nome);
    printf("Dia do nascimento: ");
    scanf("%d", &diaNascimento);
    printf("Mes do nascimento: ");
    scanf("%d", &mesNascimento);
    printf("Ano do nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Valor da mesada: ");
    scanf("%f", &mesada);
    rendaAnual = mesada * 12;
    system("cls");
    sleep(1);
    printf("Nome: ");
    printf(nome);
    printf("\n");
    printf("Data do nascimento: %d/%d/%d\n", diaNascimento, mesNascimento, anoNascimento);
    printf("Valor da mesada: %f\n", mesada);
    printf("Valor da renda anual: %f", rendaAnual);
    printf("\n");

    return 0;
}
