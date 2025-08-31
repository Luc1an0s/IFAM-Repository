#include <stdio.h>
#include <string.h>

int main(void){
	char senha[20];
	char senhaCorreta[]="ASDFG";
	
	//entrada de dados
	printf("Digite a senha de acesso\n");
	scanf("%19s", senha);
	
	//processamento e saida
	if(strcmp(senha, senhaCorreta) == 0)
		printf("Acesso permitido\n");
	else
		printf("Acesso negado\n");
		
	return 0;
}
