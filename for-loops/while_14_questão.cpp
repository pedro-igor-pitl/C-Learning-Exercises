#include <stdio.h>
int main(){
	int primeiro_valor, ultimo_valor, incremento;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&primeiro_valor);
	
	printf("Digite o ultimo valor: ");
	scanf("%d",&ultimo_valor);
	
	printf("Digite o incremento: ");
	scanf("%d",&incremento);
	
	
	while (primeiro_valor<ultimo_valor){
		primeiro_valor=primeiro_valor + incremento;
		printf(" %d ",primeiro_valor);
	}
	
	
	printf("ACABOU!");
	return 0;
	}


