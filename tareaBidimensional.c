#include <stdio.h>
#include <conio.h>

int main ()
{
    int cuadroM[3][3];
    int i = 0; int j = 0; int x; int suma[3] = {0,0,0}; int z = 0;
    int inicio = 0; int fin = 0;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
        do{
        if(x==1)
        {
        printf("Existio un error vuelve a introducir el dato\n");
        }
        printf("Introduce la posicion [%i][%i]\n",i+1,j+1);
        scanf("%i",&cuadroM[i][j]);
        x = 1;
        }
        while(cuadroM[i][j]<1 || cuadroM[i][j]>9);
        x = 0;
        }
    }
    //suma_1 = cuadroM[0][0] + cuadroM[0][1] + cuadroM[0][2]

    for (z=0; z<3; z++)
    {
    for (i=0; i<1; i++)
    {
        for (j=0; j<3; j++)
        {
        suma[inicio] = suma[inicio] + cuadroM[i][j];
        }
    }
    inicio++;
    }
    printf("Suma 1: %i\n",suma[0]);
    printf("Suma 2: %i\n",suma[1]);
    printf("Suma 3: %i\n",suma[2]);
}