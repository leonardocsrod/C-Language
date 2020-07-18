#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Programa converte toneladas para quilos e gramas com notação científica.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float quilos = 1.0e3;
    double gramas = 1.0E6;
    float n_toneladas;
    printf("Informe a quantidade de toneladas: ");
    scanf("%f", &n_toneladas);
    printf("\nQuantidade de quilos em %f toneladas: %e", n_toneladas, n_toneladas * quilos);
    printf("\nQuantidade de gramas em %f toneladas: %E\n", n_toneladas, n_toneladas * gramas);
    printf("\n\n");
    system("pause");
    return 0;
}
