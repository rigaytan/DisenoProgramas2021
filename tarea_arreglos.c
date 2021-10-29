#include <stdio.h>
#include <conio.h>

int main ()
{
    int materias = 0; int i = 0; int b = 0; float promedio = 0;
    float calif[materias]; int num = 0; float suma = 0;
    printf("Introduce el numero de calificaciones a promediar \n");
    scanf("%i",&materias);

    for(i=0; i<materias; i++)
    {
        printf("Introduce el valor de la calificacion %i: ", i+1);
        scanf("%f",&calif[i]);
        if(calif[i]>=0 && calif[i]<=10)
        {
        suma = suma + calif[i];
        }
        else
        {
            printf("La calificacion debe de ser un valor entre 0 y 10\n");
            printf("Vuelve a introducirla\n");
            i = i-1;
        }
    }
    promedio = suma/materias;
    printf("el promedio es %f\n",promedio);
    printf("De que numero quieres contar las veces repitio");
    scanf("%i",&num);   
    for(i=1; i<=5; i++) 
    {                       
        if(calif[i]==num)
        {
            b++; // b=b+1
        }
    }
    printf("La veces que se repitio el numero %i fue %i",num,b);
}