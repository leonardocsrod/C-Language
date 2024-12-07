#include <stdio.h>
int main(){
    printf("Size in memory type int: %d bytes\n", sizeof(int));
    printf("Size in memory type float: %d bytes - %f\n", sizeof(float), sizeof(float));
    printf("Size in memory type char: %d bytes - %c\n", sizeof(char), sizeof(char));
    //printf("Size in memory type boolean: %d bytes - %b\n", sizeof(boolean), sizeof(boolean));
    float x = 1.5;
    printf("Size in memory type float: variable x - %d bytes\n", sizeof(x));
    return 0;
}
