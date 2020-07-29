#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Indica quantos segundos tem em determinado número de horas.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int hours;
    int seconds;
    printf("Enter the hours: ");
    scanf("%d", &hours);
    seconds = hours < 0 ? 0 : (hours * 3600);
    printf("O número de %d horas tem %d segundos.", hours, seconds);
    printf("\n\n");
    system("pause");
    return 0;
}
