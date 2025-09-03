#include <stdio.h>

int main(){
	int angulo;
	
	//entrada de dados
	printf("Digite o angulo em graus:\n");
	scanf("%d", &angulo);
	
	//processamento e saida de dados
	angulo = angulo %360;
	if (angulo < 0){
		angulo += 360;
	}
	
	if(angulo >= 0 && angulo < 90){
		printf("1 quadrante\n");
	} else if (angulo >= 90 && angulo < 180){
		printf("2 quadrante\n");
	} else if (angulo >= 180 && angulo <270){
		printf("3 quadrante\n");
	} else{
		printf("4 quadrante\n");
	}
	
	return 0;
}