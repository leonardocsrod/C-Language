#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    short int idade;
    int montante;
    long int conta;
    printf("Informe sua idade: ");
    scanf("%hd", &idade);
    printf("Informe o montante: ");
    scanf("%d", &montante);
    printf("Informe a conta: ");
    scanf("%ld", &conta);
    printf("Uma pessoa de %hd anos, depositou %d, na conta %ld!!!\n", idade, montante, conta);
    system("pause");
    return 0;


}
