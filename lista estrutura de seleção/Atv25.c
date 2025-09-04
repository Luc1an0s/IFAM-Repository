#include <stdio.h>

int main() {
    float precoEtiqueta, precoFinal;
    int codigo;

    //entrada de dados
    printf("Digite o preco do produto: R$ ");
    scanf("%f", &precoEtiqueta);

    printf("Escolha a condicao de pagamento (1 a 4):\n");
    printf("1 - A vista em dinheiro ou cheque (10%% de desconto)\n");
    printf("2 - A vista no cartao de credito (5%% de desconto)\n");
    printf("3 - Em 2 vezes (preco normal)\n");
    printf("4 - Em 3 vezes (preco com 10%% de juros)\n");
    printf("Digite o codigo da condicao: ");
    scanf("%d", &codigo);

    //processamento de dados
    switch(codigo) {
        case 1:
            precoFinal = precoEtiqueta * 0.90;
            break;
        case 2:
            precoFinal = precoEtiqueta * 0.95;
            break;
        case 3:
            precoFinal = precoEtiqueta;
            break;
        case 4:
            precoFinal = precoEtiqueta * 1.10;
            break;
        default:
            printf("Codigo invalido!\n");
            return 1; 
    }

    //saida de dados
    printf("Preco final a pagar: R$ %.2f\n", precoFinal);

    return 0;
}
