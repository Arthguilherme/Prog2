#include <stdio.h>
#include <stdlib.h>

int main(){

    int verify = 0, valorusuario=0, maiorvalor=0, menorvalor=0;

    printf("\n\t Digite valores por gentileza (digite um valor negativo para encerrar o programa: ");
    scanf("%i", &valorusuario);
   // fflush(stdin);
    maiorvalor=valorusuario;
    menorvalor=valorusuario;

    do{
        scanf("%i", &valorusuario);
        //fflush(stdin);
        
        if(valorusuario < 0){
            verify = 1;
        }

        if(valorusuario > maiorvalor){
            maiorvalor = valorusuario;
        }
        if(valorusuario < maiorvalor && valorusuario > 0){
            menorvalor=valorusuario;
        }
    

    } while (verify != 1);
       
    printf("\n\t Maior valor: %i", maiorvalor);
    printf("\n\t Menor Valor: %d", menorvalor);


    printf("\n\t");
    return 0;
}