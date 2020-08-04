#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Este programa cria sequencia de números *
 * de 1 a 10, em pirâmide.                */
 int main()
 {
     setlocale(LC_ALL, "Portuguese");
     int n, i;
     for(i = 0; i <= 10; i++)
     {
         for(n = 0; n <= i; n++)
         {
              printf("%d", n);
         }
         printf("\n");
     }

     printf("\n\n");
     system("pause");
     return 0;
 }
