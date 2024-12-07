#include <stdio.h>
int main(){
    int age;
    char gender;
    float weight, height;
    printf("Enter the age, weight, height and gender : ");
    scanf("%d%f%f %c", &age, &weight, &height, &gender);
    printf("You digited:\nAge: %d\nWeight: %f\nHeight: %f\nGender: %c", age, weight, height, gender);
    return 0;
}
