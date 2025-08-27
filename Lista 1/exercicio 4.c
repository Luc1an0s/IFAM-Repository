#include <stdio.h>

int main (void){
	float nota1, nota2, nota3, media= 0;
	
	//entrada de dados
	printf("digite o primeiro numero\n");
	scanf("%f", &nota1);
	printf("digite o segundo numero\n");
	scanf("%f", &nota2);
	printf("digite o terceiro numero\n");
	scanf("%f", &nota3);
	
	//processamento de dados
	media=(nota1+nota2+nota3)/3;
	
	printf("a media aritmetrica e: %.2f", media);
	
	return 0;
}