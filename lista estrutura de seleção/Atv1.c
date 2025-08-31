#include <stdio.h>

int main (void){
	float nota1, nota2, nota3, nota4, mediaFinal;
	
	//entrada de dados
	printf("digite a primeria nota\n");
	scanf("%f", &nota1);
	printf("digite a segunda nota\n");
	scanf("%f", &nota2);
	printf("digite a terceira nota\n");
	scanf("%f", &nota3);
	printf("digite a quarta nota\n");
	scanf("%f", &nota4);
	
	//processamento e saida de dados
	
	mediaFinal=(nota1+nota2+nota3+nota4)/4;
	
	if(mediaFinal>=7 && mediaFinal<=10)
		printf("Aprovado");
	else if (mediaFinal<0 && mediaFinal>10)
		printf("nota inválida");
	else
		printf("reprovado");
		
	return 0;
}