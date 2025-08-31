#include <stdio.h>

int main(void){
	float salarioFuncionario, reajuste;
	
	//entrada de dados
	printf("digite o valor do salario do funcionario\n");
	scanf("%f", &salarioFuncionario);
	
	//processamento e saida de dados
	if(salarioFuncionario<500){
		reajuste=salarioFuncionario*1.3;
		
		printf("o salario do funcionario com ajuste e %.2f\n", reajuste);
	}
	else
		printf("o funcionario nao tem direito a ajuste");
		
	return 0;
}