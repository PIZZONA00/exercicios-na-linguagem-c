#include <stdio.h>

int main(){
	 
	 int mat[3][3] = {{1, 2, 2},{4, 5, 6},{7, 8 ,9}};
	 int i, j;
	 
	 printf("imprimindo a primeira linha:\n");
	 for(j=0;j<3;j++){
	 	printf("%d ", mat[0][j]);
	 	
	 }
	 printf("imprimindo a matriz toda:\n");
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		printf("%d ", mat[i]mat[j]);
		 }
		 printf("\n");
	 }
}
