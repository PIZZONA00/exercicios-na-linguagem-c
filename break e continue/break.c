#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	for(i=1;i<=10;i++){
		
		printf("%d ", i);
		
		if(i == 5){
			break;
		}
		printf("%d", i)
	}
	
	return 0;
}
