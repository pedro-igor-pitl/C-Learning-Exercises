#include <stdio.h>
int main (void){
	int i=0, soma=0;
	for(i=0;i<500;i++){
		if(i % 2 != 0 && i % 3 == 0){
			soma+=i;
		}
	}
	printf("[%d] E a soma de todos os numeros impares multiplos de tres no intervalo de 1 a 500",soma);
	return 0;
}
