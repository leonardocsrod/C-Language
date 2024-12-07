#include <stdio.h>
int main(){
    int age;
    char gender;
    float weight, height;
    printf("Enter the gender, age, weight and height: ");
    scanf("%c%d%f%f", &gender, &age, &weight, &height);
    printf("You digited:\nGender: %c\Age: %d\nWeight: %f\nHeight: %f", gender, age, weight, height);
    return 0;
}
