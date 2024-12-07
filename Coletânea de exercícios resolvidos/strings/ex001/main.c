#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1)Receber um nome e imprimir as 4 primeiras letras do nome.

int main(){
    char name[30];
    printf("Enter a name: ");
    gets(name);
    int b;
    for(b = 0; b <= 3; b++){
        printf("\%c", name[b]);
    }
    printf("\n\n");
    system("PAUSE");
    return 0;
}
