/* 17. Cronometro de 60 segundos.
*  Author: David Ruiz
*/
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <windows.h>


int main(){
    int segundos, minutos, horas;    
    segundos = minutos = horas = 0;
    
    while(true){
        if(segundos == 60) {
			minutos++; 
			segundos = 0;
		}
			
        if(minutos == 60) {
			horas++; 
			minutos = 0;
		}
        printf("%dh  %d'  %d \n", horas, minutos, segundos);
        printf("Cronometro = %d", segundos);
        //sleep(1);
        Sleep(1000);
        //clrscr();
        system("cls");        
        
        segundos++;        
    }
    
    return 0;
}       
