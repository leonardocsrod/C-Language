#include <stdio.h>
int main(){
    char letterA, letterB;
    printf("Enter the letter A: ");
    scanf("%c", &letterA);
     printf("Enter the letter B: ");
    scanf(" %c", &letterB);
    printf("You digited:\nLetter A: %c\nLetter B: %c", letterA, letterB);
    return 0;
}

