/*5) Utilize como base o programa do exercício 3. Altere o programa do exercício 3 para que após
receber os 5 números do usuário o programa mostre o maior valor armazenado no vetor.
Digite o valor 1: "4"
Digite o valor 2: "5"
Digite o valor 3: "10"
Digite o valor 4: "3"
Digite o valor 5: "3"
Maior valor armazenado: "10"*/
#include <stdio.h>

int main(){
    int inteiro[5], numero, pesquisa, b = 0, pos, maior;

    for(int i = 0; i < 5 ; i++){
        printf("Digite o valor %i: ", i+1);
        scanf("%i", &numero);
        inteiro[i] = numero;
    }

    for(int a = 0; a<5; a++){
        if(a == 0){
            maior = inteiro[a];
        }
        if(inteiro[a] > maior){
            maior = inteiro[a];
        }
    
    }       
    printf("Maior Valor %i" ,maior);
    

    printf("\n\t");
    return 0;
}