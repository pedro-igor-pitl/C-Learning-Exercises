#include <stdio.h>
int main (void){
	int i=0, num=0,continuar=0, intervalo1=0, intervalo2=0, intervalo3=0, intervalo4=0;
	printf("(Digite um numero positivo - para continuar | Digite um numero negativo - para parar)\n");
	while(i<1){
		printf("Informe um numero: ");
		scanf("%d",&num);
		if(num>=0 && num<=25){
			intervalo1++;
		}
		if(num>=26 && num<=50){
			intervalo2++;
		}
		if(num>=51 && num<=75){
			intervalo3++;
		}
		if(num>=76 && num<=100){
			intervalo4++;
		}
		printf("Quer continuar!?");
		scanf("%d",&continuar);
		if(continuar < 0){
			break;
		}
	}
	printf("[%d] E a quantidade de numeros que esta entre o intervalo de [0-25]\n",intervalo1);
	printf("[%d] E a quantidade de numeros que esta entre o intervalo de [26-50]\n",intervalo2);
	printf("[%d] E a quantidade de numeros que esta entre o intervalo de [51-75]\n",intervalo3);
	printf("[%d] E a quantidade de numeros que esta entre o intervalo de [76-100]\n",intervalo4);
	return 0;
}
