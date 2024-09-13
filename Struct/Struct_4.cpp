#include <stdio.h>

struct Alunos{
	int matricula=0;
	char nome[50];
	float nota1=0;
	float nota2=0;
	float nota3=0;
};
int main (void){
	struct Alunos alunos[5];
	int i=0;
	float maiornota1=0;
	float maiormedia=0;
	float menormedia=999;
	const float aprovacao=6;
	printf("\n------------------- Entrada de Dados --------------------\n\n");
	
	for(i=0;i<5;i++){
		printf("Informe a matricula do aluno %d: ",i+1);
		scanf(" %d",&alunos[i].matricula);
		
		printf("Informe o nome do aluno %d: ",i+1);
		scanf(" %50[^\n]",&alunos[i].nome);
		
		printf("Informe a nota1 do aluno %d: ",i+1);
		scanf(" %f",&alunos[i].nota1);
		
		printf("Informe a nota2 do aluno %d: ",i+1);
		scanf(" %f",&alunos[i].nota2);
		
		printf("Informe a nota3 do aluno %d: ",i+1);
		scanf(" %f",&alunos[i].nota3);
		
		printf("\n\n");
	}
	
	/*------------------- Processamento dos Dados --------------------*/
	for(i=0;i<5;i++){
		if(maiornota1 < alunos[i].nota1){
			maiornota1 = alunos[i].nota1;
		}
		if(maiormedia < (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3){
			maiormedia = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
		}
		if(menormedia > (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3){
			menormedia = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
		}
	}
	
	/*------------------- Processamento dos Dados --------------------*/
	
	printf("\n------------------- Saida de Dados --------------------\n\n");
	for(i=0;i<5;i++){
		if(maiornota1 == alunos[i].nota1){
		printf("O aluno com maior nota da primeira prova: %s e sua nota: %.2f\n",alunos[i].nome,maiornota1);	
		}
		if(maiormedia == (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3){
			printf("O aluno com maior media geral: %s e sua nota: %.2f\n",alunos[i].nome,maiormedia);
		}	
		if(menormedia == (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3){
			printf("O aluno com menor media geral: %s com %.2f\n",alunos[i].nome,menormedia);
		}
}
for(i=0;i<5;i++){
if((alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3 >= aprovacao){
			printf("O aluno %s foi APROVADO!\n",alunos[i].nome);
		}else{
			printf("O aluno %s foi REPROVADO!\n",alunos[i].nome);
		}
}
	return 0;
}
