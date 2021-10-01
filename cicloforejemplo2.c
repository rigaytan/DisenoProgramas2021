#include <stdio.h>
#include <conio.h>

int main ()
{
    //Programa que calcule el promedio solo de las
    //posiciones con numero par
    /*  1 : 5
        2 : 8 ♦
        3 : 7
        4 : 6 ♦
        5 : 9
        6 : 8 ♦
        7 : 3
        8 : 6 ♦
        9 : 10
        10 : 8 ♦ */
    float sumatoria = 0;
    float promedio = 0;
    float num = 0;
    int i = 0; int b = 0;
    int datos = 0;
    printf("cuantos datos introduciras: ");
    scanf("%i",&datos);
    for(i=1; i<=datos; i++)
    {
        printf("Introduce el %i dato: ",i);
        scanf("%f",&num);
        if(i%2 == 0)
        {
            sumatoria = num + sumatoria;
            b = b+1;
        }
        else
        {
            sumatoria = sumatoria;
        }
    }
    promedio = sumatoria/b;
    printf("El promedio es %f",promedio);
}