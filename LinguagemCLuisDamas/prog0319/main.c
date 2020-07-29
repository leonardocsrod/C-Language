#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Programa determina quantos minutos, segundos *
 *e décimos de segundos tem em determinado nú- *
 *mero de horas.*/
 int main()
 {
     setlocale(LC_ALL, "Portuguese");
     int res, hora;
     char tipo;
     printf("Número de horas: ");
     scanf("%d", &hora);
     fflush(stdin);
     printf("Mostrar[M/S/D]: ");
     scanf("%c", &tipo);
     switch(tipo)
     {
         case 'm':
         case 'M': res = hora * 60;
                   break;
         case 's':
         case 'S': res = hora * 3600;
                   break;
         case 'd':
         case 'D': res = hora * 36000;
                   break;
     }
     printf("%dh --> %d%c", hora, res, tipo);
     printf("\n\n");
     system("pause");
     return 0;
 }
