#include <stdio.h>
#include <string.h>
/*
** Informe dois nomes, imprimir o tamanho de cada um e mostrá-los.
*/
int main(){
    char str1[20], str2[20], str3[40];
    int tam1, tam2;
    printf("Enter the first name: ");
    gets(str1);
    tam1 = strlen(str1);
    printf("Enter the second name: ");
    gets(str2);
    tam2 = strlen(str2);
    printf("The lenth of the first name is: %d.\n", tam1);
    printf("The lenth of the second name is: %d.\n" , tam2);
    //str3 = strcpy(str1, str2);
    //printf("str3 = ", str3);


    return 0;
}
