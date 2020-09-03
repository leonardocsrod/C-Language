#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float sal[12];
    float total;
    int i;

    for(i = 0; i < 12; i++)
    {
        printf("Introduza o salário do mês %d: ", i+1);
        scanf("%f", &sal[i]);
    }

    puts("Mês    Valor");
    for(i = 0, total = 0.0; i < 12; i++)
    {
        printf("%3d %9.2f\n", i, sal[i]);
        total += sal[i];
    }

    printf("Total anual: %9.2f\n", total);

    printf("\n\n");
    system("pause");
    return 0;
}
