// Atividade1 

/*#include <stdio.h>

int eleva_cubo(int);

int main() {
    int numero;

    printf("\n\tDigite um valor para eleva-lo ao cubo: ");
    scanf("%i", &numero);

    int cubo = eleva_cubo(numero);       
    printf("\n\tO numero %i elevado ao cubo eh: %i\n", numero, cubo);

    printf("\n\t");
    return 0;
}


int eleva_cubo(int num) {
    return num * num * num;
}
*/
// Atividade2
/*
#include <stdio.h>

int potencia(int,int);

int main(){

    int base, pot;

    printf("Digite um Valor para a base e potencia: ");
    scanf("%i %i", &base, &pot);

    int potenciacao = potencia(base, pot);

    printf("\n\t %i elevado a %i eh: %i\n", base, pot, potenciacao);

    printf("\n\t");
    return 0;
}

int potencia(int b, int p){
    int resultado = 1;

    for(int i = 0; i < p; i++){
        resultado = resultado * b;
    }
    return resultado;
}
 */

// Atividade3
/*
#include <stdio.h>

int eh_letra(char);  // protótipo da função

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);   // o espaço antes do %c evita ler "enter" ou espaços

    if (eh_letra(caractere) == 1) {   // chama a função corretamente
        printf("\n\tO caractere '%c' eh letra.\n", caractere);
    } else {
        printf("\n\tO caractere '%c' nao eh letra.\n", caractere);
    }

    return 0;
}

// implementação da função
int eh_letra(char caractere) {
    if ((caractere >= 'a' && caractere <= 'z') || 
        (caractere >= 'A' && caractere <= 'Z')) {
        return 1;   // é letra
    } else {
        return 0;   // não é letra
    }
}
*/

// Atividade4
/*
#include <stdio.h>

void imprimir_asteriscos(int);

int main(){

    int asteriscos;

    printf("Digite a quantidade de asteriscos: \t");
    scanf("%i", &asteriscos);
    imprimir_asteriscos(asteriscos);

    printf("\n\t");
    return 0;
}
void imprimir_asteriscos(int asteriscos){
    for(int i = 0; i < asteriscos; i++){
        printf("* ");
    }
    printf("\n\t");
}
*/
// Atividade5
/*
#include <stdio.h>

void imprimir_caracter(int, char);

int main(){

    int quantidade;
    char caracter;

    printf("Digite o caracter a ser impresso: ");
    scanf(" %c", &caracter);
    printf("Digite a quantidade de caracteres: ");
    scanf("%i", &quantidade);
    printf("\n");
    imprimir_caracter(quantidade, caracter);

    printf("\n\t");
    return 0;
}

void imprimir_caracter(int quantidade, char caracter){

    for(int i = 0; i < quantidade; i++){
        printf("%c ", caracter);
    }
    printf("\n\t");
}
*/
// Atividade6
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verifica_soma(int a, int b, int resposta);

int main() {
    int num1, num2, resposta;

    srand(time(NULL)); // inicializa a semente para rand()

    do {
        // gera dois números aleatórios de 0 a 9
        num1 = rand() % 10;
        num2 = rand() % 10;

        do {
            // pergunta ao aluno
            printf("Quanto eh %d + %d? (0 para sair)\n", num1, num2);
            scanf("%d", &resposta);

            if (resposta == 0) {
                printf("\nPrograma encerrado.\n");
                return 0; // sai do programa
            }

            if (verifica_soma(num1, num2, resposta)) {
                printf("Muito Bem!\n\n");
            } else {
                printf("Continue Tentando\n");
            }

        } while (!verifica_soma(num1, num2, resposta)); // repete enquanto estiver errado

    } while (1); // loop infinito para novas questões

    return 0;
}

int verifica_soma(int a, int b, int resposta) {
    return (resposta == a + b) ? 1 : 0;
}
