/*
* Examen B:
* 1.String (max 100), 2.contar caracteres, 3.contar palabras, 4.Visualizar Ascii 5ª posicion string, 5.Pedir char y contar en string, 6.Menu
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>

#define TAM 100  // Tamaño máximo de la cadena

int palabras(char *cadena);
int contar(char *cadena, char car);

int main(){
	// Variables
	int opcion, num=0;
	char cadena[TAM];
	char car='a';	
	
	printf("Introduce cadena (max. 100): ");
	gets(cadena);
	
	do{		
		printf("\nMENU DE OPCIONES\n");
		printf("----------------\n");
		printf(" 0. Salir\n");
		printf(" 1. Contar Caracteres\n");
		printf(" 2. Contar Palabras\n");
		printf(" 3. Visualizar Ascii 5ª posicion\n");
		printf(" 4. Pedir char a contar\n\nOpcion: ");
		scanf("%d", &opcion);
		
		switch (opcion) {
			case 0:
				system("cls"); // Refrescamos pantalla
				printf("\nGoodBye Guapi\n");
				break;
			case 1:
				system("cls");
				printf("\nCadena: %s\n",cadena); 		
				printf ("\nLongitud de la cadena: %d \n", strlen(cadena)); // Usamos la funcion strlen de la libreria string.h
				printf("\n");
				break;
			case 2:
				system("cls");
				printf("\nCadena: %s\n",cadena); 		
				printf ("\nNº Palabras: %d \n", palabras(cadena));
			    break;
			case 3:
				system("cls");
				printf("\nCadena: %s\n",cadena);
				printf("\nEl caracter de la quinta posicion: '%c' \n",cadena[4]);
				break;
			case 4:
				system("cls");
				printf("\nCadena: %s\n",cadena);
				printf("\nIntroduce caracter a contar: ");
				scanf("%car", &car);
				num=contar(cadena, (char)car);
				printf ("\nEl caracter '%c' se repite %d veces.\n",car, num);				
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

// Funcion palabras, recibe una cadena y devuelve el nº de palabras
int palabras(char *cadena){
	int i=0, words=0;
	while (i<strlen(cadena)){
		if (cadena[i]==' ' && i<strlen(cadena) && cadena[i+1]!=' '){
			words++;
		}
		i++;
	} 
	return words+1;
}

// Funcion contar, recibe cadena y un caracter y devuelve el nº de veces que aparece
int contar(char *cadena, char car){
	int cont=0;
	for(int i=0; i<strlen(cadena); i++)
 		if(cadena[i]==car) cont++;
 	return cont;
}
