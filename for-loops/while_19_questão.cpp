#include <stdio.h>
int main(void){
 int cont=1,result_par=0,num=0,result_impar=0;
	do{
		printf("Informe o numero %d: \n",cont);
		scanf("%d",&num);
		cont++;
		if(num%2==0){
			result_par++;
		}else{
			result_impar++;
		}
	}while(cont<=6);
	printf("O numero de par e: %d",result_par);
	printf("O numero de impar e: %d",result_impar);
		return 0;
	}


