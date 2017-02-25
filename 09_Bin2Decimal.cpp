/* 9. Pedir binario de 8 bits) y obtener el decimal.
*  Author: David Ruiz
*/
#include <stdio.h>
#include <math.h>


int decimal(int *b);

int main(){
	int bin[8]= {0, 0, 0, 0, 0, 0, 0, 0};
	
	printf("Introduce Binario de 8 bits separado por espacios: ");
	scanf("%d %d %d %d %d %d %d %d", &bin[0], &bin[1], &bin[2], &bin[3], &bin[4], &bin[5], &bin[6], &bin[7]);
	
	printf("Binario: ");	
	for(int i=0; i<8;i++){
		printf("%d ", bin[i]);
	}
	printf("\nDecimal: %d", decimal(bin));
	
	scanf("%c");
	return 0;
}


int decimal(int *b){	 
	int num=0;
	for(int i=0; i<8; i++){
		num = num + b[i] * pow(2, 7-i);
	}	
	return num;
}