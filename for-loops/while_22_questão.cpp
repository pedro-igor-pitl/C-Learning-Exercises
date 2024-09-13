#include <stdio.h>
int main (void){
	int i2=0, i=0, idade=0, maior_18=0, menor_5=0, maior_idade=0;
	printf("Informe a idade de 10 pessoas: \n");
	
	while(i<10){
		i++;
		scanf("%d",&idade);
		if(idade > 18){
			maior_18++;
		}
		if(idade < 5){
			menor_5++;
		}
		if(idade > maior_idade){
			maior_idade=idade;
		}
}
	printf("%d Tem mais de 18 anos.\n",maior_18);
	printf("%d Tem menos de 5 anos.\n",menor_5);
	printf("%d Foi a maior idade.\n",maior_idade);
return 0;
}
