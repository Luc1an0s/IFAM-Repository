#include <stdio.h>
#include <math.h>

int main (void){
	double base, expoente, resultado;
	
	//entrada de dados
	printf("Digite a base da sua potencia: ");
    scanf("%lf", &base);
    printf("Digite o expoente da sua potencia: ");
    scanf("%lf", &expoente);
    
    //processamento e saída
    resultado = pow(base, expoente);
    
    printf("%.2f elevado a %2.f e %.2f", base, expoente, resultado);
    
    return 0;
}