#include <stdio.h>

int main (void){
	float num1, num2;
	
	//entrada de dados
	printf("Digite o primeiro numero\n");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero\n");
	scanf("%f", &num2);
	
	//processamento e saida de dados
	
	if(num1<num2)
		printf("o menor numero e %.2f\n", num1);
	else if (num1>num2)
		printf("o menor numero e %.2f\n", num2);
	else
		printf("os dois numeros sao iguais");
		
	return 0;
}