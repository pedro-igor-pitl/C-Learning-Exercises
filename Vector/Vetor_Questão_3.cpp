#include <stdio.h>
int main (void){
	int i, vetor[10];
	
	for(i=0;i<10;i++){
		printf("Informe o vetor %d: ",i+1);
		scanf("%d",&vetor[i]);
	}
	for(i=0;i<10;i++){
		printf(" [%d] ",vetor[9-i]);
	}
}
