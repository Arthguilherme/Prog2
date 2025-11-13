/*feito
Faça um programa em C que gere aleatoriamente um vetor contendo 10
elementos inteiros. Após exibir o conteúdo do vetor encontre o maior
valor aleatório gerado e multiplique todos os elementos do vetor por ele.
Por fim exiba o vetor final obtido após as multiplicações. Veja o exemplo:
- Vetor aleatório: 2 5 12 17 8 10 3 11 20 6
- Maior elemento: 20
- Vetor multiplicado: 40 100 240 340 160 200 60 220 400 120*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    int i, valores[10], multi[10], maior, valor;

    srand(time(NULL));
    printf("\n\tVetor Aleatorio: ");

    
    for (i = 0; i < 10; i++) {
        valor = rand() % 50;  
        valores[i] = valor;
        printf(" %i", valor);
    }

    
    for (i = 0; i < 10; i++) {
        if(i == 0){
        maior = valores[i];
        } 
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }
    printf("\n\tMaior Elemento Gerado: %i", maior);

    printf("\n\tVetor Multiplicado: ");
    for (i = 0; i < 10; i++) {
       multi[i] = valores[i] * maior;
       printf(" %i", multi[i]);
    }

    printf("\n");
    return 0;
}
