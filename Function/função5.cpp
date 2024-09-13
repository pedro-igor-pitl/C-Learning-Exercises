#include <stdio.h>

float notaAlunos (float nota1, float nota2, float nota3,char letra){
	float media;
	if(letra == 'A' || letra == 'a'){
    return media = (nota1 + nota2 + nota3) / 3;
	 
	} else if(letra == 'P' || letra == 'p'){
   return media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / (5 + 3 + 2);
	} else{
		return 0;
	}
}

int main (void){
	float result;
	float nota1 = 0,nota2 = 0,nota3 = 0;
	char letra;
	
	printf("Informe a nota1: ");
	scanf(" %f",&nota1);
	
	printf("Informe a nota2: ");
	scanf(" %f",&nota2);
	
	printf("Informe a nota3: ");
	scanf(" %f",&nota3);
	
	printf("Digite (A) para media aritmetica e (P) para media ponderada: ");
	scanf(" %c",&letra);
	
     result = notaAlunos(nota1, nota2, nota3, letra);
	
	printf("Media: %.2f",result);
	
	return 0;
}


