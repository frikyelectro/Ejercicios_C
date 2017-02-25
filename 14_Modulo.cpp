/* 14. Pedir coordenadas x e y, calcular el modulo en una funcion.
*  Author: David Ruiz
*/
#include <stdio.h>
#include <math.h>

// Funcion Modulo, recibe dos coordenadas y devuelve el modulo
float modulo(int a, int b){
	return sqrt(a*a+b*b);
}

int main(){	
	// Variables
	int x=0, y=0;
		
	printf("Introduce las coordenadas X e Y separadas por espacio: ");
	scanf("%d %d", &x, &y);	
	
	printf("El Modulo |(%d, %d)| = %.2f", x, y, modulo(x,y));	
			
	scanf("%s");
	return 0;
}