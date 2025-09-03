#include <stdio.h>
#include <math.h>

int main(){
	int opcao;
	float num1, num2, resultado;
	
	//entrada de dados
	printf("Menu\n");
	printf("1 - Soma\n");
	printf("2 - Raiz quadrada\n");
	printf("3 - Finalizar\n");
	
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
	
	//processamento e saida de dados
	switch (opcao) {
        case 1:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;

        case 2:
            printf("Digite um numero: ");
            scanf("%f", &num1);
            if (num1 < 0)
                printf("Nao e possivel calcular a raiz quadrada de numero negativo.\n");
            else {
                resultado = sqrt(num1);
                printf("Raiz quadrada de %.2f e %.2f\n", num1, resultado);
            }
            break;

        case 3:
            return 0;
            break;

        default:
            printf("Opção invalida.\n");
            break;
    }

    return 0;
}