#include <stdio.h>

int main (void){
	float peso, pesoGramas, gramasMais;
	
	//entrada de dados
	printf("digite o seu peso\n");
	scanf("%f", &peso);
	
	//processamento de dados
	pesoGramas=peso*1000;
	
	gramasMais=pesoGramas*1.05;
	
	//saida de dados
	printf("o seu peso em gramas e %.2f\n", pesoGramas);
	printf("seu peso com 5 por cento e %.2f", gramasMais);
	
	return 0;
}