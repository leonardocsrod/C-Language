#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, *p1, x = 10;
    float y = 20.0;
    p = &x;
    printf("Conteudo da variavel x: %d\n", x);
    printf("Conteudo do ponteiro p: %d\n", *p);
    p1 = p;
    printf("Conteudo do ponteiro p1: %d\n", *p1);
    p = &y;
    printf("Conteudo do ponteiro p: %d\n", *p);
    printf("Conteudo do ponteiro p: %f\n", *p);
    printf("Conteudo do ponteiro p: %f\n", *((float*)p));
    return 0;
}
