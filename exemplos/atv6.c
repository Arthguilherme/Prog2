/*(DESAFIO) Escreva um programa em C que solicite ao usuário 10 valores inteiros. Após armazenar
estes valores em um vetor, imprima o histograma deste vetor em que cada posição contenha um
dos valores fornecido pelo usuário e que será representado pelo histograma. Exemplo:
Digite o valor da posição 0: "5"
Digite o valor da posição 1: "6"
Digite o valor da posição 2: "2"
Digite o valor da posição 3: "4"
Digite o valor da posição 4: "10"
Digite o valor da posição 5: "8"
Digite o valor da posição 6: "12"
Digite o valor da posição 7: "13"
Digite o valor da posição 8: "7"
Digite o valor da posição 9: "1"
Posição Valor Histograma
0 5 *****
1 6 ******
2 2 **
3 4 ****
4 10 **********
5 8 ********
6 12 ************
7 13 *************
8 7 *******
9 1 **/
#include <stdio.h>

int main(){
    int numero[10], i,pos,usuario;
    for(i = 0; i < 10; i++){
        printf("\n\tDigite o valor da posição %i: ", i);
        scanf("%i",&usuario);
        numero[i] = usuario;
    }
    printf("\n\tPosicao Valor Histograma");
    for(i=0; i<10; i++){
        printf("\n\t%i %i",i, numero[i]);
        for(pos = 0; pos < numero[i]; pos++){
            printf(" * ") ;
        }

    }

    printf("\n\t");
    return 0;
}