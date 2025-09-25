#include <stdio.h>

int main(){

    int var1, num1, num2;
    float var2;
    char car;
    double var3;

    var1 = 10;
    num1 = 15;
    var2 = 10.12346;
    car = 'D';
    var3 = 3.333333334;

    num2 = num1 + var1;

    printf("\n\tInteiro: %i", num2);
    printf("\n\tInteiro: %.2f", var2);
    printf("\n\tInteiro: %c", car);
    printf("\n\tInteiro: %.9lf", var3);

printf("\n\n");
return 0;
}