#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
/*O programa escreve a tabuada do 5.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int count;
    count = 1;
    while(count <= 10)
    {
        printf("5 * %2d = %2d\n", count, 5 * count);
        count++;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
