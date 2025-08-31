#include <stdio.h>

int main (void){
	int idade;
	
	//entrada de dados
	printf("Coloque sua idade\n");
	scanf("%d", &idade);
	
	//processamento e saida de dados
	if(idade>=18)
		printf("Voce e maior de idade\n");
	else
		printf("Voce e menor de idade\n");
		
	return 0;
}