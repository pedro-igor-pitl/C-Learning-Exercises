#include <stdio.h>
int main(void){
	int i=0;
	float prod=0, maior_prod=0, menor_prod=999;
	while(i<8){
		i++;
		printf("Informe o valor do produto: ");
		scanf("%f",&prod);
		if(prod > maior_prod){
			maior_prod=prod;
		}
		if(prod < menor_prod){
			menor_prod=prod;
		}
	}
	printf("%f E o maior valor\n",maior_prod);
	printf("%f E o menor valor\n",menor_prod);
	return 0;
}
