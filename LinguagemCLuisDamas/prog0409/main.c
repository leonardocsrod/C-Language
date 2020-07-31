#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Apresentação de menu com laço do...while.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char opcao;
    do
    {
        printf("\nMENU PRINCIPAL\n");
        printf("\n\n\t\tClientes");
        printf("\n\n\t\tFornecedores");
        printf("\n\n\t\tEncomendas");
        printf("\n\n\t\tSair");
        printf("\n\n\n\t\tOpção:");
        scanf("%c", &opcao);
        fflush(stdin);
        switch(opcao)
        {
            case 'c':
            case 'C': puts("Opção CLIENTES"); break;
            case 'f':
            case 'F': puts("Opção FORNECEDORES"); break;
            case 'e':
            case 'E': puts("Opção ENCOMENDAS"); break;
            case 's':
            case 'S': break;
            default: puts("OPÇÃO INVÁLIDA!!!");
        }
        getchar();
    }
    while(opcao != 's' && opcao != 'S');
    printf("\n\n");
    system("pause");
    return 0;
}
