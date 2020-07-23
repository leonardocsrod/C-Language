#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Uso do operador condicional.*
 *Salario > 1000 + 5%         *
 *Salário < 1000 + 7%         */
 int main()
 {
     setlocale(LC_ALL, "Potuguese");
     float salary;
     printf("Enter your salary: ");
     scanf("%f", &salary);
     salary = (salary > 1000) ? (salary *= 1.05) : (salary *= 1.07);
     printf("The end salary is: %.2f", salary);
     printf("\n\n");
     system("pause");
     return 0;

 }
