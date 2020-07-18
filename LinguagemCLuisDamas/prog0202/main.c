#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese" );
    int num;
    printf("Digite um número: \n");
    scanf("%d", &num);
    printf("O número introduzido foi: %d\n", num);
    printf("\n");
    system("pause");
    return 0;
}
