#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");
char str1[20], str2[20];
int len1, len2;
printf("Informe um nome: ");
gets(str1);
len1 = strlen(str1);
printf("Informe outro nome: ");
gets(str2);
len2 = strlen(str2);

printf("O tamanho do primeiro nome é %d!\n", len1);
printf("O tamanho do segundo nome é %d!\n", len2);
printf("Os nomes digitados foram %s \n", strcat(str1,str2));
printf("A string2 copia para string1 e fica %s \n", strcpy(str1, str2));

printf("\n\n");
system("pause");
return 0;
}
