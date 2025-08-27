#include <stdio.h>

int main(void) {
    float nota1, nota2, peso1, peso2, media_ponderada = 0;

    // Entrada dos dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);

    //Processamento e saida
    media_ponderada = (nota1*peso1)+(nota2*peso2)/(peso1 + peso2);

    printf("A media ponderada e: %.2f\n", media_ponderada);

    return 0;
}
