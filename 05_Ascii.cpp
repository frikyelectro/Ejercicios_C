/* 5. Generar Tabla de los 256 Ascii en octal y hexadecimal.
*  Author: David Ruiz
*/
#include <stdio.h>

int main(){
	printf("\t********Tabla Ascii********\n");
	printf("\t---------------------------\n");
	printf("Decimal\tOctal\tHex\tCaracter\n");
	for(int i=0;i<=255;i++){
		printf("%d\t%o\t%x\t%c\n", i, i, i, i);
	}
	
	scanf("%s");
	return 0;
}
