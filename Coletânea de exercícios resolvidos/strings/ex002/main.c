#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//2)Receber um nome e imprimir as letras na posição impar

int main(){
    char name[30];
    printf("Enter a name: ");
    gets(name);
    int tam;
    tam = strlen(name);
    int b;
    for(b = 1; b <= tam; b++){
        printf("%c", name[b]);
        b++;
    }
    printf("\n");
    printf("\n\n");
    system("pause");
    return 0;
}
