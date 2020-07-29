#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*O programa escreve a cinco*
 *primeiras tabuadas.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number, count;
    number = 1;
    while(number <= 5)
    {
        count= 1;
        while(count <= 10)
        {
            printf("%2d * %2d = %2d\n", number, count, number * count);
            count++;
        }
        printf("\n");
        number++;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
