/* 13. Pedir cadena de caracteres y caracter a buscar, indicar cuantas veces se repite, longitud y nº de palabras.
*  Author: David Ruiz
*/
#include <stdio.h>
#include <string.h>

#define TAM 1024


int palabras(char *cadena);
int contar(char *cadena, char car);


int main(){
	char cadena[TAM], c;
	
	printf("Introduce una cadena de caracteres: ");
	gets(cadena);
	//scanf("%s", &cadena);	
	/*
	do{
		scanf("%c", &cadena[i]);
		i++;
	}while(cadena[i]==fin);
	*/	
	
 	printf("\nCadena: %s\n",cadena); 		
	printf ("\nLongitud de la cadena: %d, Nº Palabras: %d \n", strlen(cadena), palabras(cadena));
	
	printf("\nIntroduce caracter a contar: ");
	scanf("%c", &c);
	printf ("\nEl caracter '%c' se repite %d veces.", c, contar(cadena, c));
			
	scanf("%s");
	return 0;
}


// Funcion palabras, recibe una cadena y devuelve el numero de palabras
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

// Funcion contar, recibe cadena y un caracter y devuelve el numero de veces que aparece
int contar(char *cadena, char car){
	int cont=0;
	for(int i=0; i<strlen(cadena); i++)
 		if(cadena[i]==car) cont++;
 	return cont;
}

// Funcion contarVocales 
int contarVocales(char *cad){    
	int cont=0, i=0;
	while(i<strlen(cad)){     
	    if(cad[i]=='a'||cad[i]=='e'||cad[i]=='i'||cad[i]=='o'||cad[i]=='u') 
	    	cont++;
		i++;               
	}   
	return cont;
}

/* devuelve la cantidad de caracteres en cadena sin contar el '\0' */
int longitud(char *cadena){
	//sizeof(cadena);  devuelve la longitud total reservada
	int largo=0;
	while (cadena[largo]!='\0'){
		largo++;
	} 
	return largo;
}
