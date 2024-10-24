#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char hardText[N] = {"/exit"};
	char senha_usr[N];
	int ok;
	
	printf("Digite umm texto:\n");
	gets(senha_usr);
	
	ok = strcmp(hardText, senha_usr);
	
	if(ok == 0)
	  printf("Textos iguais.\n");
	else
	  printf("Textos diferentes.\n");
	
}
