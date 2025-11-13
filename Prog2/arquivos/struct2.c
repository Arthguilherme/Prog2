#include <stdio.h>

typedef struct livro
{
    char titulo[100];
    char autor[100];
    int qtd;
    float valor;
    int id;
} LIVRO;
int main()
{
    LIVRO liv[3];
    int i;
    for (i = 0; i < 3; i++){

        printf("\n\t Digite o titulo do livro: ");
        __fpurge(stdin);
        gets(liv[i].titulo);
        printf("\n\t Digite o autor do livro: ");
        __fpurge(stdin);
        gets(liv[i].autor);
        printf("\n\t Digite a quantidade do livro no estoque: ");
        scanf("%i", &liv[i].qtd);
        printf("\n\t Digite o valor do livro: ");
        scanf("%f", &liv[i].valor);
        printf("\n\t Digite o ID do livro: ");
        scanf("%i", &liv[i].id);
    }

    for (i = 0; i < 3; i++){
        printf("\n\t ======== Livros Cadaastrados ======== ");
        printf("\n\t Titulo . . . . . : %s", liv[i].titulo);
        printf("\n\t Autor  . . . . . : %s", liv[i].autor);
        printf("\n\t Quantidade . . . : %i", liv[i].qtd);
        printf("\n\t Valor  . . . . . : %.2f", liv[i].valor);
        printf("\n\t id . . . . . . . : %i", liv[i].id);
    }
    return 0;
}