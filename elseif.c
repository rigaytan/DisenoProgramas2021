#include <stdio.h>
#include <conio.h>

int main ()
{
    int edad = 0;
    printf("introduce tu edad");
    scanf("%i",&edad);
    if(edad == 17)
    printf("tu tienes 17 anios");
    else if (edad == 18)
    printf("tu tienes 18 anios");
    else if(edad == 19)
    printf("tu tienes 19 anios");
    else
    printf("No tienes ni 17, 18 o 19 anios");
}