#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
/*O programa escreve a tabuada escolhida.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number, count;
    printf("Escolha a tabuada: ");
    scanf("%d", &number);
    while(count <=10)
    {
        printf("%2d * %2d = %3d\n", number, count, number * count);
        count++;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
