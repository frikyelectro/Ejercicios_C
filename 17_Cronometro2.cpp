/* 17. Cronometro de 60 segundos.
*  Author: David Ruiz
*/
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
   time_t t1, t2;
   double diferencia = 0;
   
   int minutos;
   int segundos = 0;
   int temp;
   
   t1 = time(NULL); /* obtener tiempo 1 */
   
   while (diferencia < 120 ){
      t2 = time(NULL); /* obtener tiempo 2 */
      
      diferencia = difftime(t2, t1);
      minutos = diferencia / 60.0;
      segundos = diferencia - minutos * 60;
      
      if (temp != segundos){ /* ha transcurrido un segundo */
         temp = segundos; /* guarda el valor previo */
         system("cls");
         printf("%02d:%02d\n", minutos, segundos);
      }
   }
   
   return EXIT_SUCCESS;
}
