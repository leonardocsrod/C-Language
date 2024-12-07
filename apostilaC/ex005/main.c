#include <stdio.h>
#include <stdlib.h>
/*
Elabore um programa em linguagem C para receber as seguintes informações:
Nome : Alfanumérico de 15 caracteres;
Dia do nascimento: Numérico inteiro;
Mês do nascimento: Numérico inteiro;
Ano do nascimento: Numérico inteiro;
Valor da mesada: Numérico real de 7 dígitos.
Após o recebimento destas informações, o programa deverá apagar a tela e escrevê-las no
vídeo.
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
