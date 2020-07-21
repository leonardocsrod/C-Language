#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float x;
    printf("Introduza um número: ");
    scanf("%f", &x);
    printf("A parte inteira do número '%.2f' é %d, e a parte fracionária é %.2f", x, (int)x, x - ((int)x));
    printf("\n\n");
    system("pause");
    return 0;
}
