
/*2) Altere o programa do exercício 1 para que o vetor seja impresso de forma decrescente:
Vetor decrescente:
15 14 13 12 11 10*/

#include <stdio.h>

int main(){
    int inteiro[6], i;

    printf("Os valores do vetor são: ");
    for(i = 0 ; i < 6 ; i++){
        inteiro[i] = 10 + i;
    }
    for(i = 5 ; i >= 0 ; i--){
        printf("\n%i", inteiro[i]);
    }

return 0;

}