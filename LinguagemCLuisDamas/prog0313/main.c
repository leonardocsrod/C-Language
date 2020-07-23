#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Indicates the marital state. *
 *Not married = n/N            *
 *Married = m/M                *
 *Divorced = d/D               *
 *Widower = w/W                */
 int main()
 {
     setlocale(LC_ALL, "Portuguese");
     char mar_state;
     printf("Enter your marital state[N/M/D/W]: ");
     mar_state = getchar();
     switch(mar_state)
     {
        case 'n':
        case 'N': printf("You are single!!!");
                  break;
        case 'm':
        case 'M': printf("You are married!!!");
                  break;
        case 'd':
        case 'D': printf("You are divorced!!!");
                  break;
        case 'w':
        case 'W': printf("You are widower!!!");
                  break;
        default : printf("Marital state incorrect!!!");
     }
     printf("\n\n");
     system("pause");
     return 0;
 }
