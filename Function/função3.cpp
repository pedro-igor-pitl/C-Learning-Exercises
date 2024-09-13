#include <stdio.h>

struct Tempo{
	int horas;
	int minutos;
	int segundos;
}tempo;

int numero_Segundo(struct Tempo tempo){

	return tempo.horas*3600+tempo.minutos*60+tempo.segundos;
}

int main (void){
	printf("Informe a hora: ");
	scanf(" %d",&tempo.horas);
	printf("Informe o minuto: ");
	scanf(" %d",&tempo.minutos);
	printf("Informe o segundo: ");
	scanf(" %d",&tempo.segundos);
	
	int result = numero_Segundo(tempo);
	
	printf("O tempo em segundo e: %d",&result);
	return 0;
}
