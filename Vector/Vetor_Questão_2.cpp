#include <stdio.h>
int main (void){
	int i, vetor[10], vetor_soma=0;
	for(i=0;i<10;i++){
		printf("Informe o vetor %d: ",i+1);
		scanf("%d",&vetor[i]);
		vetor_soma+=vetor[i];
	}
	printf("A soma dos vetores e: [%d]",vetor_soma);
}
