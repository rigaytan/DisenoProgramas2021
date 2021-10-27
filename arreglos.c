#include <stdio.h>
#include <conio.h>

int main ()
{
    float promedio = 0; int materias = 0;
    float suma = 0; int i = 0; int num = 0;
    float cal[num]; //cal[0], cal[1], cal[2]
    // cal[3], cal[4]
    printf("Cuantas calificaciones introduciras: ");
    scanf("%i",&num);
    for(i=0; i<num; i++)
    {
        printf("\nintroduce el valor de la calificacion %i: ",i+1);
        scanf("%f",&cal[i]);
        if(cal[i]>=6)
        {
            printf("\ncalificacion aprobatoria");
        }
        else
        {
            printf("\nCalificacion reprobatoria");
        }
        suma = suma + cal[i];
    }
    promedio = suma/num;
    /*for(i=0; i<5; i++)
    {
        printf("el valor de la calificacion %i es: %i\n",i+1, cal[i]);
    }*/
    printf("el promedio es: %0.2f\n",promedio);
    /*printf("introduce el numero de calificacion: ");
    scanf("%i",&num);
    printf("la calificacion es: %i",cal[num-1]);*/
}