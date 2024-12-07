#include <stdio.h>
int main(){
    char letter;
    printf("Enter a letter: ");
    letter = fgetc(stdin);
    printf("The digited letter was %c.", letter);
    return 0;
}
