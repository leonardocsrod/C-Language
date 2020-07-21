#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Cálculo do contracheque            *
 *salário < 1000 = taxa 5%           *
 *salário >= 1000 e < 5000 = taxa 11%*
 *salário >= 5000 = taxa 35%         */
 int main()
 {
     setlocale(LC_ALL, "Portuguese");
     float salary, netSalary, tax;
     printf("Digite o salário do funcionário: ");
     scanf("%f", &salary);
     if(salary < 1000){
        tax = salary*0.05;
        netSalary = salary - tax;
     }
     else
        if(salary >= 1000 && salary < 5000){
            tax = salary*0.11;
            netSalary = salary - tax;
        }
        else
            {
            tax = salary*0.35;
            netSalary = salary - tax;
            }
     printf("Salary: %.2f\nTax: %.2f\nNet salary: %.2f", salary, tax, netSalary);
     printf("\n\n");
     system("pause");
     return 0;
 }
