#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");
char name[20];
int n, m;
int length;
printf("Informe o seu nome: ");
gets(name);
length = strlen(name);

for(n = 0; n <= length - 1; n++){
    for(m = 0; m <= n; m++)
        printf("%s", name);
    printf("\n");

}

printf("\n\n");
system("pause");
return 0;
}
