#include <stdio.h>

int main (void){
	float salario, imposto = 0;
	
	//entrada de dados
	printf("digite o salario do funcionario\n");
	scanf("%f", &salario);
	
	//processamento de dados
	imposto=salario*0.05;
	
	//saida de dados
	printf("o valor do imposto de renda a ser pago e %.2f", imposto);
	
	return 0;
}