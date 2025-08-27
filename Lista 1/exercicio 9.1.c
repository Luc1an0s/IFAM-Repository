#include <stdio.h>
#include <math.h>

int main (void){
	int x;
	double raiz = 0;
	
	//entrada de dados
	printf("digite um numero inteiro\n");
	scanf("%d", &x);
	
	//processamento de dados
	if (x<0){
		printf("nao e possivel calcular a raiz o numero negativo");
	}else{
		raiz = sqrt(x);
    	printf("A raiz quadrada de %d e %.2f\n", x, raiz);	
	}
	
	return 0;
}