#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	char Origem[N] = {"Ola,Mundo!"};
	char Destino[N];
	
	printf("Antes do strpy:\n");
	puts(Origem);
	puts(Destino);
	
	strcpy(Destino,Origem);
	
	printf("Depois de strpy:\n");
	puts(Origem);
	puts(Destino);
	return 0;
}
