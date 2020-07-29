#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
/*O programa escreve números de 10 a 1, *
 *na ordem decrescente.                 */
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number;
    number = 10;
    while(number)
    {
        printf("%d\n", number);
        number--;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
