#include <stdio.h>
#include <conio.h>

int main ()
{
    /* Realice un programa que me indique si
    un numero es mayor que 5 o menor a 3*/
    int num1 = 0;
    printf("Introduce el numero 1: ");
    scanf("%i",&num1);
    if(num1>5 && num1<10)
    {
        printf(" el numero es mayor a 5 y menor a 10");
    }
    else
    {
        printf("el numero no es mayor a 5 ni menor a 3");
    }
}