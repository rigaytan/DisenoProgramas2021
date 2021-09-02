#include <stdio.h>
#include <conio.h>

int main()
{
    //notacion hungara
   //Declaracion de variables
   int edad = 0;
   int nacimiento = 0;
   int anio = 0;
   printf("Bienvenido al programa\n");
   printf("Calcularemos tu año de nacimiento\n");
   printf("Introduce tu edad:");
   scanf("%i",&edad);
   printf("Introduce el anio actual: ");
   scanf("%i",&anio);
   nacimiento = anio - edad;
   printf("La edad que se introdujo fue %i y naciste en el año %i",edad,nacimiento);
   //printf("\nnaciste en el año %i",nacimiento);
   printf("\nPresiona cualquier tecla para finalizar");
   getch();
   return 0;
}