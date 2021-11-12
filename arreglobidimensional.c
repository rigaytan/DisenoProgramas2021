#include <stdio.h>
#include <conio.h>

int main ()
{           //[i][j]
    int matriz[2][2]; int i = 0; int j = 0;

    for (i=0; i<2; i++) 
    {
        for(j=0; j<2; j++)
        {
          printf("Ingresa el valor de la posicion [%i],[%i]:\n",i,j);
          scanf("%i",&matriz[i][j]);
        }
    }

    for (i=0; i<2; i++) 
    {
        for(j=0; j<2; j++)
        {
          printf("Ingresa el valor de la posicion [%i],[%i]: %i\n",i,j,matriz[i][j]);
        }
    }
}