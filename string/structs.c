#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	//criando e inicializando
	
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf("inicio:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %2.f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//atribuindo valores ao campo
	
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Juninho");
	
	printf("\nAlterando os campos via codigo:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %2.f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//solicitando dados via teclado ou seja fazer o usuario escrever os dados
	
	printf("\nInsira um numero:\n");
	scanf("%d", &pes.idade);
	printf("\ninsira seu peso:\n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("\ninsira seu nome:\n");
	scanf("%s", &pes.nome);
	
	printf("\Alterendo com dados do usurario");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %2.f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	
	
	return 0;
}
