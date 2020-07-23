#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Aplique um taxa de imposto de *
 *10% para solteiros e de 9% aos*
 * casados!!!*/
 int main()
 {
     setlocale(LC_ALL, "Portuguese");
     float salary;
     char mar_status;

     printf("Enter your salary: ");
     scanf("%f", &salary);
     fflush(stdin);
     printf("\nEnter your marital state[m/n]: ");
     scanf("%c", &mar_status);
     if(mar_status == 'm' || mar_status == 'M')
        salary *= 0.91;
     else
        if(mar_status == 'n' || mar_status == 'N')
            salary *= 0.9;
        else{
            printf("Esta opção não é válida.\n");
        }

    printf("O salário final é: %.2f", salary);
    printf("\n\n");
    system("pause");
    return 0;
 }
