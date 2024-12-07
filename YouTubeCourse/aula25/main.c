#include <stdio.h>
#include <stdlib.h>
int main(){
    int a = 10;
    int b = 15;
    int sum = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    float division = (float)a / b;
    printf("sum: %d + %d = %d\n", a, b, sum);
    printf("subtraction: %d + %d = %d\n", a, b, subtraction);
    printf("multiplication: %d * %d = %d\n", a, b, multiplication);
    printf("division: %f / %f = %f\n", a, b, division);
    return 0;

}
