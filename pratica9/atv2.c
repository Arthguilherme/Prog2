/*2. Faça um programa em C que solicite ao usuário 10 valores inteiros para
serem armazenados num vetor. Após capturar os valores calcule e exiba:
a. Todos os números múltiplos de 2;
b. Todos os números múltiplos de 5;
c. Todos os números múltiplos de 2 e 5;
Veja o exemplo:
- Digite 10 valores inteiros: 1 2 3 4 5 6 7 8 9 10
- Números múltilos de 2: 2 4 6 8 10 [total = 5]
- Números múltilos de 5: 5 10 [total = 2]
- Números múltilos de 2 e 5: 10 [total = 1]*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, valores[10],valor, divisao5, multiplo2[10], multiplo5[10],divisao2,multiplo7[10];
    int contador1=0,contador2=0,contador3=0;

    printf("\n\tDigite 10 valores inteiros: \n");
    
    for(i = 0;  i < 10 ;i++){
        scanf("%d", &valor );
        valores[i] = valor;
    }

    for(i = 0; i < 10 ;i++){
        divisao2 = valores[i] % 2;
        divisao5 = valores[i] % 5;   

        if(divisao2 == 0){ 
            multiplo2[contador1] = valores[i];
            contador1++;
        }
        if(divisao5 == 0){
            multiplo5[contador2] = valores[i];
            contador2++;
        }
        if(divisao5 == 0 && divisao2 == 0){
            multiplo7[contador3] = valores[i];
            contador3++;
        }
    }

    printf("\n\t Numeros Multiplos de 2: ");
    for(i = 0; i < contador1 ;i++){
        printf(" %d ", multiplo2[i]);
    }
    printf("\n\t Numeros Multiplos de 5: ");
    for(i = 0; i < contador2 ;i++){
        printf(" %d ", multiplo5[i]);
    }
    printf("\n\t Numeros Multiplos de 2 e 5: ");
    for(i=0; i<contador3; i++){
        printf(" %i ", multiplo7[i]);
    }




    printf("\n\t");
    return 0;
}