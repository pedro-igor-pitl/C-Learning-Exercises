#include <stdio.h>
int main(void){
	int i=-3;
	do{
		i+=3;
		printf(" [%d] ",i);
		
	}while(i<30);
	printf("ACABOU!");
	return 0;
}
