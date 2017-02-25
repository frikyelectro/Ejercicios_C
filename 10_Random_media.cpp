/* 10. Generar Array 20 aleatorios en filas de 10, indicando media y mayor.
*  Author: David Ruiz
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 101;


int main(){
	// Variables
	int numeros[20];
	int media=0, mayor=0;
	
	//randomize(time(NULL)); Valido en Turbo_C
	srand(time(NULL)); // Le pasamos la hora actual como semilla	
	
	for (int i=0; i<20; i++){		
		numeros[i]=rand()% MAX;
		media+=numeros[i];
		mayor= mayor>numeros[i]? mayor : numeros[i];
	}
	
	printf("Numeros Aleatorios\n");
	printf("--------------------\n");
	
	for(int i=0; i<20; i++){
		printf("%d\t", numeros[i]);
		if(i==9){
			printf("\n");
		}
	}
	
	printf("\nMedia = %d \t Mayor = %d", (media/20), mayor);
			
	scanf("%s");
	return 0;
}
