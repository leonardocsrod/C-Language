#include <stdio.h>
/*
** Receber um nome do teclado e imprimí-lo de trás pra frente.
*/
int main(){
    char name[30];
    int i, tam;
    printf("Enter a name: ");
    gets(name);
    tam = strlen(name);
    for(i = tam - 1; i >= 0; i--){
        printf("%c", name[i]);
    }
    return 0;
}
