#include <stdio.h>

int main(void){
	float salarioFuncionario, reajuste;
	
	//entrada de dados
	printf("coloque o salario do funcionario");
	

	//processamento e saida de dados
	if(salarioFuncionario<=300){
		reajuste=salarioFuncionario*1.5;
		printf("o salario do funcionario com reajuste de 50 por cento e %f", reajuste);
	}
	else{
		reajuste=salarioFuncionario*1.3;
		printf("o salario do funcionario com reajuste de 30 por cento e %f", reajuste);
	}
	return 0;
}