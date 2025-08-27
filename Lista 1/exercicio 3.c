#include <stdio.h>

int main (void){
	int x, y;
	float divisao = 0;
	
	//entrada de dados
	printf("digite o primeiro numero\n");
	scanf("%d", &x);
	printf("digite o segundo numero\n");
	scanf("%d", &y);
	
	//processamento de dados
	divisao=x/y;
	
	printf("a divisao e: %.2f", divisao);
	
	return 0;
}