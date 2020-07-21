#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char ch1, ch2;
    printf("Introduza um caractere: ");
    scanf("%c", &ch1);
    fflush(stdin);
    printf("Introduza outro caractere: ");
    scanf("%c", &ch2);
    printf("\n");
    system("pause");
    return 0;
}
