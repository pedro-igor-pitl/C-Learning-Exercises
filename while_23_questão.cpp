#include <stdio.h>
int main (void){
	int i=0, idade=0, sexo, homen_cadast=0, mulher_cadast=0, mulher_mais_20=0,cont=0;
	float total_grupo=0, total_homen=0, result_grupo=0, result_homen=0;
	printf("Informe a idade e o sexo de 5 pessoas\n");
	printf("**************************************\n");
	printf("(1 - para Masculino | 2 - para Feminino)\n");
	printf("**************************************\n");
	while(i<5){
		i++;
		printf("Informe a idade da pessoa %d: ",i);
		scanf("%d",&idade);
		total_grupo+=idade;
		printf("Informe o sexo da pessoa %d: ",i);
		scanf("%d",&sexo);
		if(sexo==1){
			total_homen+=idade;
			cont++;
		}
		if(sexo==1){
			homen_cadast++;
		}
		if(sexo==2){
			mulher_cadast++;
		}
		if(sexo==2 && idade>20){
			mulher_mais_20++;
		}
	}
	
	result_grupo = total_grupo / 5;
	result_homen = total_homen / cont;
	printf("**************************************\n");
	printf("%d Homen(s) foi(ram) cadastrado(s)\n",homen_cadast);
	printf("**************************************\n");
	printf("%d Mulher(es) foi(ram) cadastrada(s)\n",mulher_cadast);
	printf("**************************************\n");
	printf("%f E a media de idade do grupo\n",result_grupo);
	printf("**************************************\n");
	printf("%f E a media de idade dos homens\n",result_homen);
	printf("**************************************\n");
	printf("%d Mulher(es) tem mais de 20 anos\n",mulher_mais_20);
	printf("**************************************\n");
	return 0;
}
