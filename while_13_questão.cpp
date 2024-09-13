#include <stdio.h>
int main(){
	int cont=31;
	while(cont>1){
		cont--;
		printf(" %d ",cont);
		if(cont%4==0)
			printf(" [%d] ",cont);
		
	}
	return 0;
}
