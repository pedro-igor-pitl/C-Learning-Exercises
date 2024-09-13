#include <stdio.h>
int main(void){
	int cont=0,num=0,resultado=0;
	
	while(cont<7){
	cont++;
	printf("Informe o numero %d: ",cont);
	scanf("%d",&num);
	resultado+=num;
	}
			
	printf("A somatoria entre eles e: %d",resultado);
	
	return 0;	
}
