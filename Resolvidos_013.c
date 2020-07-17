#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");

char state[3];
printf("Informe o seu estado: ");
gets(state);
if(strcmp(state,"RJ") || strcmp(state,"rj"))
    printf("Carioca\n");

printf("\n\n");
system("pause");
return 0;
}
