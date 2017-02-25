/* 4. Pedir numero y pasarlo a octal y hexadecimal.
*  Author: David Ruiz
*/
#include <stdio.h>


void main(){
	int num=0;
	printf("Introduce un numero:  ");
	scanf("%d", &num);
	
	// En C la conversion entre codigos es directa, %o -> octal, %x -> hexadecimal
	printf("\nEl numero Decimal: %d  Pasado a Octal: %o  y en Hexadecimal: %x \n", num, num, num);
	scanf("%s");
}