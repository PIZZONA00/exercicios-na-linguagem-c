#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d;
	
	printf("insira um valor de 1 a 7");
	printf("\n");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("domingo\n");
			break;
			
			case 2:
				printf("segunda-feira\n");
				break;
				case3:
					print("terça-feira\n");
					break;
			case 4:
				printf("quarta-feira\n");
				break;
				case5:
					printf("quinta-feira\n");
			case 6:
					printf("sexta-feira\n");
					break;
			case 7:
				printf("sabado\n");
				break;
				default:
					printf("valor invalido\n");
					break;
	}
	return 0;
}
