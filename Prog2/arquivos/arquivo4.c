#include <stdio.h>
#include <string.h>
int main(){

    FILE *arq;
    char cidade[100],cidade_lida[100];
    int clima;
    float min,max;

    arq = fopen("teste.txt", "r");

    if(arq == NULL){
        printf("\n\tArquivo nao pode ser aberto.");
    return 0;
    }

    printf("\n\t Consulta da Previsão do Tempo ");
    printf("\n\t Consulta por Cidade");
    printf("\n\t Cidade: ");
    gets(cidade);


    //while (fscanf(arq, "%s", cidade_lida) != EOF) {
    do{
        fscanf(arq , "%s - %f - %f - %i", cidade_lida , &min, &max , &clima);  
        if (strcmp(cidade,cidade_lida) == 0) {



            printf("\n\t Cidade: %s",cidade);
            printf("\n\t Temperatura minima: %.1f e maxima: %.1f", min, max);
            printf("\n\t Condicoes do tempo: ");

            switch (clima)
            {
            case 1:
                printf("Sol");
            break;
            case 2:
                printf("Chuva");
            break;
            case 3:
                printf("Nublado");
            break;
            case 4:
                printf("Sol entre Nuvens");
            break;
            default:
                break;
            }
        
        }
    }while(strcmp(cidade,cidade_lida) != 0);

    fclose(arq);
    return 0;
    }