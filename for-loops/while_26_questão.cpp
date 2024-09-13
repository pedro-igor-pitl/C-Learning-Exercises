#include <stdio.h>
int main (void){
	int i=0,cont,continuar;
	float salario, salario_homen,salario_mulher;
	char sexo;
	printf("M - para Masculino | F - para Feminino\n");
	printf("1 - para Continuar | 0 - para Parar\n");
	
	while(i<1){
		printf("Informe o salario da pessoa: ");
		scanf("%f",&salario);
		
		printf("Informe o sexo da pessoa (m/f): ");
		scanf(" %c",&sexo);
		if(sexo=='m' || sexo=='M'){
			salario_homen+=salario;
		}
		if(sexo=='f' || sexo=='F'){
			salario_mulher+=salario;
		}
		printf("\n");	
		printf("Quer continuar (1/0)?! ");
		scanf("%d",&continuar);
		if(continuar==0){
			break;
		}
	}
	
	printf("%f E o total de salarios pagos aos homens.\n",salario_homen);
	printf("%f E o total de salarios pagos as mulheres.\n",salario_mulher);
	return 0;
}
