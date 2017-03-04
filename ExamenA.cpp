/*
* Examen A:
* 1.Cadena nombre, 2.Array aleatorios 10-60, 3.Media, 4.Mayor, 5.Pedir num 10-60 verificando, 6.Menu, 7."Hasta Pronto, 'nombre'"
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define SIZE 50  //Tamaño máximo del array
#define TAM 80  // Tamaño máximo de la cadena

float media(int n[SIZE]);  // Pasamos el array por valor
int mayor(int n[SIZE]); 
void randome(int *n);  // Pasamos el array por referencia
void randome2(int *n);

int main(){
	// Variables
	int numeros[SIZE], opcion, num=0;
	char nombre[TAM];
	
	srand(time(NULL)); //Arrancamos semilla de los aleatorios
	
	printf("Dime tu nombre chavalote: ");
	gets(nombre);
	
	do{		
		printf("\nMENU DE OPCIONES\n");
		printf("----------------\n");
		printf(" 0. Salir\n");
		printf(" 1. Generar Array [10-60]\n");
		printf(" 2. Media\n");
		printf(" 3. Mayor\n");
		printf(" 4. Pedir numero [10-60]\n");
		scanf("%d", &opcion);
		
		switch (opcion) {
			case 0:
				system("cls"); // Refrescamos pantalla
				printf("\nSayonara %s\n", nombre);
				break;
			case 1:
				system("cls");
				randome(numeros); // si se pidiera sin repetidos usariamos randome2
				printf("**** Array aleatorio [10-60] ****\n");
				for(int i=0; i<SIZE; i++){
					printf("%d\t", numeros[i]);				
				}
				printf("\n");
				break;
			case 2:
				system("cls");
				printf("\nMedia = %.2f \n", media(numeros));
			    break;
			case 3:
				system("cls");
				printf("\nMayor = %d \n", mayor(numeros));
				break;
			case 4:
				system("cls");
				do{
					printf("Introduce numero entre 10 - 60: ");
					scanf("%d", &num);
					if((num<10) || (num>60))
						printf("Rango Incorrecto\n");
				} while((num<10) || (num>60));				
				break;
			default:
				system("cls");
				printf("Opcion Erronea \n");
				break;
		}		
	} while(opcion!=0);
			
	scanf("%s");
	return 0;
}


// Funcion Randome genera el array, se pasa por referencia el array
void randome(int *n){	
	//Inicializacion de variables
	int temp=0, i=0;
	
	for(int i=0; i<SIZE;i++){	
		n[i]=(rand()% SIZE+1)+10; //Resto de 51= [0-50] + 10 => rango pedido [10-60]
	} 
}


// Funcion Randome2 genera el array sin repes, se pasa por referencia el array
void randome2(int *n){	
	//Inicializacion de variables
	int temp=0, repetido=0, i=0;
	
	do{	
		n[i]=0;
		temp=(rand()% SIZE+1)+10;
		for(int j=0; j<i; j++){			
			if(n[j]==temp)
				repetido++;
		}
		if (repetido==0){
			n[i]=temp;
			i++;		
		}			
		repetido=0;
	} while(i<SIZE);
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


// Funcion Mayor, recibe un array y devuelve el mayor
int mayor(int n[SIZE]){
	int m=0;
	for (int i=0; i<SIZE; i++){
		//m= (max(n[i], m);
		m= m>n[i]? m : n[i];
	}	
	return m;
}
