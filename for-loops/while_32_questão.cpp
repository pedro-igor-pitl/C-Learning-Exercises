#include <stdio.h>

int main (void) {
  char continuar;
  int i=0, num=0;
  int cont;
  float total=0,soma=0;
 
  do {
    printf("Informe o numero: ");
    scanf(" %d",&num);
    if(num) {
    cont++;
    soma += num;
    }
    	printf("Quer continuar (S/N)?!\n");
		scanf(" %c",&continuar);
		
		if(continuar=='n' || continuar=='n'){
			break;
		}
  }while(i<1);
   total = soma / cont;

  	printf("[%f] E a media entre todos os valores.\n",total);
}
