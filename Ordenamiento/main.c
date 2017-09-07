#include <stdio.h>
#include <stdlib.h>

int main()
{
   int Vector[5] ={3,1,4,9,5};  //el primer for es la flecha negra
   int aux;
   int i;
   int j;                           //el segundo for es la flecha azul
   for(i=0;i<4;i++)
   {
       for(j=i+1;j<5;j++)  //j es i+1 por que siempre la flecha azul tiene que estar uno mas al la flecha negra
       {
           if(Vector[i] < Vector[j]) // el mayor siempre a la izquiera para que sea mayor a menor si no seria lo contrario
           {
               aux = Vector[i];
               Vector[i] = Vector[j];
               Vector[j] = aux;
           }
       }
   }
   for(i=0;i<5;i++)
   {
        printf("%d\n", Vector[i]);
   }
 return 0;
}
