#include <stdio.h>

int main (void){
	float salarioMinimo, quilowatts, valorPorKw, valorTotal, valorDesconto;
	
	//entrada de dados
	printf("Digite o valor do salario minimo");
	scanf("%f", &salarioMinimo);
	
	printf("Digite a quantidade de quilowatts consumido");
	scanf("%f", &quilowatts);
	
	//processamento de dados
	valorPorKw=salarioMinimo/5;
	
	valorTotal =valorPorKw*quilowatts;
	
	valorDesconto=valorTotal*0.85;
	
	//saida de dados
	printf("\nValor de cada quilowatt e %.2f\n", valorPorKw);
	printf("Valor total a ser pago e %.2f\n", valorTotal);
	printf("Valor com 15 por cento de deconto e %.2f\n", valorDesconto);
	
	return 0;
}