/* 12. Pedir 5 numeros y mostrar menu que multiplique el array por 2, la media y el mayor.
*  Author: David Ruiz
*/
#include <stdio.h>

#define SIZE 5


float media(int n[SIZE]);
int max(int a, int b);
int mayor(int n[SIZE]);

int main(){
	// Variables
	int numeros[SIZE], opcion;	
	
	printf("Introduce 5 valores separados por espacio: ");
	scanf("%d %d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4]);	
	
	do{		
		printf("\nMENU DE OPCIONES\n");
		printf("----------------\n");
		printf(" 0. Salir\n");
		printf(" 1. Ver Array\n");
		printf(" 2. Multiplica x 2\n");
		printf(" 3. Media\n");
		printf(" 4. Mayor\n");
		scanf("%d", &opcion);
		
		switch (opcion) {
			case 0:
			  printf("\nBye\n");
			  break;
			case 1:
			  for(int i=0; i<SIZE; i++){
					printf("%d\t", numeros[i]);				
			  }
			  break;
			case 2:
			  for(int i=0; i<SIZE; i++){
			  		numeros[i]*=2;
					printf("%d\t", numeros[i]);				
			  }
			  break;
			case 3:
			  printf("\nMedia = %.2f \n", (float) media(numeros));
			  break;
			case 4:
			  printf("\nMayor = %d \n", mayor(numeros));
			  break;
			default:
			  printf("Opcion Erronea \n");
			  break;
		}		
	} while(opcion!=0);
	
			
	scanf("%s");
	return 0;
}


// Funcion Media, recibe un array y devuelve la media
float media(int n[SIZE]){
	float m=0.0;
	int i;
	for(i=0; i<5; i++){
		//printf("%d", *n);
		m+= n[i];				
	}
	return (float) (m/SIZE);
}

// Funcion Max, recibe dos numeros y devuelve el mayor
int max(int a, int b){
	return a>b? a : b;
}

// Funcion Mayor, recibe un array y devuelve el mayor
int mayor(int n[SIZE]){
	int m=0;	
	//m=max(max(max(n[0], n[1]), max(n[2], n[3])), n[4]);
	
	for (int i=0; i<SIZE; i++){
		//m= (max(n[i], m);
		m= m>n[i]? m : n[i];
	}
	
	return m;
}