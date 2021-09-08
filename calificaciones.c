/* Se introducen 3 calificaciones distintas
el programa calcula el promedio y determina
si el alumno aprobo o no la materia, minima 
aprobatoria es 7*/
#include <stdio.h>
#include <conio.h>
int main ()
{
int cal1,cal2,cal3,promedio = 0; 
printf("Introduce la calificacion 1: ");
scanf("%i",&cal1);
printf("Introduce la calificacion 2: ");
scanf("%i",&cal2);
printf("Introduce la calificacion 3: ");
scanf("%i",&cal3);
promedio = (cal1+cal2+cal3)/3;
if (promedio >= 7)
printf("Aprobaste la materia");
else
printf("Reprobaste la materia");
}