#include <stdio.h>

int main (void){
	float altura, pesoIdeal;
	char sexo;
	
	//entrada de dados
	printf("digite sua altura:\n")/
	scanf("%f", &altura);
	
	printf("digite seu sexo (F para feminio e M para masculino)");
	scanf(" %c", &sexo);
	
	//processamento e saida de dados
	if(sexo == 'M' || sexo == 'm'){
		pesoIdeal = (72.7*altura) - 58;
		printf("seu peso ideal e %.2f", pesoIdeal);
	} else if (sexo == 'F' || sexo == 'f'){
		pesoIdeal = (62.1*altura) - 44.7;
		printf("seu peso ideal e %.2f", pesoIdeal);
	} else {
		printf("sexo invalido, digite M ou F");
	}
	return 0;
}