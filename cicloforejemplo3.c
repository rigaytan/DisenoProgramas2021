#include <stdio.h>
#include <conio.h>

/*Realizar la sumatoria de todos los 
numeros enteros multiplos de 4 
que existan entre un numero que 
se introduce y cero*/
//ejemplo:
/*
Se introduce: 10
10 no es multiplo
9 no es multiplo 
8 si es multiplo
7 no es multiplo
6 no es multiplo
5 no es multiplo
4 si es multiplo
3 no es multiplo
2 no es multiplo
1 no es multiplo
0 no es multiplo
El resultado es: 12
20 16 12 8 4 = 60
*/
int main ()
{
int i, numero, b = 0;
printf("Introduce un numero: ");
scanf("%i",&numero); 

for (i=numero; i>=0; i--)
    {
        if(i%4 == 0)
        {
            //printf("%i numero multiplo de 4\n",i);
            b = b+i;
            
        }
        else
        {
            //printf("%i el numero no es multiplo de 4\n",i);
        }
    }
    printf ("La sumatoria es: %i\n",b);
}