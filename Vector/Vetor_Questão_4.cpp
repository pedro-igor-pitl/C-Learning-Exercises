#include <stdio.h>
int main (void){
	int i, vetor[10], vetor2[10], vetor3[10];
	printf("VETOR I\n");
	for (i=0;i<10;i++){
		printf("Informe o vetor %d: ",i+1);
		scanf("%d",&vetor[i]);
	}
	printf("VETOR II\n");
	for (i=0;i<10;i++){
		printf("Informe o vetor %d: ",i+1);
		scanf("%d",&vetor2[i]);
	}
	printf("VETORES IGUAIS!\n");
	for (i=0;i<10;i++){
		if(vetor[i]==vetor2[i]){
			 printf(" [%d] \n",vetor[i]);
		}
	}
	return 0;
}
