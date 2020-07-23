#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Calculates the tax. *
 *Women pay 10%       *
 *Man pay 15%          */
 int main()
 {
     setlocale(LC_ALL, "Portuguese");
     float salary, tax;
     char sex;
     printf("Enter your salary: ");
     scanf("%f", &salary);
     fflush(stdin);
     printf("Enter your sex[M/W]: ");
     sex = getchar();
     switch(sex)
     {
          case 'm':
          case 'M': tax = 0.15;
                    break;
          case 'w':
          case 'W': tax = 0.1;
                    break;
     }
     printf("The tax will be %.2f!!!", salary * tax);
     printf("\n\n");
     system("pause");
     return 0;
 }
