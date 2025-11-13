#include <stdio.h>

int main(){

    int valor1,valor2,maior,menor,i,j,primo,num,div;

    printf("\n\tDigite dois valores: ");
    scanf("%i %i",&valor1,&valor2);
    printf("\n\tNumeros primos enre %i e %i são: ",valor1,valor2);
    if(valor1 > valor2){
        maior = valor1;
        menor = valor2;
    }
    else if(valor2 > valor1){
        maior = valor2;
        menor = valor1;
    }
    for(j=1; j<= maior; j++){
        primo=1;
        num = j;

        for(i=2; i<num; i++){
           div = num % i;
           if(div == 0){
                primo = 0;
           }
        }
        if(primo == 1 && num < maior && num > menor){
            printf("%i ",num);
        }



    }

    printf("\n\t");
    return 0;
}