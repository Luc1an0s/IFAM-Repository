#include <stdio.h>

int main (){
	int codigoCargo;
	
	//entrada de dados
	printf("Digite o codigo do cargo (1 a 5):\n");
	scanf("%d", &codigoCargo);
	
	//processamento e saida de dados
	switch(codigoCargo){
		case 1:
            printf("Cargo: Escriturario\n");
            printf("Percentual de aumento: 50%%\n");
            break;
        case 2:
            printf("Cargo: Secretario\n");
            printf("Percentual de aumento: 35%%\n");
            break;
        case 3:
            printf("Cargo: Caixa\n");
            printf("Percentual de aumento: 20%%\n");
            break;
        case 4:
            printf("Cargo: Gerente\n");
            printf("Percentual de aumento: 10%%\n");
            break;
        case 5:
            printf("Cargo: Diretor\n");
            printf("Percentual de aumento: Nao tem aumento\n");
            break;
        default:
            printf("Código invalido. Por favor, insira um valor entre 1 e 5\n");
            break;
    }
    return 0;
}