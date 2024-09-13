#include <stdio.h>
int main(){
	int cont=0,num;
	
	printf("Informe um numero inteiro e positivo qualquer: ");
	scanf("%d",&num);
	
	while(cont<num){
		cont++;
		printf("%d\n",cont);
	}
	return 0;
}
