#include <stdio.h>
struct Cadast{
	char nome[50];
	char endereco[50];
	char RG[12];
	char telefone[16];
	int idade;
	char CPF[14];
	float salario;
	char estadocivil[50];
	char sexo;
};

int main (void)
{
	struct Cadast cadast[1];
	int i=0;
	
	printf("\n------------------- Entrada de Dados ------------------\n\n");
	
	for(i=0;i<1;i++){
		printf("Nome %d: ",i+1);
		scanf(" %50[^\n]",&cadast[i].nome);
		
		printf("Endereco %d: ",i+1);
		scanf(" %50[^\n]",&cadast[i].endereco);
		
		printf("RG %d: ",i+1);
		scanf(" %12[^\n]",&cadast[i].RG);
		
		printf("Telefone %d: ",i+1);
		scanf(" %16[^\n]",&cadast[i].telefone);
		
		printf("Idade %d: ",i+1);
		scanf(" %d",&cadast[i].idade);
		
		printf("CPF %d: ",i+1);
		scanf(" %14[^\n]",&cadast[i].CPF);
		
		printf("Salario %d: ",i+1);
		scanf(" %f",&cadast[i].salario);
		
		printf("Estado civil %d: ",i+1);
		scanf(" %50[^\n]",&cadast[i].estadocivil);
		
		printf("Sexo(M/F) %d: ",i+1);
		scanf(" %c",&cadast[i].sexo);
	}
	
	printf("\n\n");
	
	printf("\n------------------- Saida de Dados ------------------\n\n");
	
	for(i=0;i<1;i++){
		printf("Nome %d: %s\n",i+1,cadast[i].nome);
		printf("Endereco %d: %s\n",i+1,cadast[i].endereco);
		printf("RG %d: %s\n",i+1,cadast[i].RG);
		printf("Nome %d: %s\n",i+1,cadast[i].nome);
		printf("Telefone %d: %s\n",i+1,cadast[i].telefone);
		printf("Idade %d: %d\n",i+1,cadast[i].idade);
		printf("CPF %d: %s\n",i+1,cadast[i].CPF);
		printf("Salario %d: %f\n",i+1,cadast[i].salario);
		printf("Estado civil %d: %s\n",i+1,cadast[i].estadocivil);
		printf("Sexo %d: %c\n",i+1,cadast[i].sexo);
	}
	
	return 0;
}
