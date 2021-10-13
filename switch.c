#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.1416

int main ()
{
    int opcion = 0; 
    float base, altura, area, lado, radio = 0;
    printf("Selecciona la figura: \n");
    printf("1.- Triangulo\n");
    printf("2.- Cuadrado\n");
    printf("3.- Circulo\n");
    printf("4.- Rectangulo\n");
    scanf("%i",&opcion);
    switch (opcion)
    {
    case 1:
    printf("Seleccionaste triangulo\n");
    printf("Introduce base y altura: \n");
    scanf("%f",&base);
    scanf("%f",&altura);
    area = (base*altura)/2;
    break;

    case 2:
    printf("Seleccionaste cuadrado\n");
    printf("introduce lado: ");
    scanf("%f",&lado);
    area=pow(lado,2); //area = lado*lado
    break;

    case 3:
    printf("Seleccionaste circulo\n");
    printf("Introduce el valor del radio: ");
    scanf("%f",&radio);
    area = pi*pow(radio,2);
    break;

    case 4:
    printf("Seleccionaste rectangulo\n");
    printf("Introduce la base: ");
    scanf("%f",&base);
    printf("Introduce la altura");
    scanf("%f",&altura);
    area = base*altura;
    break;
    }
    printf("El area es: %.2f\n",area);
    printf("El programa a finalizado\n\n");
    return main();
}