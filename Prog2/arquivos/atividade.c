#include <stdio.h>
#include <string.h>

typedef struct livro{
    char titulo[100];
    char autor[100];
    int quantidade_livros;
    float valor;
    int id;
} LIVRO;
int main(){

    FILE *arq;
    LIVRO liv[5];
    int  i, op, qtd = 0, excluir=0;
    char busca[100];

    do{
        printf("\n\t ======= MENU =======");
        printf("\n\t 1- Cadastrar Livro");
        printf("\n\t 2- Pesquisar Livro");
        printf("\n\t 3- Listar Livros");
        printf("\n\t 4- Excluir Livro");
        printf("\n\t 5- Sair");
        printf("\n\t > ");
        scanf("%i", &op);

        switch (op){
        case 1:
            arq = fopen("livraria.dat", "ab");

            printf("\n\t Digite o titulo do livro: ");
            __fpurge(stdin);
            gets(liv[qtd].titulo);

            printf("\n\t Digite o autor do livro: ");
            __fpurge(stdin);
            gets(liv[qtd].autor);

            printf("\n\t Digite a quantidade do livro no estoque: ");
            scanf("%i", &liv[qtd].quantidade_livros);
            printf("\n\t Digite o valor do livro: ");
            scanf("%f", &liv[qtd].valor);
            printf("\n\t Digite o ID do livro: ");
            scanf("%i", &liv[qtd].id);
            printf("\n\t Livro Cadastrado com SUCESSO");
            qtd++;
            fwrite(&liv, sizeof(LIVRO), 1, arq);
            fclose(arq);
            printf("Livro cadastrado com sucesso!\n");
        
            break;
 
        case 2:

            printf("\n\t Digite o titulo do Livro que quer pesquisar: ");
            __fpurge(stdin);
            gets(busca);
            arq = fopen("livraria.dat", "rb");

            
            while(fread(&liv, sizeof(LIVRO), 1, arq)) {
                    if(liv[i].id != 0 && strstr(liv[i].titulo, busca)) {
                        printf("\n\t ======== Livro Encontrado ======== ");
                        printf("\n\t Titulo . . . . . : %s", liv[i].titulo);
                        printf("\n\t Autor  . . . . . : %s", liv[i].autor);
                        printf("\n\t Quantidade . . . : %d", liv[i].quantidade_livros);
                        printf("\n\t Valor  . . . . . : %.2f", liv[i].valor);
                        printf("\n\t ID . . . . . . . : %d", liv[i].id);
                        printf("\n\t ==================================");
                    }
                }
                
        
            break;

        case 3:
            fscanf(arq, "%s - %s - %i - %f - %i",liv[qtd].titulo, liv[qtd].autor, liv[qtd].quantidade_livros, liv[qtd].valor, liv[qtd].id);
            for (i = 0; i < qtd; i++)
            {
                if(liv[i].id != 0){
                    printf("\n\t ======== Livros Cadastrados ======== ");
                    printf("\n\t Titulo . . . . . : %s", liv[i].titulo);
                    printf("\n\t Autor  . . . . . : %s", liv[i].autor);
                    printf("\n\t Quantidade . . . : %i", liv[i].quantidade_livros);
                    printf("\n\t Valor  . . . . . : %.2f", liv[i].valor);
                    printf("\n\t id . . . . . . . : %i", liv[i].id);
                }           
            }
            break;
        case 4:
            printf("\n\t Digite o ID do livro que deseja excluir: ");
            scanf("%i", &excluir);

            for(i = 0; i < qtd; i++){
                if(liv[i].id == excluir){
                    strcpy(liv[i].titulo, " ");
                    strcpy(liv[i].autor, " ");
                    liv[i].quantidade_livros = 0;
                    liv[i].valor = 0.0;
                    liv[i].id = 0;
                }


            }
            break;

        default:
            break;
        }

    } while (op != 5);

    fclose(arq);
    return 0;
}