#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[10];
	
	printf("digite algo (scan convencional):\n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	printf("digite algo (scanf aprimorado):\n");
	scanf("%10[^\n]s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	
	return 0;
}
