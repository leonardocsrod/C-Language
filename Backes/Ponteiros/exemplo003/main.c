#include <stdio.h>
#include <stdlib.h>
int main(){
    int count = 10;
    int *p;
    p = &count;
    printf("Conteudo apontado para p: %d\n", *p);
    printf("Valor da variavel count: %d\n", count);
    *p = 12;
    printf("Conteudo apontado para p: %d\n", *p);
    printf("Valor da variavel count: %d\n", count);

    return 0;
}
