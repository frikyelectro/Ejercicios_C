/* 7. Pedir numero e indicar si es primo.
*  Author: David Ruiz
*/
#include <stdio.h>

int primo(int n);

int main(){
	int num=0;
	printf("Introduce un numero Natural: ");
	scanf("%d", &num);
	
	if (primo(num)==1){  // Tambien valdría la condicion (primo(num)) ya que 1 equivale a true
		printf("\nEs un numero primo");
	} else{
		printf("\nNo es un numero primo");
	}
	
	scanf("%c");
	return 0;
}

// Funcion Primo, recibe un numero y devuelve 1 si es primo y 0 en caso contrario
int primo(int n){
	for (int i=2; i<n; i++){
		if (n%i==0){
			return 0; // Salimos del bucle si vemos que no es primo
		}
	}
	return 1;
}