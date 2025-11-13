#include <stdio.h>
#include <string.h>

int main() {
    FILE *arq;
    char palavra[30], palavra_lida[30];
    int qtd = 0;

    arq = fopen("teste.txt", "r");

    if (arq == NULL) {
        printf("\n\tArquivo nao pode ser aberto.\n");
        return 0;
    }

    printf("\n\tDigite uma palavra para ser encontrada no texto: ");
    scanf("%s", palavra);

    while (fscanf(arq, "%s", palavra_lida) != EOF) {
        if (strcmp(palavra, palavra_lida) == 0) {
            qtd++;
        }
    }

    printf("\nA palavra '%s' foi encontrada %d vezes no arquivo.\n", palavra, qtd);

    fclose(arq);
    return 0;
}
