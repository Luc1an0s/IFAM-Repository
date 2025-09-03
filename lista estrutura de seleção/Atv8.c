#include <stdio.h>

int main(){
	float notaLab, notaAv, notaEx, mediaFinal;
	
	//entrada de dados
	printf("Digite a nota do trabalho de laboratorio (0 a 10):\n");
	scanf("%f", &notaLab);
	
	printf("Digite a nota da avaliacao semestral (0 a 10):\n");
	scanf("%f", &notaAv);

	printf("Digite a nota do exame final (0 a 10):\n");
	scanf("%f", &notaEx);
	
	//processamento e saida de dados
	mediaFinal=((notaLab*2)+(notaAv*3)+(notaEx*5))/10;
	
	printf("Media final e %.2f\n", mediaFinal);
	
	if(mediaFinal >= 8 && mediaFinal <= 10)
		printf("Conceito A\n");
	else if (mediaFinal >= 7)
		printf("Conceito B\n");
	else if (mediaFinal >= 6)
		printf("Conceito C\n");
	else if (mediaFinal >= 5)
		printf("Conceito D\n");
	else
		printf("Conceito E\n");
		
	return 0;
}