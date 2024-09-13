#include <stdio.h>
int main (void){
	struct Pessoa{
		char nome[50];
		int idade;
		char endereco[50];
	};
	struct Pessoa pessoa;
	
	printf("\n----------------- Entreda de Dados --------------------\n\n");
	
	printf("Informe o nome da pessoa: ");
	scanf(" %50[^\n]",&pessoa.nome);
	
	printf("Informe a sua idade: ");
	scanf(" %d",&pessoa.idade);
	
	printf("Informe o seu Indereco: ");
	scanf(" %50[^\n]",&pessoa.endereco);
	
	printf("\n----------------- Saida de Dados --------------------\n\n");
	
	printf("Nome: %s \n",pessoa.nome);
	printf("Idade: %d \n",pessoa.idade);
	printf("Endereco: %s \n",pessoa.endereco);
	
	return 0;
}
