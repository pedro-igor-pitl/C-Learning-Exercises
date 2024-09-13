#include <stdio.h>
	int i;
int numData (int dia,int mes,int ano){
	
	switch (mes){
		case 1: return printf("Data: %d/%d/%d, Imprimir: %d de janeiro de %d\n", dia, mes, ano, dia, ano);
		break;
		case 2: return printf("Data: %d/%d/%d, Imprimir: %d de fevereiro de %d\n", dia, mes, ano, dia, ano);
		break;
		case 3: return printf("Data: %d/%d/%d, Imprimir: %d de marco de %d\n", dia, mes, ano, dia, ano);
		break;
		case 4: return printf("Data: %d/%d/%d, Imprimir: %d de abril de %d\n", dia, mes, ano, dia, ano);
		break;
		case 5: return printf("Data: %d/%d/%d, Imprimir: %d de maio de %d\n", dia, mes, ano, dia, ano);
		break;
		case 6: return printf("Data: %d/%d/%d, Imprimir: %d de junho de %d\n", dia, mes, ano, dia, ano);
		break;
		case 7: return printf("Data: %d/%d/%d, Imprimir: %d de julho de %d\n", dia, mes, ano, dia, ano);
		break;
		case 8: return printf("Data: %d/%d/%d, Imprimir: %d de agosto de %d\n", dia, mes, ano, dia, ano);
		break;
		case 9: return printf("Data: %d/%d/%d, Imprimir: %d de setembro de %d\n", dia, mes, ano, dia, ano);
		break;
		case 10: return printf("Data: %d/%d/%d, Imprimir: %d de outubro de %d\n", dia, mes, ano, dia, ano);
		break;
		case 11: return printf("Data: %d/%d/%d, Imprimir: %d de novembro de %d\n", dia, mes, ano, dia, ano);
		break;
		case 12: return printf("Data: %d/%d/%d, Imprimir: %d de dezembro de %d\n", dia, mes, ano, dia, ano);
		break;
	}

int main (void){
	int dia,mes,ano;
	printf("Informe o dia: ");
	scanf(" %d",&dia);
	
	printf("Informe o mes: ");
	scanf(" %d",&mes);
	
	printf("Informe o ano: ");
	scanf(" %d",&ano);
	
	int result = numData(dia,mes,ano);
	printf(" %s", result);
	
	return 0;
}

//RESPOSTA DO CHAT GPT: 

/*#include <stdio.h>

void exibir_data_por_extenso(int dia, int mes, int ano) {
    const char* meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    printf("Data: %02d/%02d/%d, Imprimir: %d de %s de %d\n", dia, mes, ano, dia, meses[mes - 1], ano);
}

// Exemplo de uso
int main() {
    exibir_data_por_extenso(1, 1, 2019);
    return 0;
}*/


