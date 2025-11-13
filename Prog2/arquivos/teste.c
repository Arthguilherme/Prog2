#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100

typedef struct {
    char titulo[TAM];
    char autor[TAM];
    int qtd;
    float valor;
    int id;
} LIVRO;

int main() {
    FILE *arq;
    LIVRO livro;
    int op = 0;
    char busca[TAM];
    int id;
    char confirmar;

    do {
        printf("\n\n====== MENU ======\n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Listar livros\n");
        printf("3 - Pesquisar livro\n");
        printf("4 - Excluir livro\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);
        __fpurge(stdin);

        switch(op) {

            // ===== Cadastrar =====
            case 1:
                arq = fopen("livros.dat", "ab");
                if(!arq) { printf("Erro ao abrir arquivo.\n"); break; }

                printf("Titulo: ");
                fgets(livro.titulo, TAM, stdin);
                livro.titulo[strcspn(livro.titulo, "\n")] = 0;

                printf("Autor: ");
                fgets(livro.autor, TAM, stdin);
                livro.autor[strcspn(livro.autor, "\n")] = 0;

                printf("Quantidade: ");
                scanf("%d", &livro.qtd);
                printf("Valor: ");
                scanf("%f", &livro.valor);
                printf("ID: ");
                scanf("%d", &livro.id);

                fwrite(&livro, sizeof(LIVRO), 1, arq);
                fclose(arq);
                printf("Livro cadastrado com sucesso!\n");
                break;

            // ===== Listar =====
            case 2:
                arq = fopen("livros.dat", "rb");
                if(!arq) { printf("Nenhum livro cadastrado.\n"); break; }

                printf("\n===== Livros =====\n");
                while(fread(&livro, sizeof(LIVRO), 1, arq)) {
                    if(livro.id != 0) {
                        printf("Titulo: %s\nAutor: %s\nQtd: %d\nValor: %.2f\nID: %d\n\n",
                               livro.titulo, livro.autor, livro.qtd, livro.valor, livro.id);
                    }
                }
                fclose(arq);
                break;

            // ===== Pesquisar =====
            case 3:
                printf("Digite o titulo ou parte dele: ");
                fgets(busca, TAM, stdin);
                busca[strcspn(busca, "\n")] = 0;

                arq = fopen("livros.dat", "rb");
                if(!arq) { printf("Nenhum livro cadastrado.\n"); break; }

                int achou = 0;
                while(fread(&livro, sizeof(LIVRO), 1, arq)) {
                    if(livro.id != 0 && strstr(livro.titulo, busca)) {
                        printf("Titulo: %s\nAutor: %s\nQtd: %d\nValor: %.2f\nID: %d\n\n",
                               livro.titulo, livro.autor, livro.qtd, livro.valor, livro.id);
                        achou = 1;
                    }
                }
                if(!achou) printf("Livro nao encontrado.\n");
                fclose(arq);
                break;

            // ===== Excluir =====
            case 4:
                printf("Digite o ID do livro a excluir: ");
                scanf("%d", &id);

                arq = fopen("livros.dat", "r+b");
                if(!arq) { printf("Nenhum livro cadastrado.\n"); break; }

                int encontrado = 0;
                while(fread(&livro, sizeof(LIVRO), 1, arq)) {
                    if(livro.id == id) {
                        encontrado = 1;
                        printf("Livro encontrado:\nTitulo: %s\nAutor: %s\nQtd: %d\nValor: %.2f\nID: %d\n",
                               livro.titulo, livro.autor, livro.qtd, livro.valor, livro.id);

                        printf("Confirmar exclusao (s/n)? ");
                        __fpurge(stdin);
                        scanf("%c", &confirmar);
                        if(confirmar == 's' || confirmar == 'S') {
                            fseek(arq, -sizeof(LIVRO), SEEK_CUR);
                            livro.id = 0;
                            strcpy(livro.titulo, "");
                            strcpy(livro.autor, "");
                            livro.qtd = 0;
                            livro.valor = 0.0;
                            fwrite(&livro, sizeof(LIVRO), 1, arq);
                            printf("Livro excluido.\n");
                        } else {
                            printf("Exclusao cancelada.\n");
                        }
                        break;
                    }
                }
                if(!encontrado) printf("ID nao encontrado.\n");
                fclose(arq);
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while(op != 5);

    return 0;
}
