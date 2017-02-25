/* 6. Pedir 3 binarios y calcular S = ABC + !(AB)C + A!C.
*  Author: David Ruiz
*/
#include <stdio.h>

int main(){
	int a, b, c, s;
	do{
		printf("Introduce tres valores binarios (0, 1 separados por espacio): ");
		scanf("%d %d %d", a, b, c);
		if ((a!=0 || a!=1) && (b!=0 || b!=1) && (c!=0 || c!=1)){
			printf("/n Valores Incorrectos, solo 0 y 1.../n");
		}
	} while((a!=0 || a!=1) && (b!=0 || b!=1) && (c!=0 || c!=1));
	
	s= a && b && c || !(a&&b) && c || a && !c; // Operacion Logica
	printf("S = ABC +!(AB)C+ A!C \t Resultado S= %s\n", s);
		
	scanf("%s");
	return 0;
}
