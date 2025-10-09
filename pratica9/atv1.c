/*1. Faça um programa em C que gere aleatoriamente, através de um laço de
repetição for (), um vetor contendo 12 elementos inteiros (com valores
entre 0 e 50). Após exibir o conteúdo desse vetor calcule e imprima:
a. A quantidade de números entre 10 e 20;
b. Os números pares;
c. A quantidade de números maiores que 30;
d. Os números ímpares;*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int inteiro[12], i, valor, divisao, quanti1, quanti2;

    srand(time(NULL));

    
    for(i = 0; i < 12; i++){
        printf("\n\tValor Gerado: ");
        valor = rand() % 50 ;
        inteiro[i] = valor;
        printf("%i ", valor);
    }
    quanti1=0;
    for(i = 0; i < 12; i++){
        if(inteiro[i] >= 10 && inteiro[i] <= 20){
            quanti1 ++;
        }
    }
     
    for(i = 0; i < 12; i++){
        divisao = inteiro[i] %2;
         
        if(divisao == 0){
            printf("\n\t O numero %i eh par",inteiro[i]);
        }
        else{
            printf("\n\t O numero %i eh impar",inteiro[i]);
        }
    }
    quanti2=0;
    for(i = 0; i < 12; i++){
        if(inteiro[i] > 30){
            quanti2 ++;
        }
    }
    
    printf("\n\t A quantidade de numeros entre 10 e 20 sao: %i",quanti1);
    printf("\n\t A quantidade de numeros maiores que 30 sao: %i",quanti2);
    

    printf("\n\t");
    return 0;
}