#include <stdio.h>
struct Func
{
	char nome[50];
	int idade;
	char sexo;
	char cpf[14];
	char datanasci[10];
	char codisetor[2];
	char cargo[30];
	float salario;
};
int main (void)
{
	struct Func func;
	int i=0,j=0;
	
	printf("\n---------------------- Entrada de Dados ----------------------\n\n");
	
	printf("Informe o seu nome: ");
	scanf(" %50[^\n]",&func.nome);
	
	printf("Informe o seu sexo (M/F): ");
	scanf(" %c",&func.sexo);
	
	printf("cpf: ");
	scanf(" %14[^\n]",&func.cpf);
	
	printf("Data de Nascimento: ");
	scanf(" %10[^\n]",&func.datanasci);
	
	printf("Codigo do Setor onde trabalha: ");
	scanf(" %2[^\n]",&func.codisetor);
	
	printf("Cargo que ocupa: ");
	scanf(" %30[^\n]",&func.cargo);
	
	printf("Informe o seu salario: ");
	scanf(" %f",&func.salario);
	printf("\n---------------------- Saida de Dados ----------------------\n\n");
	
	printf("Nome: %s\n",func.nome);
	
	printf("Sexo: %c\n",func.sexo);
	
	printf("CPF: ");
	for(i=0;i<14;i++)
	{
		printf("%c",func.cpf[i]);
    }
	printf("\n");
	
	printf("Data de Nascimento: ");
	
	for(i=0;i<10;i++)
	{
		printf("%c",func.datanasci[i]);
	}
	printf("\n");
	
	printf("Codigo do Setor onde trabalha: ");
	for(i=0;i<2;i++){
		printf("%c",func.codisetor[i]);
	}
	printf("\n");
	
	printf("Cargo que ocupa: %s\n",func.cargo);
	
	printf("Salario: %f\n",func.salario);
	return 0;
}
