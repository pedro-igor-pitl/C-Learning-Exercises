#include <stdio.h>

int numeroDobro(int numero){
	return numero*2;
}

int main(void){
	int numero;
	printf("Informe um numero: ");
	scanf(" %d",&numero);
	
	int result = numeroDobro(numero);
	
	printf("O dobro e: %d",result);
	return 0;
}
