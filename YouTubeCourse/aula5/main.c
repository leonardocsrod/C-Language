#include <stdio.h>
int main(){
    float pi = 3.1415;
    float number;
    printf("Float pi = %.3f\n", pi);
    printf("Enter a real number: ");
    scanf("%f", &number);
    printf("\nThe digited number was %.2f.\n", number);
    return 0;
}
