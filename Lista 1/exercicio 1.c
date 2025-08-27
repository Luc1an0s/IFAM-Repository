#include <stdio.h>

int main (void){
	int x, y, soma = 0;
	
	//entrada de dados
	printf("Digite dois numeros inteiros, respectivamente (digite o numero e aperte enter)\n");
	scanf("%d %d", &x, &y);
	
	//processamento de saída
	soma=x+y;
	
	printf("a soma e: %d", soma);
	
	return 0;
}