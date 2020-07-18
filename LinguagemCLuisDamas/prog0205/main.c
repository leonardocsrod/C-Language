#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("O tamanho, em bytes, de um char é: %d\n", sizeof(char));
    printf("O tamanho, em bytes, de um inteiro é: %d\n", sizeof(int));
    printf("O tamanho, em bytes, de um float é: %d\n", sizeof(float));
    printf("O tamanho, em bytes, de um double é: %d\n", sizeof(double));
    system("pause");
    return 0;

}
