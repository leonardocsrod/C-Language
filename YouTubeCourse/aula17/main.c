#include <stdio.h>
int main(){
    printf("Size in memory type int: %d bytes\n", sizeof(int));
    printf("Size in memory type float: %d bytes - %f\n", sizeof(float), sizeof(float));
    printf("Size in memory type char: %d bytes - %c\n", sizeof(char), sizeof(char));
    //printf("Size in memory type boolean: %d bytes - %b\n", sizeof(boolean), sizeof(boolean));
    float x = 1.5;
    int y = 0;
    short int z = 32767;
    printf("Size in memory type float: variable x - %d bytes\n", sizeof(x));
    printf("Size in memory type int: variable y - %d bytes\n", sizeof(y));
    printf("Size in memory type int: variable shot z - %d bytes\n", sizeof(z));
    printf("Value of z: %hi\n", z);
    z += 1;
    printf("Value of z: %hi\n", z);
    return 0;
}
