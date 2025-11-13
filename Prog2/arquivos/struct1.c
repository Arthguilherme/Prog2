#include <stdio.h>

typedef struct livro{
    char titulo[100];
    char autor[100];
    int qtd;
    float valor;
    int id;
}LIVRO;
int main(){
    LIVRO liv;

    printf("\n\t Digite o titulo do livro: ");
    gets(liv.titulo);
    printf("\n\t Digite o autor do livro: ");
    gets(liv.autor);
    printf("\n\t Digite a quantidade do livro no estoque: ");
    scanf("%i",&liv.qtd);
    printf("\n\t Digite o valor do livro: ");   
    scanf("%f",&liv.valor);
    printf("\n\t Digite o ID do livro: ");
    scanf("%i",&liv.id);

    printf("\n\t ======== Livros Cadaastrados ======== ");
    printf("\n\t Titulo . . . . . : %s", liv.titulo);
    printf("\n\t Autor  . . . . . : %s", liv.autor);
    printf("\n\t Quantidade . . . : %i", liv.qtd);
    printf("\n\t Valor  . . . . . : %.2f", liv.valor);
    printf("\n\t id . . . . . . . : %i", liv.id);
    return 0;
}