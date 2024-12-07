#include <stdio.h>
#include <stdlib.h>
int main(){
    float x = 3.1415;
    double y = 3.1415;
    printf("Size of float in memory bytes: %d\n", sizeof x);
    printf("Size of float in memory bytes: %d\n", sizeof y);
    return 0;
}
