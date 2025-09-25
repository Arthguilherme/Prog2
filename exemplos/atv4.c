/*4) Altere o programa do exercício 3 para que ao invés do usuário fornecer os números o
programa gere aleatoriamente números entre 1 e 10 e armazene no vetor de 5 posições.
Vetor com números aleatórios: 5 3 4 7 9
Valor a ser pesquisado: "3"
Valor "3" encontrado na posição: "1"*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int inteiro[5], numero, pesquisa, b = 0, pos;
    srand(time(NULL));

    for(int i = 0; i < 5 ; i++){
        numero = rand() % 10 +1;
        printf("\n\tValor gerado %i" ,numero );
        inteiro[i] = numero;
    }
    printf("\n\tValor a ser pesquisado: ");
    scanf("%i", &pesquisa);

    for(int a = 0; a<5; a++){
       if(inteiro[a] == pesquisa){
        b = 1;
        pos = a;
       }
    }

    if(b == 1){
        printf("\n\tValor %i encontrado na posicao: %i" ,pesquisa, pos);
    }
    else{
        printf("\n\tValor não encontrado");
    }

    printf("\n\t");
    return 0;
}