/* 16. Bingo que se muestre por pantalla como display.
*  Author: David Ruiz
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define MAX 90


void display(int n);
void bingo(int *n);

int main(){
	
	int numeros[MAX], temp=0, c1=0, c2=0;
	
	srand(time(NULL)); //Arrancamos semilla de los aleatorios
	
	// Generamos el array con los 90 numeros del Bingo
	bingo(numeros); 
	
	
	// Mostramos los 90 numeros con una parada de 5 segundos en cada uno
	for(int i=0; i<MAX; i++){
		printf("***** BINGO *****\n");
		printf("-----------------\n");
		// Imprimimos los numeros con display
		if (numeros[i]<10){
			display(numeros[i]);
			printf("\n\n");
		} else {
			c1=numeros[i]/10;
			c2=numeros[i]%10;
			printf("C1: %d  C2: %d\n\n", c1, c2);
			display(c1);
			printf("\n\n");
			display(c2);
			printf("\n\n");
		}
		// Imprimimos el array hasta el número actual
		for(int j=0; j<=i; j++){
			printf("%d\t", numeros[j]);
			if (j%10>=9){
				printf("\n");
			}					
    	}
    	Sleep(5000);   // Parada de 5 segundos
	    system("cls"); // Refrescamos pantalla
	}
			
			
	scanf("%s");
	return 0;
}

// Funcion Bingo genera el array, se le pasa por referencia el array
void bingo(int *n){	
	//Inicializacion de variables
	int temp=0, repetido=0, i=0;
	
	do{	
		n[i]=0;
		temp=(rand()% MAX)+1;	
		for(int j=0; j<i; j++){			
			if(n[j]==temp)
				repetido++;
		}
		if (repetido==0){
			n[i]=temp;
			i++;		
		}			
		repetido=0;
	} while(i<MAX);
}


// Funcion Display, le pasamos un entero e imprime el numero en Ascii
void display(int n){	
	switch (n){
		case 0:
			printf(" -\n| |\n| |\n -");
			break;
		case 1:
			printf("  |\n  |");
			break;
		case 2:
			printf(" -\n  |\n -\n|\n -");
			break;
		case 3:
			printf(" -\n  |\n -\n  |\n -");
			break;
		case 4:
			printf("| |\n -\n  |");
			break;
		case 5:
			printf(" -\n|\n -\n  |\n -");
			break;
		case 6:
			printf(" -\n|\n -\n| |\n -");
			break;
		case 7:
			printf(" -\n  |\n  |");
			break;
		case 8:
			printf(" -\n| |\n -\n| |\n -");
			break;
		case 9:
			printf(" -\n| |\n -\n  |");
			break;
		default:
			printf("Error\n");
			break;			
	}
}
