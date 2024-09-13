#include <stdio.h>
int main(void){
	int i,vetor[20],pares=0;
	for(i=0;i<20;i++){
	printf("Informe o numero do vetor %d: ",i+1);
	scanf("%d",&vetor[i]);	
	}
	printf("NUMEROS PARES: \n");
	for(i=0;i<20;i++){
		if(vetor[i]%2==0){
		printf("[%d]",vetor[i]);
	}	
	}
	return 0;
}
