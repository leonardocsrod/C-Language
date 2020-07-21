#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char ch;
    printf("Introduza um caractere: ");
    ch = getchar();
    printf("O caractere produzido foi: '%c'", ch);
    printf("\n");
    system("pause");
    return 0;
}
