/* 1. Calcular longitud y superficie de circunferencia dado el radio.
*  Author: David Ruiz
*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592

// Funcion Area, recibe el radio y devuelve el area
float area(float r){
	  return (PI*r*r);
}

// Funcion Perimetro, recibe el radio y devuelve el perimetro
float perimetro (float r){
	return (2*r*PI);
}

void main(){
	// Declaracion / Inicializacion de Variables
	float radio=0;
	printf("Introduce el radio:  ");
	scanf("%f", &radio);

	printf("\nPerimetro: %f   Area: %f \n", perimetro(radio), area(radio));
	
	scanf("%s"); // Paramos la ejecucion para poder visualizar el resultado
}