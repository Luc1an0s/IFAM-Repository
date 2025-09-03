#include <stdio.h>

int main (void){
	float preco;
	int codigo;
	
	//entrada de dados
	printf("Digite o preco do produto:\n");
	scanf("%f", &preco);
	
	printf("Digite o codigo de origem do produto:\n");
	scanf("%d", &codigo);
	
	//processamento e saida de dados
	
	switch (codigo) {
        case 1:
            printf("Sul\n");
            break;
        case 2:
            printf("Norte\n");
            break;
        case 3:
            printf("Leste\n");
            break;
        case 4:
            printf("Oeste\n");
            break;
        case 5:
        case 6:
            printf("Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Sudeste\n");
            break;
        default:
            if (codigo >= 10 && codigo <= 20)
                printf("Centro-Oeste\n");
            else if (codigo >= 21 && codigo <= 30)
                printf("Nordeste\n");
            else
                printf("Codigo invalido\n");
            break;
    }

    return 0;
}