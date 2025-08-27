#include <stdio.h>

int main (void){
	float x, y, sub = 0;
	
	//entrada de dados
	printf("digite o primeiro numero que deseja subtrair\n");
	scanf("%f", &x);
	printf("digite o primeiro numero que deseja subtrair\n");
	scanf("%f", &y);
	
	//processamento de saida
	sub=x-y;
	
	printf("a subtracao e: %.2f", sub);
	
	return 0;
}