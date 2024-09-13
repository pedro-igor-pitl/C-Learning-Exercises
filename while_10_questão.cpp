#include <stdio.h>
int main(){
	int cont=-3;
	
	while(cont<18){
		cont++;
		if(cont%3==0){
			printf("%d\n",cont);
		}
	}
	return 0;
}
