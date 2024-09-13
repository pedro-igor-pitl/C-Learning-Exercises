#include <stdio.h>

int num_posit_negat(int num){
	if(num > 0){
	return 1;	
	}else if(num < 0){
		return -1;
	}else{
		return 0;
	}
	}
	int main(void) {
		int num=0;
		printf("Informe um numero: ");
		scanf(" %d",&num);
		
		int result = num_posit_negat(num);
		
		printf("O numero é: %d",result);
			return 0;
	}


