#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    linha(int num)
    {
        int i;
        for(i = 1; i <= num; i++)
        {
            putchar('*');
        }
        putchar('\n');
    }

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    linha(3);
    linha(5);
    linha(7);
    linha(5);
    linha(3);
    printf("\n\n");
    system("pause");
    return 0;
}
