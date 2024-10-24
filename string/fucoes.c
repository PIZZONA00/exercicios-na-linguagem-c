#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float maior(float num1, float num2){
	if(num1 > num2)
	return num1;
	else
	return num2;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x,y,m;
	
	printf("Insira os dados:\n");
	scanf("%f", &x);
	printf("Insira mais um valor:\n");
	scanf("%f", &y);
	
	m = maior(x,y);
	
	printf("Maior: %.2f\n", m);

}
