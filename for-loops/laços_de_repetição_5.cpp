#include <stdio.h>
int main (void){
	int i=0, num=0, pares=0, impares=0, continuar=0, cont=0, cont2=0;
	float media_pares=0, media_geral=0, soma=0, soma2=0;
	printf("(Digite 0 - para parar | Digite qualquer outro numero - para continuar)\n");
	while(i<1){
		printf("Informe um numero: ");
		scanf("%d",&num);
	    cont2++;
		soma2+=num;
		if(num%2==0){
		pares++;	
		cont++;
		soma+=num;
		}
		if(num%2!=0){
		impares++;
		}
		
		printf("Quer continuar!?");
		scanf("%d",&continuar);
		if(continuar==0){
			break;
		}
	}
	media_pares = soma / cont;
	media_geral = soma2 / cont2;
		printf("[%d] E a quantidade de numeros pares\n",pares);
		printf("[%d] E a quantidade de numeros impares\n",impares);
		printf("[%f] E a media de numeros pares\n",media_pares);
		printf("[%f] E a media geral\n",media_geral);
	return 0;
}
