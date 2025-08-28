#include <stdio.h>

int main (void){
	int nascimento, atual, idade;
	
	//entrada de dados
	printf("coloque o ano do seu nascimento");
	scanf("%d", &nascimento);
	
	printf("coloque o ano atual");
	scanf("%d", &atual);
	
	//processamento de dados
	idade=atual-nascimento;
	
	//saida
	printf("a sua idade e %d", idade);
	
	return 0;
}