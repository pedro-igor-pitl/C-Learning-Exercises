#include <stdio.h>
int main (void){
	int i=0;
	struct Aluno{
		char nome[50];
		int matricula;
		char curso[50];
	};
	
	struct Aluno aluno[5];
	
	printf("\n---------------- Entrada de Dados --------------\n\n");
	
	for(i=0;i<5;i++){
		printf("Informe o nome do aluno %d: ",i+1);
		scanf(" %50[^\n]",&aluno[i].nome);
		
		printf("Informe a matricula do aluno %d: ",i+1);
		scanf(" %d",&aluno[i].matricula);
		
		printf("Informe o curso do aluno %d: ",i+1);
		scanf(" %50[^\n]",&aluno[i].curso);
		printf("\n\n\n");
	}
	
	printf("\n---------------- Saida de Dados --------------\n\n");
	
	for(i=0;i<5;i++){
	printf("Nome do aluno %d: %s\n",i+1,aluno[i].nome);
	printf("Numero da matricula do aluno %d: %d\n",i+1,aluno[i].matricula);
	printf("Curso do aluno %d: %s\n",i+1,aluno[i].curso);
	printf("\n\n\n");
}
	return 0;
}
