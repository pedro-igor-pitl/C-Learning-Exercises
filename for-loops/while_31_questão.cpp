#include <stdio.h>
int main(void){
	int i=0, idade=0, idade_digitada=0, pessoa_maior_igual=0, cont=0,soma=0;
	char continuar;
	float media_idade=0;
	printf("(S - Continuar | N - Parar)\n");
	do{
		printf("Informe a idade da pessoa: ");
		scanf("%d",&idade);
		cont++;
		soma+=idade;
		if(idade>=21){
			pessoa_maior_igual++;
		}
		printf("Quer continuar(S/N)?!\n");
		scanf(" %c",&continuar);
		if(continuar=='n' | continuar=='N'){
			break;
		}
	}while(i<1);
	printf("[%d] idade(s) foi(ram) digitada(s).\n",cont);
	media_idade = soma / cont;
	printf("[%f] E a media entre as idades digitadas.\n",media_idade);
	printf("[%d] E a(s) quantidade de pessoa(s) que tem 21 anos ou mais.\n",pessoa_maior_igual);
	return 0;
}
