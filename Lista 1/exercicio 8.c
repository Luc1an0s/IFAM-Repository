#include <stdio.h>

int main(void){
	double salarioFuncionario, salarioMinimo, quantidade = 0;
	
	//entrada de dados
	
	printf("digite o salario do funcionario");
	scanf("%lf", &salarioFuncionario);
	
	printf("digite o salario minimo atualmente");
	scanf("%lf", &salarioMinimo);
	
	//processamento
	quantidade=salarioFuncionario/salarioMinimo;
	
	//saida
	printf("o funcionario recebe %.2 salarios minimos", quantidade);
	
	return 0;
	
}