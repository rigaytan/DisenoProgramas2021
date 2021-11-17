#include <stdio.h>
#include <conio.h>

int main ()
{           //[i][j] [filas][columnas]
    int fila = 0;
    int columna = 0;
    int matrizA[fila][columna]; 
    int matrizB[fila][columna];
    int matrizR[fila][columna];
    int i = 0; 
    int j = 0;

    printf("Introduce el valor de la fila: ");
    scanf("%i",&fila);
    printf("Introduce el valor de la columna: ");
    scanf("%i",&columna);
    printf("Matriz A\n");
    for (i=0; i<fila; i++) 
    {
        for(j=0; j<columna; j++)
        {
          printf("Ingresa el valor de la posicion [%i],[%i]:\n",i,j);
          scanf("%i",&matrizA[i][j]);
        }
    }
    for (i=0; i<fila; i++) 
    {
        for(j=0; j<columna; j++)
        {
          printf("%i\n",matrizA[i][j]);
        }
    }
    printf("Matriz B\n");
    for (i=0; i<fila; i++) 
    {
        for(j=0; j<columna; j++)
        {
          printf("Ingresa el valor de la posicion [%i],[%i]:\n",i,j);
          scanf("%i",&matrizB[i][j]);
          printf("%i\n",matrizB[i][j]);
        }
    }
    for (i=0; i<fila; i++)
    {
      for (j=0; j<columna; j++)
      {                       
        matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
      }
    }
    
    for (i=0; i<fila; i++) 
    {
        for(j=0; j<columna; j++)
        {
          printf("%i\t",matrizR[i][j]);
        }
        printf("\n");
    }
    printf("%i\t",matrizR[0][0]);
    printf("%i\t",matrizR[0][1]);
    printf("%i\t",matrizR[1][0]);
    printf("%i\t",matrizR[1][1]);
}