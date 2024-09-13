#include <stdio.h>
int main (void){
	int i=0;
	float altura=0, maior_num=0, menor_num=999;
	
	while(i<15){
		i++;
		printf("Informe a altura da pessoa %d: ",i);
		scanf("%f",&altura);
		if(altura>maior_num){
			maior_num=altura;
		}
		if(altura<menor_num){
			menor_num=altura;
		}
	}
	printf("%f E o maior numero\n",maior_num);
	printf("%f E o menor numero\n",menor_num);
	return 0;
}
