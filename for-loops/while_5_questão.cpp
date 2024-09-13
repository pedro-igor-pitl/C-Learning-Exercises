#include <stdio.h>
int main (void){
	int i=0, sexo=0, mulher_cadast=0, homens_mais_100=0, maior_peso_homens=0;
	float peso=0.0,media_peso_mulher=0.0,soma=0.0;
	printf("(1 - Masculino | 2 - Feminino)\n");
	for(i=0;i<8;i++){
		printf("Informe seu sexo: ");
		scanf("%d",&sexo);
		if(sexo==2){
		mulher_cadast++;
		}
		printf("Informe seu peso: ");
		scanf("%f",&peso);
		if(sexo==1 && peso>100){
			homens_mais_100++;
		}
		if (sexo==2){
			soma+=peso;
		}
		if(sexo == 1 && peso > maior_peso_homens){
			maior_peso_homens=peso;
		}
	}
	media_peso_mulher = soma / 8;
	printf("%d Mulher(es) foi(ram) cadastrada(s)\n",mulher_cadast);
	printf("%d Homen(s) pesa(m) mais de 100Kg\n",homens_mais_100);
	printf("%f E a media de peso entre as mulheres\n",media_peso_mulher);
	printf("%d E o maior peso entre os homens",maior_peso_homens);
	return 0;
}
