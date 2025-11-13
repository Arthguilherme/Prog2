#include <stdio.h>

int main(){

    int i, valorfornecido, auxiliar=0 , anterior =2, proximo =3;

    printf("\n\t Digite um valor para a sequencia de Fibonacci maior que 3: ");
    scanf("%i", &valorfornecido);
    printf("\n\t A sequencia de Fibonacci do valor eh: 1, 1, 2, ");
    
    while(proximo <= valorfornecido){
        printf("%i, ", proximo);

        auxiliar = proximo;
        proximo = proximo + anterior;
        anterior = auxiliar;
    }





    printf("\n\t");
    return 0;
}