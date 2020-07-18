#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("O tamanho, em bytes, de um inteiro é: %d\n", sizeof(int));
    system("pause");
    return 0;

}
