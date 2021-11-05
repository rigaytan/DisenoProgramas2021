/*Usar Do While y Switch, para generar un programa que me calcule 
el área de tres figuras y mientras no se elija la opción salir, 
el programa seguirá preguntado de que figura se desea calcular 
el área.

Ejemplo:
Elije el área a calcular:
1.- Triangulo
2.- Circulo
3.- Cuadrado
4.- Salir*/

#include <conio.h>
#include <stdio.h>

int main()
{
    int eleccion = 0; int baseT = 0; int alturaT = 0;  int areaT = 0;
    int radioC = 0; int areaC = 0; int ladoC = 0; int areaCu = 0;
    int x = 0;
    do{
    printf("\nElije el area a calcular \n");
    printf("1.- Triangulo\n");
    printf("2.- Circulo\n");
    printf("3.- Cuadrado\n");
    printf("4.- Salir\n");
    scanf("%i",&eleccion);
    
    if (eleccion<1 || eleccion>4)
    {
        printf("Elegiste una opcion invalida\n");
        printf("Presiona 0 para continuar o 1 para salir: ");
        scanf("%i",&x);
    }
    else
    {
    switch (eleccion)
    {
        case 1:
        printf("Introduce la base: ");
        scanf("%i",&baseT);
        printf("Introduce la altura: ");
        scanf("%i",&alturaT);
        areaT = (baseT*alturaT)/2;
        printf("El area del triangulo es: %i",areaT);
        break;

        case 2:
        printf("Introduce el radio del circulo: ");
        scanf("%i",&radioC);
        areaC = 3.14*radioC*radioC;
        printf("El area del circulo es: %i",areaC);
        break;

        case 3:
        printf("Introduce el lado del cuadrado: ");
        scanf("%i",&ladoC);
        areaCu = ladoC*ladoC;
        printf("El area del cuadrado es: %i",areaCu);
        break;

        case 4:
        printf("El programa ha finalizado");
        x = 1;
        break;
    }
    }
    }
    while (x==0);
}






