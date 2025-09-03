#include <stdio.h>

int main(){
	float nota1, nota2, nota3, media;
	
	//entrada de dados
	printf("Digite a primeira nota (0 a 10):\n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota (0 a 10):\n");
	scanf("%f", &nota2);

	printf("Digite a terceira nota (0 a 10):\n");
	scanf("%f", &nota3);
	
	//processamento e saida de dados
	media=(nota1+nota2+nota3)/3;
	
	if(media >= 0 && media < 5)
		printf("Reprovado\n");
	else if (media < 7)
		printf("Exame\n");
	else if (media <= 10)
		printf("Aprovado\n");
	else
		printf("Nota invalida\n");
		
	return 0;
}