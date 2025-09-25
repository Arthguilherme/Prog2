/*1) Escreva um programa que declare um vetor de inteiros com 6 posições e inicialize-o com os
valores de 10 à 15; Em seguida, imprima estes valores em ordem crescente. Isto é, como foram
inicializados.
*/

#include <stdio.h>

int main(){
    int inteiro[6], i;

    printf("Os valores do vetor são: ");
    for(i = 0 ; i < 6 ; i++){
        inteiro[i] = 10 + i;
        printf("\n%i", inteiro[i]);

    }

return 0;

}