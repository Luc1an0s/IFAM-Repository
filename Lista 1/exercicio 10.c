#include <stdio.h>
#include <math.h>

int main (void){
	float diagonal, area;
	
	//entrada de dados
	printf("digite o valor da diagonal do quadrado\n");
	scanf("%f", &diagonal);
	
	//processamento de dados
	area=(pow(diagonal, 2))/2;
	
	//saida
	printf("a area do quadrado e %.2f\n", area);
	
	return 0; 
}