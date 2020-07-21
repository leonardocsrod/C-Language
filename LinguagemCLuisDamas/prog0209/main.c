#include<stdio.h>
#include<stdlib.h>
#include<locale.H>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("%cello Wo%cld!!!%c", 'H', 'r', '\n');
    printf("\n");
    system("pause");
    return 0;
}
