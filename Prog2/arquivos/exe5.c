#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100

char Arquivo[] = "livros.dat";
char ArqTotal[] = "livrostotal.txt";

typedef struct livro{

	char titulo[TAM];
	char autor[TAM];
	int qtd;
	float valor;
	int id;

}LIVRO;

int cadastrar(int, LIVRO *);
int listar(int, LIVRO *);
int realocar(int, LIVRO *);
int excluir(int, LIVRO *);
void pesquisar(int, LIVRO *);


int main(){

	LIVRO *livro = malloc(1 * sizeof(LIVRO));
	FILE *arqtot = fopen(ArqTotal, "a+");

	int sair = 0, Total_Livros = fgetc(arqtot);
	int op;

	
	while(sair == 0){
		op = 0;
		system("clear");
		printf("\n\n\t       === Livrarias Leitura ===    ");	
		printf("\n\t=== Sistema de Controle de Estoque ===");	

		printf("\n\n\t====== Menu =====");	
		printf("\n\t= (1) Cadastrar =");	
		printf("\n\t= (2) Listar    =");	
		printf("\n\t= (3) Pesquisar =");	
		printf("\n\t= (4) Excluir   =");	
		printf("\n\t= (5) Sair      =");	
		printf("\n\t=================");	
		printf("\n\n\t= Opcao: ");	
		scanf("%d", &op);
		__fpurge(stdin);		

		switch(op){
			case 1: Total_Livros = cadastrar(Total_Livros, livro); break;
				//printf("\n\tTotalc: %d", Total_Livros); break;
			case 2: listar(Total_Livros, livro); break;
			case 3: pesquisar(Total_Livros, livro); break;
			case 4: Total_Livros = excluir(Total_Livros, livro); break;
				// printf("\n\tTotale: %d", Total_Livros);break;
			case 5: sair = 1; break;
			default: printf("\n\tOPCAO INVALIDA.");
		}	

	}
rewind(arqtot);
fputc(Total_Livros, arqtot);
fclose(arqtot);
printf("\n\n");
return 0;
}
void pesquisar(int qtd, LIVRO *livro){

	char titulo[TAM];
	int i, cont = 0, achou = 0;

	system("clear");
	printf("\n\n\tDigite o titulo (ou parte dele) do livro a ser pesquisado: ");
	__fpurge(stdin);
	gets(titulo);

	for(i = 0; i < qtd; i++){
		if(strstr(livro[i].titulo,titulo)!= NULL){
			if(cont == 0)
				printf("\n\tLivros encontrado(s):\n");
			printf("\n\tTitulo......: %s", livro[i].titulo);
			printf("\n\tAutor.......: %s", livro[i].autor);
			printf("\n\tQuantidade..: %d", livro[i].qtd);
			printf("\n\tValor.......: %.2f", livro[i].valor);
			printf("\n\tID..........: %d", livro[i].id);	
			printf("\n");
			achou = 1;
			cont++;
		}
	}
	if(achou == 0){
		printf("\n\tLivro nao encontrado.\n");
	}
	else{
		printf("\n\tTotal de livros encontrados: %d\n", cont);
	}

	__fpurge(stdin);
	getchar();
}

int excluir(int qtd, LIVRO *livro){

	int i, id, ex;
	char confirmar;	

	system("clear");
	printf("\n\n\tDigite o ID do livro a ser excluido: ");
	scanf("%d", &id);

	if(id < 1){
		printf("\n\tID Invalido.");	
	}
	else{
		ex = 0;
		for(i = 0; i < qtd; i++){
			if(livro[i].id == id){
				ex = 1;
				break;
			}
		}
		if(ex == 1){
		
			printf("\n\tLivro a ser excluido:\n");
			printf("\n\tTitulo......: %s", livro[i].titulo);
			printf("\n\tAutor.......: %s", livro[i].autor);
			printf("\n\tQuantidade..: %d", livro[i].qtd);
			printf("\n\tValor.......: %.2f", livro[i].valor);
			printf("\n\tID..........: %d", livro[i].id);
			printf("\n");
			do{
				__fpurge(stdin);
				printf("\n\tConfirmar (s/n): ");
				scanf("%c", &confirmar);
				__fpurge(stdin);
				//if(confirmar == 's' || confirmar == 'S' || confirmar == 'n' || confirmar == 'N')
				//	ex = 2;

			//}while(ex != 2);
			}while((confirmar != 's') && (confirmar != 'S') && (confirmar != 'n') && (confirmar != 'N'));
			//if((confirmar == 's')||(confirmar == 'S')){
			if((confirmar == 's')||(confirmar == 'S')){
				strcpy(livro[i].titulo,"vazio");
				strcpy(livro[i].autor,"vazio");
				livro[i].qtd = 0;
				livro[i].valor = 0;
				livro[i].id = 0;
			
				printf("\n\n\tLivro excluido com sucesso.");
			}
			else{
				printf("\n\n\tExclusao Cancelada.");

			}
		}
		else{
			printf("\n\tID de Livro nao encontrado.");
		}
	}
	__fpurge(stdin);
	getchar();
return qtd;
}
int realocar(int q, LIVRO *livro){
	livro = realloc(livro, q * sizeof(LIVRO));
	return q;
}

