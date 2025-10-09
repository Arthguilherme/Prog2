/*Faça um programa em C que solicite ao usuário, através de um laço de
repetição, o nome de 7 produtos (A–Z) e de seus respectivos preços.
Após armazenar as informações em dois vetores distintos, um do tipo
‘char’ para os produtos e outro do tipo ‘double’ para os preço, calcule e
exiba:
a. A quantidade de produtos com preço inferior a R$ 80,00;
b. O nome dos produtos com preço entre R$ 120,00 e R$ 160,00;
c. A média de preço dos produtos que custam mais que R$ 200,00;*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int id,quanti = 0,cont=0,cont2=0;
    char vprodutos[7], produto,nome[7];
    double vprecos[7],preco,total = 0,media=0;

    printf("digite os caracteres dos produtos: ");

    for(id=0;id<7;id++){
        fpurge(stdin);
        scanf("%c",&produto);
        vprodutos[id] = produto;
    }
    printf("digite os precos dos produtos: ");
    for(id=0;id<7;id++){
        scanf("%f",&preco);
        vprecos[id] = preco;
        if(preco >200){
            cont2++;
        }
    }

    for(id=0;id<7;id++){
        // a feito
        if(vprecos[id] < 80.0){
            quanti++;
        }//b feito 
        if(vprecos[id] > 120.0 && vprecos[id] < 160.0){
            nome[cont] = vprodutos[id];
            cont++;
        }
        if(vprecos[id] > 200.0){
            total = total + vprecos[id]; 
        }

    }
    media = total / cont2;

    printf("\n\tA quantidade de produtos com preco inferior a 80 eh: %i",quanti);
    printf("\n\tO nome dos produtos com preco entre 120 e 160 eh: ");
    for(id=0; id < cont;id++){
        printf(" %c",nome[id]);
    }
    printf("\n\tA media de preco dos produtos que custam mais que 200 eh: %f" ,media);

    printf("\n\t");
    return 0;
}