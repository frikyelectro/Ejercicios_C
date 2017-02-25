/* 2. Pedir numero y decir si es par.
*  Author: David Ruiz
*/
#include <stdio.h>

// Funcion Par, recibe un numero y devuelve 1 si es par sino 0
int par(int n){
	printf("Valor de la condicion (n%%2==0) es %d", (n%2==0));
	return (n%2==0);	  
}

int main(){

	int num=0;
	printf("Introduce un numero:  ");
	scanf("%d", &num);

	// Al no haber booleanos el 1 es true y el 0 false
	if (par(num))
		printf("\nEl numero %d es par. \n", num);
	else
		printf("\nEl numero %d es impar. \n", num);

	scanf("%s");
	return 0;
}
