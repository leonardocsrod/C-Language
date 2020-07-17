#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
setlocale(LC_ALL, "Portuguese");

char message[30];
int length, n;
int conta, conte, conti, conto, contu;

printf("Informe a mensagem: ");
gets(message);
length = strlen(message);
conta = conte = conti = conto = contu = 0;
for(n = 0; n <= length - 1; n++){
    if(message[n] == 'a' || message[n] == 'A')
        conta++;
    else
        if(message[n] == 'e' || message[n] == 'E')
            conte++;
        else
            if(message[n] == 'i' || message[n] == 'I')
                conti++;
            else
                if(message[n] == 'o' || message[n] == 'O')
                    conto++;
                else
                    if(message[n] == 'u' || message[n] == 'U')
                        contu++;

}
printf("\nA frase %s tem :\n", message);
printf("Letra a: %d\n", conta);
printf("Letra e: %d\n", conte);
printf("Letra i: %d\n", conti);
printf("Letra o: %d\n", conto);
printf("Letra u: %d\n", contu);


printf("\n\n");
system("pause");
return 0;
}
