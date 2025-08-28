#include <stdio.h>

int main(){

    int numero;

    printf("\n\tDigite um numero inteiro: ");
    scanf("%i", &numero);
    /* operadores relacionais
    > maior que
    <menor que
    == igual
    >= maior igual
    <= menor igual
    != diferente
    
    operadores logicos
    && e
    || ou
    */

   if(numero >= 10){
    printf("\n\tO numero %i e maior ou igual a 10", numero);
   }
   else{
    printf("\n\tO numero %i e menor que 10", numero);
   }
    

printf("\n\n");
return 0;
}