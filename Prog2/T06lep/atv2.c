#include <stdio.h>

int main(){
    int verify = 0, valordigitado=0, todososvalores[6], ultimovalor=0, soma=0, primeirov=0, ultimov=0;
    printf("\n\t Digite valores em ordem crescente: ");
    scanf("%i" ,&valordigitado);
    todososvalores[verify] = valordigitado;
    ultimovalor=valordigitado;
    primeirov=valordigitado;
    
    do{
        printf("\n\t Digite novamente o proximo numero: ");
        scanf("%i", &valordigitado);

        if(valordigitado < ultimovalor){
            printf("\n\t Por favor digite outro numero em ordem crescente!!!: ");
            scanf("%i", &valordigitado);
        }
        if(valordigitado > ultimovalor){
            verify++;
            todososvalores[verify] = valordigitado;
            ultimovalor = valordigitado;
        }
        if(verify == 5){
            ultimov = valordigitado;
        }
        
    }while( verify < 5);
    
    soma = primeirov + ultimov;
    printf("\n\t Primeiro e ultimo valor somados eh: %i", soma);
    printf("\n\t Todos os valores: ");
    for(int i =0; i < 6; i++){
        printf("%i - ", todososvalores[i]);
    }

    printf("\n\t");
    return 0;
}