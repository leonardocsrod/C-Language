#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{

    setlocale(LC_ALL, "Portuguese");
    int second, minute, hour, second2;

    printf("Informe a quantidade de segundos: ");
    scanf("%d", &second);
    hour = second / 3600;
    minute = (second % 3600) / 60;
    second2 = minute % 60;
    printf("A quantidade de '%d' segundos corresponde a: \n", second);

    printf("%d horas, %d minutos, %d segundos!!!\n", hour, minute, second2);
    printf("\n\n");
    system("pause");
    return 0;
}
