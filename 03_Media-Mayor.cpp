/* 3. Pedir tres numeros y calcular la media y el mayor.
*  Author: David Ruiz
*/
#include <stdio.h>

float media(float a, float b, float c);
float mayor (float a, float b, float c);

void main(){
	float a=0, b=0, c=0;
	printf("Introduce 3 numeros (separados por espacio):  ");
	scanf("%f %f %f", &a, &b, &c);

	printf("\nMedia: %f   Mayor: %f \n", media(a, b, c), mayor(a, b, c));
	
	scanf("%s");
}

// Funcion Media, recibe 3 numeros y devuelve la media
float media(float a, float b, float c){
	return (a+b+c)/3;
}

// Funcion Mayor, recibe 3 numeros y devuelve el mayor
float mayor (float a, float b, float c){
	float max=0;	
	// Operador ternario (equivalente if-else)
	// (Condicion)? Instrucciones si es true : Instrucciones si es false;
	max = a>b? a: b;
	max = max>c? max: b;
	return max;
}