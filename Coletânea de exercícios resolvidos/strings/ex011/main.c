#include <stdio.h>
/*
**Criar um algoritmo que entre com uma palavra e imprima conforme exemplo a seguir:
**Exemplo: SONHO
** Como a palavra SONHO tem 5 letras a impressão ficaria assim:
** SONHO
** SONHO SONHO
** SONHO SONHO SONHO
** SONHO SONHO SONHO SONHO
** SONHO SONHO SONHO SONHO SONHO
*/
int main(){
    char word[20];
    int tam, i,j;
    printf("Enter a word: ");
    gets(word);
    tam = strlen(word);
    printf("Tam = %d\n", tam);
    for(int i = 0; i <= tam - 1; i++){
        for(int j = 0; j <= i; j++){
            printf("%s ", word);
        }
        printf("\n");
    }
    return 0;
}
