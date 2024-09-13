#include <stdio.h>
int main (void){
	int i=0;
	float peso=0, altura=0, peso_mais=0, peso_altura_menos=0, altura_peso_mais=0, result,altura_total;

	printf("O peso e a altura de 7 pessoas\n");
	printf("******************************\n");
	
	while(i<7){
		i++;
		
		printf("Informe o peso da pessoa %d: \n",i);
		scanf("%f",&peso);
		printf("Informe a altura da pessoa %d: \n",i);
		scanf("%f",&altura);
		
		altura_total+=altura;
		
		if(peso > 90){
			peso_mais++;
		}
		
		if(peso < 50 && altura < 1.60){
			peso_altura_menos++;
		}
		
		if(altura > 1.90 && peso > 100){
			altura_peso_mais++;
		}
	}
	result = altura_total / 7;
	printf("%f E a media de altura do grupo\n",result);
	printf("***************************************************\n");
	printf("%f E o numero de pessoa(s) que pesa(m) mais de 90Kg\n",peso_mais);
	printf("***************************************************\n");
	printf("%f E o numero de pessoa(s) que pesa(m) menos de 50Kg e tem menos de 1.60m.\n",peso_altura_menos);
	printf("***************************************************\n");
	printf("%f E o numero de pessoa(s) que mede(m) mais de 1.90m e pesa(m) mais de 100Kg.\n",altura_peso_mais);
	printf("***************************************************\n");
	
	return 0;
}
