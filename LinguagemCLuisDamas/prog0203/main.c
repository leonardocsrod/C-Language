#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, sum;
    printf("Introduza dois números: ");
    scanf("%d%d",&n1, &n2);
    sum = n1 + n2;
    printf("Os números introduzidos foram: %d e %d\n", n1, n2);
    printf("a soma dos dois números digitados foi: %d\n", sum);
    system("pause");
    return 0;
}
