#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Recebe dois números e coloca na ordem crescente.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number1, number2, aux;
    printf("Digite dois números: ");
    scanf("%d%d", &number1, &number2);
    if(number1 > number2)
    {
        aux = number1;
        number1 = number2;
        number2 = aux;
    }

    printf("Os números digitados, em ordem crescente foram: %d e %d", number1, number2);


    printf("\n\n");
    system("pause");
    return 0;
}
