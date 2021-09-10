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

    if(num1==num2)
    {
        printf("El numero 1 es igual al numero 2");
    }
    else if(num1==num3)
    {
        printf("El numero 1 es igual al numero 3");
    }
    else if(num2==num3)
    {
        printf("El numero 2 es igual al numero 3");
    }
    else
    {
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("El %i es el mayor\n",num1);
        }
    }
    else if(num2>num3)
        {
            printf("El %i es el mayor\n",num2);
        }  
    else
        {
            printf("El %i es el mayor\n",num3);
        }
    } 
}