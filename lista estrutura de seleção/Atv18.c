#include <stdio.h>

int main() {
    int minExtras, minFalta, premio;
    float horasExtras, horasFalta, H;

    // Entrada de dados
    printf("Digite o numero de minutos de horas extras: ");
    scanf("%d", &minExtras);

    printf("Digite o numero de minutos de horas-falta: ");
    scanf("%d", &minFalta);

	//processamento e saida de dados
    horasExtras = minExtras / 60.0;
    horasFalta = minFalta / 60.0;

    H = minExtras - (2.0 / 3.0) * minFalta;

    if (H > 2400) {
        premio = 500;
    } else if (H > 1800) {
        premio = 400;
    } else if (H > 1200) {
        premio = 300;
    } else if (H > 600) {
        premio = 200;
    } else {
        premio = 100;
    }

    printf("\nHoras extras: %.2f h\n", horasExtras);
    printf("Horas-falta: %.2f h\n", horasFalta);
    printf("Valor do premio: R$ %d\n", premio);

    return 0;
}
