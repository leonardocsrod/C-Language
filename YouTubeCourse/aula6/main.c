#include <stdio.h>
int main(){
    char gender = 's';
    printf("\nThe gender is %c.\n", gender);
    printf("\nInform the gender: \n");
    scanf("%c", &gender);
    printf("The digited gender was %c.", gender);
    return 0;
}
