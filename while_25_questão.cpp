#include <stdio.h>
int main (void){
	int i=0, continuar;
	float num, soma, resultado;
	printf("(1 - Continuar | 1111 - Parar)\n");
	/*Crie um programa que leia vários números pelo teclado e mostre no final o somatório entre eles.*/
	while(i<=1){
		printf("Informe um numero: ");
		scanf("%f",&num);
		soma+=num;
		printf("Quer continuar? (1/1111)\n");
		scanf("%d",&continuar);
		if (continuar==1111){
			break;
		} 
	}
	
	printf("A soma e: %f",soma);
	return 0;
}
