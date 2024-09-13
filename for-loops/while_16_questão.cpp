#include <stdio.h>
int main(void){
	int cont=4,soma;
	
	while(cont<=98){
	cont+=2;
		
	printf("%d + ",cont);
	soma = soma + cont;
	}
	printf(" = %d ",soma);
	return 0;
}
