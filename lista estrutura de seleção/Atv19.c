#include <stdio.h>

int main() {
    float salarioMin, valorHora, salarioMes, valorHoraExtra, valorDependentes;
    float salarioBruto, irrf, salarioLiquido, gratificacao, salarioFinal;
    int horasTrabalhadas, horasExtras, numDependentes;

    // Entrada de dados
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMin);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &numDependentes);

    printf("Digite o numero de horas extras trabalhadas: ");
    scanf("%d", &horasExtras);

    // processamento de dados
    valorHora = salarioMin / 5.0;
    salarioMes = horasTrabalhadas * valorHora;
    valorHoraExtra = horasExtras * (valorHora * 1.5);
    valorDependentes = numDependentes * 32.0;

    salarioBruto = salarioMes + valorHoraExtra + valorDependentes;

    if (salarioBruto <= 200) {
        irrf = 0;
    } else if (salarioBruto <= 500) {
        irrf = salarioBruto * 0.10;
    } else {
        irrf = salarioBruto * 0.20;
    }

    salarioLiquido = salarioBruto - irrf;

    if (salarioLiquido <= 350) {
        gratificacao = 100;
    } else {
        gratificacao = 50;
    }

    salarioFinal = salarioLiquido + gratificacao;

	//saida de dados
    printf("Salario a receber do funcionario: %.2f\n", salarioFinal);

    return 0;
}
