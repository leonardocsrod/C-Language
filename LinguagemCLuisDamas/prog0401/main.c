#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
/*O programa escreve números de 01 a 10, *
 * um embaixo do outro.                  */
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number;
    number = 1;
    while(number <= 10)
    {
        printf("%d\n", number);
        number++;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
