#include <stdio.h>
int main(void){
	int i=0,idade=0, maior_idade=0,cont_homen,mulher_jovem=999,cont=0;
	char sexo,continuar;
	float media_homen=0, soma=0;
	printf("S - Continuar | N - Parar\n");
	printf("M - Masculino | F - Feminino\n");
	
	while(i<1){
		
		printf("Informe o sexo (M/F): ");
		scanf(" %c",&sexo);
		if(sexo=='M' || sexo=='m'){
			cont_homen++;
		}
		printf("Informe a idade: ");
		scanf("%d",&idade);
		if(idade>maior_idade){
			maior_idade=idade;
		}
		if(sexo=='F' || sexo=='f' && idade<mulher_jovem){
			mulher_jovem=idade;
		}
		if(sexo=='M' || sexo=='m' && idade){
			soma+=idade;
			cont++;
		}
		printf("Continuar(S/N)?! ");
		scanf(" %c",&continuar);
		if(continuar=='n' || continuar=='N'){
			break;
		}
	}
	printf("%d E a maior idade lida.\n",maior_idade);
	printf("%d Homen(s) foi(ram) cadastrado(s).\n",cont_homen-1);
	printf("%d E a idade da mulher mais jovem.\n",mulher_jovem);
	media_homen = soma / cont;
	printf("%f E a media de idade entre os homens.\n",media_homen);
	return 0;
}
