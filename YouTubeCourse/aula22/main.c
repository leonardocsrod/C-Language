#include <stdio.h>
#include <stdlib.h>
int main(){
    float x = 3.1415;
    double y = 3.141514151514;
    long double z = 3.14151415141515;
    printf("Value of x: %.10f\n", x);
    printf("Value of y: %.15lf\n", y);
    printf("Value of z: %.20lf\n", z);
    __mingw_printf("Value of z: %.20Lf\n", z);//Lf
    return 0;
}
