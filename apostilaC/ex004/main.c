#include <stdio.h>
int main(){
    char produto[10];
    int qtde;
    float preco;
    double total;
    printf("Digite o nome do produto: ");
    scanf("%10s", produto);
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite a quantidade: ");
    scanf("%d", &qtde);
    total = qtde * preco;
    printf("O valor do produto ");
    printf(produto);
    printf(" e: ");
    printf("%f", total);
    return 0;
}
