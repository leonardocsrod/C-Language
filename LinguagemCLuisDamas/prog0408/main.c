#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*O programa escreve as cinco primeiras tabuadas, *
 * e para a tela após cada uma delas ser escrita. */
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, n, count;
    for(n = 1; n <= 5; n++){
        for(count = 1; count <= 10; count++){
            printf("%2d * %2d = %2d\n",n, count, n * count);
        }
        if(n != 5){
            printf("Pressione <ENTER> para continuar...");
            getchar();
        }
    }

    printf("\n\n");
    system("pause");
    return 0;
}
