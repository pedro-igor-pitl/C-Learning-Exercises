#include <stdio.h>
int main(void){
	int cont=550,soma;
	while(cont>0){
		cont-=50;
		printf("%d + ",cont);
		soma+=cont;
	}
	printf("= %d",soma);
	return 0;
}
