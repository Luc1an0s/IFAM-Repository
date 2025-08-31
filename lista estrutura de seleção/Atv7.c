#include <stdio.h>

int main(void) {
    int idade;

    // entrada de dados
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    // processamento e saida de dados
    switch (idade) {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Idade fora das categorias disponiveis.\n");
            break;
        case 5:
        case 6:
        case 7:
            printf("Categoria: Infantil A\n");
            break;
        case 8:
        case 9:
        case 10:
            printf("Categoria: Infantil B\n");
            break;
        case 11:
        case 12:
        case 13:
            printf("Categoria: Juvenil A\n");
            break;
        case 14:
        case 15:
        case 16:
        case 17:
            printf("Categoria: Juvenil B\n");
            break;
        default:
            if (idade >= 18)
                printf("Categoria: Senior\n");
            else
                printf("Idade fora das categorias disponiveis.\n");
            break;
    }

    return 0;
}
