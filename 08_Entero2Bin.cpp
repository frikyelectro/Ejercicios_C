/* 8. Pedir entero (Max. 16bits) y obtener el binario.
*  Author: David Ruiz
*/
#include <stdio.h>


void binario(long n, int *b);

int main(){
	int bin[16]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	//int bin[16];
	long num=0;
	
	do{
		printf("Introduce un numero Entero (<32768): ");
		scanf("%d", &num);
	} while(num>32768);	
	
	binario(num, bin);
	
	printf("Decimal: %d  \nBinario:\t", num);	
	for(int i=15; i>=0;i--){
		printf("%d ", bin[i]);
	}
	
	scanf("%c");
	return 0;
}

void binario(long n, int *b){	 
	long sum=0, exp=1, resto=0;	
	int i=0, *pBin=b;	
	
	do{
		resto = n % 2;
		n = n / 2;
		//sum += resto * exp;
		//b[i]=sum;
		b[i]=resto;
		i++;
		exp = exp * 10;
	}while (n > 0);	
	//return *b;
}