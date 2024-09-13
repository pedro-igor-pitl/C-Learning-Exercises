#include <stdio.h>
int main (void){
int i, vetor[7], multiplos_2=0, multiplos_3=0, multiplos_2_e_3=0;

for(i=0;i<7;i++){
	printf("Informe o vetor %d: ",i+1);
	scanf("%d",&vetor[i]);
}	
printf("\n");
printf("Os numeros multiplos de 2: ");
for(i=0;i<7;i++){
	if(vetor[i]%2==0){
		printf(" [%d] ",vetor[i]);
	}
}
printf("\n");
printf("Os numeros multiplos de 3: ");
for(i=0;i<7;i++){
	if(vetor[i]%3==0){
		printf(" [%d] ",vetor[i]);
	}
}
printf("\n");
printf("Os numeros multiplos de 2 e 3: ");
for(i=0;i<7;i++){
	if(vetor[i]%3==0 && vetor[i]%2==0){
		printf(" [%d] ",vetor[i]);
	}
}
printf("\n");
return 0;
}
