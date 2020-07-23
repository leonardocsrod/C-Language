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
     puts("Indicates your marital state[N/M/D/W]: ");
     mar_state = getchar();
     if(mar_state == 'n' || mar_state == 'N')
        printf("You are not married!!!");
     else
        if(mar_state == 'm' || mar_state == 'M')
            printf("You are married!!!");
        else
            if(mar_state == 'd' || mar_state == 'D')
                printf("You are divorced!!!");
            else
                if(mar_state == 'w' || mar_state == 'W')
                    printf("Você é solteiro!!!");
                else
                    printf("Opção não é valida!!!");
 }