int cadastrar(int qtd, LIVRO *livro){

	int id, igual, j;
	int alocar = 0, i = 0; //alocar = 1;

	FILE *arq = fopen(Arquivo, "a+b");

	if(arq == NULL){
		printf("\n\tProblemas ao abrir o arquivo.");
		getchar();
		return 1;
	}

	/*percorre o vetor em busca de espacos livres, se encontrar para e vai
	  cadastrar. Senao, aloca mais um e cadastra no ultimo espaco
	*/
/*	for(i = 0; i < qtd; i++){
		if(livro[i].id == 0){
			alocar = 0;
			break;
		}
		else{
			alocar = 1;
		}
	}
	if(alocar == 1){
		i = qtd;
		qtd++;
		qtd = realocar(qtd, livro);
		alocar = 0;
	}
*/
	if(alocar == 0){
		printf("\n\tDigite o TITULO do livro: ");
		__fpurge(stdin);
		gets(livro[i].titulo);

		printf("\n\tDigite o AUTOR do livro: ");
		__fpurge(stdin);
		gets(livro[i].autor);

		printf("\n\tDigite a QUANTIDADE em estoque: ");
		scanf("%d", &livro[i].qtd);
	
		printf("\n\tDigite o VALOR do livro: ");
		scanf("%f", &livro[i].valor);	

		/*
		do{
			igual = 0;
			printf("\n\tDigite o ID do livro: ");
			scanf("%d", &id);
			for(j = 0; j < qtd; j++){
				if((id == livro[j].id) || (id == 0))
					igual = 1;
			}
			if(igual == 1){
				printf("\n\tID ja existente no cadastro ou ID invalido.\n\tTente outro.");
			}
		}while(igual == 1);
		*/
		printf("\n\tDigite o ID do livro: ");
		scanf("%d", &id);
		livro[i].id = id;

		fwrite(&livro[i], sizeof(LIVRO), 1, arq);
		qtd++;

	}

	printf("\n\n\tLivro cadastrado com sucesso.");
	__fpurge(stdin);		
	getchar();
	/*'qtd' indica o total de livros cadastrados*/
	fclose(arq);
return qtd;
}

int listar(int Qtd, LIVRO *livro){

	int i = 0, retorno;
	
	FILE *arq = fopen(Arquivo, "rb");

	if(arq == NULL){
		printf("\n\tProblemas ao abrir o arquivo.");
		getchar();
		return 1;
	}

	system("clear");
	if(Qtd > 0){
		printf("\n\n\t===== Livros Cadastrados ===== ");
	
		//for(i = 0; i < Qtd; i++){
	
		retorno = fread(&livro[i],sizeof(LIVRO),1,arq);
		while(retorno == 1){
			if(livro[i].id != 0){
				printf("\n\tTitulo......: %s", livro[i].titulo);
				printf("\n\tAutor.......: %s", livro[i].autor);
				printf("\n\tQuantidade..: %d", livro[i].qtd);
				printf("\n\tValor.......: %.2f", livro[i].valor);
				printf("\n\tID..........: %d", livro[i].id);
				printf("\n");
			}
			retorno = fread(&livro[i],sizeof(LIVRO),1,arq);
		}
	}
	else{
		printf("\n\n\tNao ha livros cadastrados.");
	}
	getchar();
fclose(arq);
return 0;
}

