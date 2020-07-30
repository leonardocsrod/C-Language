#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Calcula a soma e o produto *
 * dos n primeiros naturais. */
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int sum, product, num, count;
    printf("Infomorme o número de termos: ");
    scanf("%d", &num);
    for(count = 1, sum = 0, product = 1; count <= num; count++){
        sum += count;
        product *= count;
    }
    printf("O resultado é: \nSoma: %3d\nProduto: %3d", sum, product);
    printf("\n\n");
    system("pause");
    return 0;
}
