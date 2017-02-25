/* 18. Realizar 6 apuestas de primitiva aleatorias y visualizar en forma de matriz.
*  Author: David Ruiz
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 50
#define COLUMNAS 6
#define APUESTAS 6


// Funcin generadora de combinaciones, se le pasa por referencia el array
void combinacion(int *n){	
	//Inicializacion de variables
	int temp=0, repetido=0, i=0;
	
	do{	
		n[i]=0;
		temp=rand()% MAX;	
		for(int j=0; j<i; j++){			
			if(n[j]==temp)
				repetido++;
		}
		if (repetido==0){
			n[i]=temp;
			i++;		
		}			
		repetido=0;
	} while(i<APUESTAS);
}


int main(){
	// Declaramos el array con las 2 dimensiones
	int combinaciones[COLUMNAS][APUESTAS];
	
	srand(time(NULL));	// Ponemos la semilla para los aleatorios	
	
	// Imprimimos las combinaciones por pantalla
	for(int i=0; i<COLUMNAS; i++){
		combinacion(combinaciones[i]);
		printf("**** Combinacion %d****\n", i+1);
		printf("----------------------\n");
		for(int j=0; j<APUESTAS; j++){
			printf("%d\t", combinaciones[i][j]);
		}
		printf("\n\n");
	}
			
	scanf("%s");
	return 0;
}
