#include <stdio.h>
/*
*Receber um nome no teclado e imprimir quantas letras "A" tem o nome.
*/
int main(){
    char phrase [50];
    int tam, i;
    int counta = 0;
    printf("Enter a phrase: ");
    gets(phrase);
    tam = strlen(phrase);
    for(int i = 0; i <= tam; i++){
        if(phrase[i] == 'a' || phrase[i] == 'A'){
            counta++;
        }
    }
    printf("The phrase has: \n");
    printf("%d letters a!", counta);
    return 0;
}
