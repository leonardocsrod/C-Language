#include <stdio.h>
/*
*Receber do teclado uma mensagem e imprimir quantas letras A, E, I, O, U tem esta mensagem.
Considerar minúscula e maiúscula
*/
int main(){
    int x, tam;
    char frase[50];
    int counta, counte, counti, counto, countu;
    counta = counte = counti = counto = countu = 0;
    printf("Digite uma frase: ");
    gets(frase);
    tam = strlen(frase);
    for(x = 0; x <= tam; x++){
        if(frase[x] == 'a' || frase[x] == 'A'){
            counta++;
        }else
            if(frase[x] == 'e' || frase[x] == 'E'){
                counte++;
            }else
                if(frase[x] == 'i' || frase[x] == 'I'){
                    counti++;
                }else
                    if(frase[x] == 'o' || frase[x] == 'O'){
                        counto++;
                    }else
                        if(frase[x] == 'u' || frase[x] == 'U'){
                            countu++;
                        }
    }
    system("cls");
    sleep(1);
    printf("\n");
    sleep(1);
    printf("Thinking....\n");
    printf("A frase tem: \n");
    printf("%d letras a.\n", counta);
    printf("%d letras e.\n", counte);
    printf("%d letras i.\n", counti);
    printf("%d letras o.\n", counto);
    printf("%d letras u.\n", countu);

    return 0;
}
