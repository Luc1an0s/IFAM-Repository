#include <stdio.h>

int main() {
    int idade, codigoSeguro;
    char grupo;

    // Entrada de dados
    printf("Digite a idade (entre 18 e 70): ");
    scanf("%d", &idade);
    
    //processamento de dados
    if (idade < 18 || idade > 70) {
        printf("Idade fora da faixa permitida para seguro.\n");
        return 0;
    }
	
	// Entrada de dados
    printf("Digite o grupo de risco (b - baixo, m - medio, a - alto): ");
    scanf(" %c", &grupo);

    //processamento de dados e saida de dados
    if (idade >= 18 && idade <= 24) {
        switch (grupo) {
            case 'b':
            case 'B':
                codigoSeguro = 7;
                break;
            case 'm':
            case 'M':
                codigoSeguro = 8;
                break;
            case 'a':
            case 'A':
                codigoSeguro = 9;
                break;
            default:
                printf("Grupo de risco invalido.\n");
                return 0;
        }
    } else if (idade >= 25 && idade <= 40) {
        switch (grupo) {
            case 'b':
            case 'B':
                codigoSeguro = 4;
                break;
            case 'm':
            case 'M':
                codigoSeguro = 5;
                break;
            case 'a':
            case 'A':
                codigoSeguro = 6;
                break;
            default:
                printf("Grupo de risco invalido.\n");
                return 0;
        }
    } else if (idade >= 41 && idade <= 70) {
        switch (grupo) {
            case 'b':
            case 'B':
                codigoSeguro = 1;
                break;
            case 'm':
            case 'M':
                codigoSeguro = 2;
                break;
            case 'a':
            case 'A':
                codigoSeguro = 3;
                break;
            default:
                printf("Grupo de risco invalido.\n");
                return 0;
        }
    }

    printf("Codigo do seguro: %d\n", codigoSeguro);

    return 0;
}
