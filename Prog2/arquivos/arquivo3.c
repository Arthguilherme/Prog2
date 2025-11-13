#include <stdio.h>
#include <string.h>
int main(){

    FILE *arq;
    char cidade[100];
    float min,max;
    int clima;

    arq = fopen("teste.txt", "w");

    if(arq == NULL){
        printf("\n\tArquivo nao pode ser aberto.");
    return 0;
    
    }
    printf("\n\t Cadastro da Previsão do Tempo ");
    printf("\n\t Para encerrar digite 'vazio'");

     do{
     
        printf("\n\t Cidade: ");
        __fpurge(stdin);
        gets(cidade);
        
        if (strcmp(cidade, "vazio") == 0){
            fclose(arq);
            return 0;
        }

        printf("\t Minima e Maxima: ");
        scanf("%f %f", &min, &max);

        printf("\n\tCondicoes do Tempo: ");
        printf("\n\t 1- Sol ");
        printf("\n\t 2- Chuva ");
        printf("\n\t 3- Nublado ");
        printf("\n\t 4- Sol entre Nuvens ");
        printf("\n\t >  ");
        scanf("%i", &clima);

        fprintf(arq , "%s - %.1f - %.1f - %i \n", cidade , min, max , clima);

     }while (strcmp(cidade, "vazio") != 0);


    fclose(arq);
    return 0;
    }