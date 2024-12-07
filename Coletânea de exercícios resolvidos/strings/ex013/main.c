#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
/*
**Receber do teclado a sigla do estado de uma pessoa e imprimir
**uma das seguintes mensagens:
** Carioca
** Paulista
** Mineiro
** Outros estados
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(CP_UTF8);
    char state[3];
    printf("Enter a sign: ");
    gets(state);
    printf("State = %s\n", state);
    if(!strcmp(state, "rj") || !strcmp(state, "RJ")){
        printf("Carioca!");
    }else
        if(!strcmp(state, "sp") || !strcmp(state, "SP")){
            printf("Paulista!");
        }else
            if(!strcmp(state, "mg") || !strcmp(state, "MG")){
                printf("Mineiro!");
            }else
                printf("Another states!");

    return 0;
}
