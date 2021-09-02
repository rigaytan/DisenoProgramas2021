#include <stdio.h>
#include <conio.h>

int main ()
{
    float num1,num2,resultado,resultado2 = 0;
    printf("Introducir numero 1: ");
    scanf("%f",&num1);
    printf("Introducir numero 2: ");
    scanf("%f",&num2);
    resultado = num1*(num2 + num1);
    resultado2 = resultado + 1; 
    printf("el resultado es %.2f", resultado);
    printf("\nel resultado 2 es %.2f", resultado2);
}