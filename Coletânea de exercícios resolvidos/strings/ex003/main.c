#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//3)Receber um nome e imprimir as letras na posição par

int main(){
    char name[30];
    gets(name);
    int tam = strlen(name);
    int i;
    for(i = 0; i <= tam; i++){
        printf("%c", name[i]);
        i++;
    }
    printf("\n");
    system("pause");
    return 0;
}
