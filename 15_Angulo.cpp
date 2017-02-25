/* 15. Pedir coordenadas x e y, calcular el angulo en una funcion.
*  Author: David Ruiz
*/
#include <stdio.h>
#include <math.h>


float angulo(int a1, int b1, int a2, int b2);

int main(){	
	int x1=0, y1=0, x2=0, y2=0;
		
	printf("Introduce la 1ª coordenada X e Y separadas por espacio: ");
	scanf("%d %d", &x1, &y1);	
	printf("Introduce la 2ª coordenada X e Y separadas por espacio: ");
	scanf("%d %d", &x2, &y2);
	
	printf("El Angulo entre (%d, %d) y (%d, %d) = %.2f", x1, y1, x2, y2, angulo(x1, y1, x2, y2));	
			
	scanf("%s");
	return 0;
}

// Funcion Angulo, recibe dos puntos de una recta y devuelve el angulo respecto al eje X
float angulo(int a1, int b1, int a2, int b2){
	if ((a2-a1)==0)
		return 0;
		
	return atan((b2-b1)/(a2-a1));
}