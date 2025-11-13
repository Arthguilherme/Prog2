// # include <stdio.h>
//  struct pessoa{
//  char nome[30];
// int idade;
// float altura , peso;
// };
// int main(){

//  struct pessoa aluno;

//  printf("\n\tDigite seu nome: ");
//  __fpurge(stdin);
//  gets(aluno.nome);

//  printf("\n\tDigite sua idade: ");
//  scanf("%d", &aluno.idade);

//  printf("\n\tDigite seu peso: ");
//  scanf("%f", &aluno.peso);

//  printf("\n\tDigite sua altura: ");
//  scanf("%f", &aluno.altura);

//  printf("\n\tDados cadastrais: ");
//  printf("\n\tNome: %s", aluno.nome);
// printf("\n\tIdade: %d", aluno.idade);
//  printf("\n\tPeso: %.2f", aluno.peso);
//  printf("\n\taltura: %.2f", aluno.altura);

//  printf("\n\n");
//  return 0;
//  }


// # include <stdio.h>

// struct pessoa{
//  char nome[30];
//  int idade;
//  };

//  int main(){

//  struct pessoa aluno[10];

//  printf("\n\tDigite seu nome: ");
//  __fpurge(stdin);
//  gets(aluno[0].nome);

//  printf("\n\tDigite sua idade: ");
//  scanf("%d", &aluno[0].idade);

//  printf("\n\tDados cadastrais: ");
//  printf("\n\tNome: %s", aluno[0].nome);
//  printf("\n\tIdade: %d", aluno[0].idade);

//  printf("\n\n");
//  return 0;
//  }


// # include <stdio.h>

//  struct pessoa{
//  char nome[30];
//  int idade;
//  };

//  int main(){

//  struct pessoa aluno[3];
//  int i ;

//  for(i = 0; i < 3; i++){
//  printf("\n\tDigite seu nome: ");
//  __fpurge(stdin);
//  gets(aluno[i].nome);
//  printf("\n\tDigite sua idade: ");
//  scanf("%d", &aluno[i].idade);
//  }

//  printf("\n\tDados cadastrais: ");
//  for(i = 0; i < 3; i++){
//  printf("\n\tNome: %s", aluno[i].nome);
//  printf("\n\tIdade: %d", aluno[i].idade);
//  printf("\n\t---");
//  }

//  printf("\n\n");
//  return 0;
//  }

// # include <stdio.h>

//  typedef struct pessoa
//  {
//  char nome[100];
//  int idade;
//  float salario;

//  } PESSOA;

//  int main(){

//  PESSOA p;

//  printf("\n\tDigite o nome: ");
//  gets(p.nome);

//  printf("\n\tDigite a idade: ");
//  scanf("%i", &p.idade);

//  printf("\n\tDigite o salario: ");
//  scanf("%f", &p.salario);

//  printf("\n\tNome: %s\n\tIdade: %i\n\tSalario: %.2f", p.nome , p.idade , p.salario);
//  printf("\n\n");
//  return 0;
//  }
//  # include <stdio.h>

//  int main(){

//  FILE *arq;
//  char ch;

//  // abre o arquivo
//  arq = fopen("teste.txt", "w");

//  // testa se a operacao foi realizada com sucesso
//  if(arq == NULL){
//  printf("\n\tArquivo nao pode ser aberto.");
//  return 0;
//  }

//  // obtem o caracatere
//  printf("\n\tDigite um caractere: ");
//  scanf("%c", &ch);

// // escreve o caractere contido na variavel ’ch ’dentro do arquivo ’arq ’

//  fputc(ch, arq);

//  // fecha o arquivo
//  fclose(arq);
//  return 0;
//  }

// # include <stdio.h>

//  int main(){

//  FILE *arq;
//  char frase[100];

//  // abre o arquivo
//  arq = fopen("teste.txt", "w");

//  // testa se a operacao foi realizada com sucesso
//  if(arq == NULL){


//  printf("\n\tArquivo nao pode ser aberto.");
//  return 0;
//  }

//  // obtem a frase
//  printf("\n\tDigite uma frase: ");
//  __fpurge(stdin);
//  gets(frase);

//  // escreve a frase dentro do arquivo ’arq ’
//  fputs(frase , arq);

//  // fecha o arquivo
//  fclose(arq);
//  return 0;
//  }

// # include <stdio.h>

//  int main(){



// FILE *arq;
//  char nome[100];
//  int idade , i;
// float altura;

