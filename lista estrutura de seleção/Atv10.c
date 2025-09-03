#include <stdio.h>

int main(){
	int num;
	
	//entrada de dados
	printf("digite um numero inteiro:\n");
	scanf("%d", &num);
	
	//processamento e saida de dados
	if(num % 2 == 0)
		printf("o numero %d e PAR", num);
	else
		printf("o numero %d e IMPAR", num);
	
	return 0;
}