#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Cálculo da área e do perímetro da circunferência.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float raio, perimetro;
    double pi, area;
    pi = 3.1415927;
    printf("Informe o raio da circunferência: ");
    scanf("%f", &raio);
    area = pi * raio * raio;
    perimetro = 2 * pi * raio;
    printf("O perímetro da circunferência é: %f\n", perimetro);
    printf("A área da circunferência é: %f\n", area);
    system("pause");
    return 0;
}
