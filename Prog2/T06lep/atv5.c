#include <stdio.h>

int main(){
    int num = 0,cel,kel,fah;
    
    do{

        printf("\n\t ---  Conversoes Online          --- ");
        printf("\n\t ---  1- Celcius para Fahrenheit --- ");
        printf("\n\t ---  2- Fahrenheit para Celcius --- ");
        printf("\n\t ---  3- Celcius para Kevin      --- ");
        printf("\n\t ---  4- Kelvin para Celcius     --- ");
        printf("\n\t ---  5- Encerrar Programa       --- ");
        printf("\n\t Digite a opcao desejada: ");
        scanf("%i",&num);

        switch (num)
        {
        case 1:

            printf("\n\t Digite o valor em Celcius: ");
            scanf("%i",&cel);
            fah = cel * 1.8 + 32;
            printf("\n\t A temperatura em Fahrenheit eh: %i\n", fah);
            break;

        case 2:
            printf("\n\t Digite o valor em Fahrenheit: ");
            scanf("%i",&fah);
            cel = (fah - 32) /1.8;
            printf("\n\t A temperatura em Celcius eh: %i\n",cel);
            break;

        case 3:
            printf("\n\t Digite a temperatura em Celcius: ");
            scanf("%i",&cel);
            kel = cel + 273.15;
            printf("\n\t A temperatura em Kelvin eh: %i \n",kel);
            break;

        case 4:
            printf("\n\t Digite a temperatura em Kelvin");
            scanf("%i",&kel);
            cel = kel - 273.15;
            printf("\n\t A temperatura em Celcius eh: %i \n",cel);
            break;

        default:
            break;
        }

    }while (num != 5);


    printf("\n\t");
    return 0;
}