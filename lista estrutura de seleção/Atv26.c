#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;
    float resultado;

    //entrada de dados
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf(" %c", &operacao);
    
    //processamento e saida de dados
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %d + %d = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %d - %d = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %d * %d = %.2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                resultado = (float) num1 / num2;
                printf("Resultado: %d / %d = %.2f\n", num1, num2, resultado);
            }
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}
