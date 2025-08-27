#include <stdio.h>

int main(void){
	int opcao;
	double base, altura, lado, raio, baseMaior, baseMenor, diagonalMaior, diagonalMenor;
	double area;
	
	//entrada de dados
	printf("Escolha a figura geometrica que deseja calcular a area:\n");
	printf("1 - Triangulo\n");
	printf("2 - Quadrado\n");
	printf("3 - Circulo\n");
	printf("4 - Trapezio\n");
	printf("5 - Retangulo\n");
	printf("6 - Losango\n");
    printf("Digite a opcao (1 a 6): \n");
    scanf("%d", &opcao);
    
    //processamento de dados
    switch(opcao) {
    	case 1:
    		printf("Digite a base:\n");
    		scanf("%lf", &base);
    		printf("Digite a altura:\n");
    		scanf("%lf", &altura);
    		area=(base*altura)/2;
    		break;
    	case 2:
    		printf("Digite o tamanho dos lados:\n");
    		scanf("%lf", &lado);
    		area=lado*lado;
    		break;
    	case 3:
    		printf("Digite o raio: ");
    		scanf("%lf", &raio);
    		area=3,14*raio*raio;
    		break;
    	case 4:
    		printf("Digite o tamanho da base maior:\n");
    		scanf("%lf", &baseMaior);
    		printf("Digite o tamanho da base menor:\n");
    		scanf("%lf", &baseMenor);
    		printf("Digite o tamanho da altura:\n");
    		scanf("%lf", &altura);
    		area=((baseMaior+baseMenor)*altura)/2;
    		break;
    	case 5:
    		printf("Digite a base:\n");
    		scanf("%lf", &base);
    		printf("Digite a altura:\n");
    		scanf("%lf", &altura);
    		area=base*altura;
    		break;
    	case 6:
    		printf("Digite a diagonal maior:\n");
    		scanf("%lf", &diagonalMaior);
    		printf("Digite a diagonal menor:\n");
    		scanf("%lf", &diagonalMenor);
    		area=(diagonalMaior+diagonalMenor)/2;
    		break;
    	default:
    		printf("Opcao invalida\n");
    		return 1;
	}
	
	printf("A area da figura escolhida e %.2f", area);
	return 0;
}