#include <stdio.h>

int main(){

    int valor1, valor2,maior,menor,i,divisao,confira,f=0,total;

    printf("\n\t Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("\n\t Digite o segundo valor: ");
    scanf("%i", &valor2);
    printf("\n\t A soma dos valores pares de %i e %i são: ",valor1,valor2);


    if(valor1 > valor2){
        maior = valor1;
        menor = valor2;
    }
    else if(valor2 > valor1){
        maior = valor2;
        menor = valor1;
    }
    
    for(i =0; i < maior; i++){
        int soma[maior];
        divisao = i %2;
        
        if(divisao == 0) {
            confira = i;
            if(confira > menor && confira < maior){
            printf(" %i +", confira);
            f++;
            soma[f] = confira;
            total = total + soma[f];
            }
        }
        
    }
    printf(" = %i ",total);

    printf("\n\t");
    return 0;
}