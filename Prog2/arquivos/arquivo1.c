#include <stdio.h>

int main()
{

    FILE *arq;
    char ch;

    arq = fopen("teste.txt", "w");

    if (arq == NULL){
        printf("\n\tArquivo nao pode ser aberto.");
        return 0;
    }

    printf("\n\t Um Arquivo de texto foi aberto. Preencha com um texto");
    printf("\n\t Para encerrar digite '#'");
    printf("\n\t Início do texto: \n\t > ");
    scanf("%c", &ch);
    while( ch != '#'){
    fputc(ch, arq);
    scanf("%c", &ch);
    
    }
    
    
    
    fclose(arq);
    return 0;
}
