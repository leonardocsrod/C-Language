#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p = 0x3F8;
    int *p1 = 1500;
    printf("Endere�o em p: %p\n", p);
    printf("Endere�o em p1: %p\n", p1);
    //printf("Endere�o em *p: %d\n", *p);
    //printf("Endere�o em *p1: %d\n", *p1);
    return 0;
}
