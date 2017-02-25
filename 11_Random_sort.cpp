/* 11. Generar Array de 20 aleatorios y mostrarlos así y ordenados.
*  Author: David Ruiz
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 101
#define SIZE 20


int main(){
	// Variables
	int numeros[SIZE], ordenados[SIZE], temp;
	
	srand(time(NULL)); // Semilla aleatorios
	
	for (int i=0; i<SIZE; i++){		
		numeros[i]=rand()% MAX; 
		ordenados[i]= numeros[i]; // Creamos una copia del array
	}
	
	printf("Numeros Aleatorios\n");
	printf("-------------------\n");
	for(int i=0; i<20; i++){
		printf("%d\t", numeros[i]);
		if(i==9){
			printf("\n");
		}
	}
	
	// Algoritmo de Ordenacion por Burbuja
	for (int i=0; i<SIZE-1; i++){
		for (int j=i+1; j<SIZE; j++){		 
			if (ordenados[i]>ordenados[j]){
				temp= ordenados[i];
				ordenados[i]=ordenados[j];
				ordenados[j]=temp;
			}
		}
	}
	
	printf("\nRandoms Ordenados\n");
	printf("-------------------\n");	
	for(int i=0; i<20; i++){
		printf("%d\t", ordenados[i]);
		if(i==9){
			printf("\n");
		}
	}
	
	scanf("%s");
	return 0;
}
