#include <stdio.h>
#include <conio.h>

int main ()
{
    int i = 0;
    float num = 0; float suma = 0;
    for(i=1; i<=5; i++)
    {
        printf("Introduce un numero: ");
        scanf("%f",&num);
        suma = suma + num;
        //suma = 0 + 25
        //suma = 25 + 24
        //suma = 49 + 33
        //suma = 82 + 55
        //suma = 137 + 82
        //suma = 219
        //printf("La suma total de los %i numeros es: %i \n",i,suma);
    }
    //printf("La suma total de los %i numeros es: %i\n",i-1,suma);
    float promedio = suma/5;
    printf("El promedio de los 5 elementos es: %0.2f",promedio);
}