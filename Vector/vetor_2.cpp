#include <stdio.h>
int main (void){
	char caracteres[100];
	
	printf("Informe uma cadeia de caracteres: ");
	gets(caracteres);
	
	printf("%s",caracteres);
	return 0;
}
