#include <stdio.h>
int main (void){
	int k,i;
	printf("k-esima letra = 6.\n");
	char mensagem [50];
	
	printf("Informe uma mensagem: ");
	gets(mensagem);
	
	printf("Informe o valor do k: ");
	scanf("%i",&k);
	
	for(i=0;i<mensagem[i];i++){
		if(mensagem[i]){
			mensagem[i]+=k;	
	}	
}
printf("Codificado: %s\n",mensagem);
return 0;
}
