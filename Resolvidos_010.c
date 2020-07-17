#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
/*Receber um nome no teclado e imprimir quantas letras "A" tem o nome*/
setlocale(LC_ALL, "Portuguese");

char message[30];
int length, n, conta;
conta = 0;
printf("Digite a mensagem: ");
gets(message);
length = strlen(message);
for(n = 0; n <= length - 1; n++){
    if(message[n] == 'a' || message[n] == 'A')
        conta++;
}
printf("\nA mensagem [%s] tem %d letra(s) a.", message, conta);

printf("\n\n");
system("pause");
return 0;
}
