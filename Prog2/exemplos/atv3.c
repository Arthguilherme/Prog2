/*3) Escreva um programa que solicite ao usuário 5 valores inteiros e armazene-os em um vetor.
Em seguida, solicite ao usuário um inteiro para ser encontrado no vetor preenchido. Caso seja
encontrado, mostre o valor e a posição do vetor onde encontra-se este valor. Caso não seja
encontrado, mostre a mensagem: "Valor ? não encontrado", onde ? é o valor fornecido pelo
usuário.
Digite o valor 1: "4"
Digite o valor 2: "5"
Digite o valor 3: "7"
Digite o valor 4: "3"
Digite o valor 5: "9"
Valor a ser pesquisado: "7"
Valor "7" encontrado na posição: "2"*/
#include <stdio.h>

int main(){
    int inteiro[5], numero, pesquisa, b = 0, pos;

    for(int i = 0; i < 5 ; i++){
        printf("Digite o valor %i: ", i+1);
        scanf("%i", &numero);
        inteiro[i] = numero;
    }
    printf("Valor a ser pesquisado: ");
    scanf("%i", &pesquisa);

    for(int a = 0; a<5; a++){
       if(inteiro[a] == pesquisa){
        b = 1;
        pos = a;
       }
    }

    if(b == 1){
        printf("Valor %i encontrado na posicao: %i" ,pesquisa, pos);
    }
    printf("\n\t");
    return 0;
}