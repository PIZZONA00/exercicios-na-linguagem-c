#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int mat[3][3] = {{1, 2, 2},{4, 5, 6},{7, 8 ,9}};
	 int i, j;
	 
	 printf("imprimindo a primeira linha:\n");
	 for(j=0;j<3;j++){
	 	printf("%d ", mat[0][j]);
	 }
	 
	 printf("\n\nimprimindo a matriz toda:\n");
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		printf("%d ", mat[i][j]);
		 }
		 printf("\n");
	 }
	return 0;
}
