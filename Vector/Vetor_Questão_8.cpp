#include <stdio.h>
int main (void){
	int i;
	float vetor[10] = {1.4,2.4,-4.5,-7.8,-2,1,8.3,9.1,9.2,-1.5}, num_negativ=0, num_positiv=0;
	printf("Numeros Positivos: \n");
	for(i=0;i<10;i++){
		if(vetor[i]>0){
			num_positiv=vetor[i];
			printf(" [%f] \n",num_positiv);
		}
	}
	printf("Numeros Negativos: \n");
	for(i=0;i<10;i++){
		if(vetor[i]<0){
			num_negativ=vetor[i];
			printf(" [%f] \n",num_negativ);
		}
	}	
return 0;
}
/* = {6,7,22,61,55,11,49,96,72,90
 ,41
 ,51
 ,12
 ,21
 ,10
 ,18
 ,69
 ,75
 ,67
 , 7
 ,80
 ,47
 ,71
 ,21
 ,66
 ,96
 ,48
 ,40
 ,39
 ,45
 ,96
 ,44
,100
 ,22
 ,51
 ,11
 ,10
 ,86
 ,52
 ,47
 ,40
 ,21
 ,98
 , 6
 ,60
 ,30
 , 7
 ,60
 ,60
 ,80
 ,56
 ,80
 , 3
 ,36
 ,80
 ,43
 , 9
 ,10
 ,62
 ,31
 ,47
 ,16
 ,94
 ,37
 ,38
 ,30
 , 5
 ,26
 ,38
 ,58
 ,43
 ,85
 ,69
 ,95
 ,88
 ,45
 ,45
 ,54
 ,52
 ,32
 ,60
 ,69
 ,56
 ,62
 ,47
 ,38,9,34,40,94,81,58,23,64,55,45,41,36,69,55}*/
