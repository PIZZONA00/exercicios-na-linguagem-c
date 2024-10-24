#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	for(i=1; i<=10; i++){
		
		if(i == 5){
			continue;/*aqui fiz com que o 5 não aparecesse e continuasse a apartir do numero 6*/
		}
		printf("%d ", i);
	}
	return 0;
}
