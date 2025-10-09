/*3. Faça um programa em C que solicite ao usuário 12 valores inteiros para
serem armazenados num vetor. Após capturar os valores calcule e exiba:
a. O maior elemento do vetor e em qual posição ele se encontra;
b. O menor elemento do vetor e em qual posição ele se encontra;
Veja o exemplo:

- Digite 12 valores inteiros: 15 2 40 33 10 20 31 22 92 12 3 80
- Maior Elemento: 92
- Posição no Vetor: 8
- Menor Elemento: 2
- Posição no Vetor: 1*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,f,valores[12],usuario,maior,menor,posmaior,posmenor;

    printf("\n\t Digite 12 valores inteiros: ");

    for(i=0;i<12;i++){
        scanf("%i", &usuario);
        valores[i] = usuario;
    }

   for(i=0;i<12;i++){
        if(i==0){
            maior=valores[i];
            menor=valores[i]; 
        }
        if(valores[i] > maior){
            maior=valores[i];
            posmaior=i;
        }
        if(valores[i]<menor){
            menor = valores[i];
            posmenor=i;
        }
   }

    printf("\n\t Maior Elemento: %i", maior);
    printf("\n\t Posicao no Vetor: %i", posmaior);
    printf("\n\t Menor Elemento: %i", menor);
    printf("\n\t Posicao no Vetor: %i", posmenor);

    printf("\n\t");
    return 0;
}