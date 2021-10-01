#include <stdio.h>
#include <conio.h>

int main ()
{
    int residuo = 0;
    int numero = 0;
    printf("introduce un numero: ");
    scanf("%i",&numero);
    residuo = numero%2;
    //printf("el residuo es: %i",residuo);
    if(residuo == 0)
    {
    printf("\nEl numero es par");
    }
    else
    {
    printf("\nel numero es impar");
    }
}
