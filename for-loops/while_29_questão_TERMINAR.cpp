#include <stdio.h>
int main(void){
	char nome[100],mais_velho,sexo,continuar;
	int i=0,idade=0;
	printf("(M - Masculino | F - Feminino)\n");
	printf("(S - Continuar | N - Parar)\n");
	while(i<1){
		printf("Informe o nome da pessoa: ");
		scanf("%s",&nome[i]);
		
		printf("Informe a idade: ");
		scanf("%d",&idade);
		
		printf("Informe o sexo (M/F): ");
		scanf(" %c",&sexo);
		
		if(idade > mais_velho){
			strcpy (nome, mais_velho);
		}
		
		printf("Quer continuar(S/N)?!\n");
		scanf(" %c",&continuar);
		if(continuar=='N' || continuar=='n'){
			break;
		}
		
	}
	printf("%s E nome da pessoa mais velha.\n",mais_velho);
	return 0;
}
