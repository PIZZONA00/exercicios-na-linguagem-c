#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float m;
	
	printf("insira a nota:");
	printf("\n");
	scanf("%f", &m);
	
	if (m >= 7.0){
	printf("aprovado");
	} else{
		printf("reprovado");
		printf("\n");
	}
	
	return 0;
}
