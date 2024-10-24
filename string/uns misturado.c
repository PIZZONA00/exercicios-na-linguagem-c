#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

char s[N];
int i;

printf("Digite um texto:\n");
gets(s);
i = strlen(s);
printf("\nTamanho do texto: %d\n\n", i);

printf("impressao de posicao a posicao\n");
for(i=0;i<strlen(s);i++);{
printf("%c", s[i]);
}
	return 0;
}
