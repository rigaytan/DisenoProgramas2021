#include <stdio.h>
#include <conio.h>
int main ()
{
    int seleccion = 0;
    printf("Esto es un menu: \n");
    printf("1.- Futbol\n");
    printf("2.- tenis\n");
    printf("3.- golf\n");
    scanf("%i",&seleccion);
    if(seleccion == 1)
    {
        printf("Escogiste futbol");
    }
    else if (seleccion == 2)
    {
        printf("Escogiste tenis");
    }
}