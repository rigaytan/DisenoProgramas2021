#include <stdio.h>
#include <conio.h>

int main ()
{
    int anio = 0;
    int edad = 0;
    printf("Introduce el anio en que naciste: ");
    scanf("%i",&anio);
    edad = 2021 - anio;
    if (edad <= 17)
    {
        printf("Tu edad es: %i y eres menor de edad\n",edad);
    }
    else
    {
        printf("Tu edad es: %i y eres mayor de edad\n",edad);
    }
    return main ();
}