#include <stdio.h>

int main (void){
	float salario, reajuste = 0;
	
	//entrada de dados
	printf("digite o salario do funcionario\n");
	scanf("%f", &salario);
	
	//processamento de dados
	reajuste=salario*1.25;
	
	//saida de dados
	printf("o valor do salario com reajuste e %.2f", reajuste);
	
	return 0;
}