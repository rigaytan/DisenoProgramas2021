#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    float a, b, c = 0;
    float m, bcuadrada, resta, raiz = 0;
    float resultado1 = 0;
    printf("Bienvenido al programa de la formula general\n");
    printf("introduce a : ");
    scanf("%f",&a);
    printf("introduce b : ");
    scanf("%f",&b);
    printf("introduc c : ");
    scanf("%f",&c);
    m = 4*a*c;
    bcuadrada = pow(b,2);
    resta = bcuadrada - m;
    raiz = sqrt(resta);
    resultado1 = (-b + raiz)/(2*a);
    //resultado1 = (-b + (sqrt(pow(b,2)-(4*a*c))))/(2*a);
    printf("El resultado es: %f", resultado1);
}