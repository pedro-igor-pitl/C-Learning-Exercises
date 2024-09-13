#include <stdio.h>
int main(){
	int cont=105;
	while(cont>0){
		cont--;
		if(cont%5==0){
			printf("%d\n",cont);
		}
	}
	return 0;
}