//  // abre o arquivo
//  arq = fopen("teste.txt", "w");

//  // testa se a operacao foi realizada com sucesso
//  if(arq == NULL){
//  printf("\n\tArquivo nao pode ser aberto.");
//  return 0;
//  }

//  for(i = 0; i < 3; i++){
//  printf("\n\tDigite o Nome: ");
//  __fpurge(stdin);
//  gets(nome);

//  printf("\n\tDigite a idade: ");
//  scanf("%d", &idade);

//  printf("\n\tDigite a altura: ");
//  scanf("%f", &altura);

//  // escreve os campos formatados dentro do arquivo ’arq ’

//  fprintf(arq , "%s - %d - %.2f\n", nome ,idade , altura);

//  }

//  // fecha o arquivo
//  fclose(arq);
//  return 0;
// }

// # include <stdio.h>

//  int main(){

//  FILE *arq;
//  char ch;

//  // abre o arquivo
//  arq = fopen("teste.txt", "r");

//  // testa se a operacao foi realizada com sucesso
//  if(arq == NULL){
//  printf("\n\tArquivo nao pode ser aberto.");
//  return 0;
//  }

//  while (!feof(arq)){

//  // fgetc retorna o caracter lido
//  ch = fgetc(arq);
// // escreve na tela
//  printf("%c", ch);
//  }

//  // fecha o arquivo
//  fclose(arq);
//  return 0;
//  }

// # include <stdio.h>

//  int main(){

//  FILE *arq;
//  char frase[100];

//  // abre o arquivo
//  arq = fopen("teste.txt", "r");

//  // testa se a operacao foi realizada com sucesso
//  if(arq == NULL){


//  printf("\n\tArquivo nao pode ser aberto.");
//  return 0;
//  }

//  // obtem a frase
//  while ((fgets(frase , sizeof (frase), arq))!=NULL ){
//  printf("\n\tfrase: %s", frase);
//  }
//  // fecha o arquivo
//  fclose(arq);
//  return 0;
//  }

// # include <stdio.h>

//  int main(){

//  FILE *arq;
//  char nome[100];
//  int idade , i;

//  float altura;

//  // abre o arquivo
//  arq = fopen("dados.txt", "r");

// // testa se a operacao foi realizada com sucesso
//  if(arq == NULL){
//  printf("\n\tArquivo nao pode ser aberto.");
//  return 0;
//  }

//  for(i = 0; i < 3; i++){
//  // le os campos formatados dentro do arquivo ’arq ’

//  fscanf(arq , "%s - %d - %f", nome , &idade ,&altura);

//  printf("\n\tNome: %s", nome);

//  printf("\n\tIdade: %d", idade);

//  printf("\n\tAltura: %.2f", altura);
//  }

//  // fecha o arquivo
//  fclose(arq);
//  return 0;
//  }
// # include <stdio.h>
//  int main(){

//  FILE *arq;
//  int numero = 34;

//  // abre o arquivo em modo binario ’wb ’
//  arq = fopen("teste.bin", "wb");
//  // testa se a operacao foi realizada com sucesso
//  if(arq == NULL){
//  printf("\n\tArquivo nao pode ser aberto."

// );
//  return 0;
//  }

//  fwrite(&numero , sizeof (int), 1, arq);


//  // fecha o arquivo
//  fclose(arq);
//  return 0;
//  }

//  # include <stdio.h>

//  struct pessoa{
//  char nome[30];
//  int idade;
//  float altura , peso;
// };

//  int main(){

//  struct pessoa aluno;
//  FILE *arq;

//  // abre o arquivo em modo binario ’wb ’
//  arq = fopen("teste.bin", "wb");

//  // testa se a operacao foi realizada com sucesso
//  if(arq == NULL){
//  printf("\n\tArquivo nao pode ser aberto."

// );
//  return 0;
//  }

//  printf("\n\tDigite seu nome: ");
//  __fpurge(stdin);
//  gets(aluno.nome);

// printf("\n\tDigite sua idade: ");
//  scanf("%d", &aluno.idade);

//  printf("\n\tDigite seu peso: ");
//  scanf("%f", &aluno.peso);

// printf("\n\tDigite sua altura: ");
//  scanf("%f", &aluno.altura);

//  // insere a struct no arquivo
//  fwrite(&aluno , sizeof ( struct pessoa), 1, arq);

//  fclose(arq);
//  printf("\n\n");
// return 0;
//  }
