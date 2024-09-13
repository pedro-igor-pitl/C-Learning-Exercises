#include <stdio.h>
int main(void){
	int i=0,cont=0,idade=0,continuar=0,aluno=0;
	float total_aluno=0, cont2=0, soma=0;
	printf("(1 - Continuar | 999 - Parar)\n");
	while(i<1){
		printf("Informe a idade do aluno: ");
		scanf("%d",&idade);
		if(idade){
			aluno++;
		}
		if(idade){
			soma+=idade;
			cont2++;
		}
		printf("Quer continuar(1/999)?! (Para parar abasta digitar 999.)\n");
		scanf("%d",&continuar);
		if(continuar==999){
			break;
		}	
	}
	printf("%d E o numero de alunos.\n",aluno);
	total_aluno = soma / cont2;
	printf("%f E a media da idade dos alunos.\n",total_aluno);
	return 0;
}
