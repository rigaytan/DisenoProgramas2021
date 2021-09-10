#include <stdio.h>
#include <conio.h>

int main ()
{
    int num1,num2,num3 = 0;
    printf("Introduce el numero 1: ");
    scanf("%i",&num1);
    printf("Introduce el numero 2: ");
    scanf("%i",&num2);
    printf("Introduce el numero 3: ");
    scanf("%i",&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("El numero 1 es el mayor\n");
        }
        else
        {
            printf("El numero 3 es el mayor\n");
        }
    }
    else
    {
        if(num2>num3)
        {
            printf("El numero 2 es el mayor\n");
        }  
        else
        {
            printf("El numero 3 es el mayor\n");
        } 
    }
}