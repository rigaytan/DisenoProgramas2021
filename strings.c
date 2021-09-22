#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
    //ABC = Altas, Bajas, Cambios
    //string = Cadena de caracteres
    //varios caracteres pegados, palabras o frases
    char nombre[10];
    char apellido[10];
    char nombreCompleto[30] = "";
    char contra[10];
    char usuario[10];
    char contraAcc[10];
    printf("Introduce tu nombre: ");
    gets(nombre);
    printf("Introduce tu apellido: ");
    gets(apellido);
    strcat(nombreCompleto,nombre);
    strcat(nombreCompleto," ");
    strcat(nombreCompleto,apellido);
    printf("Hola, %s bienvenido al sistema\n",nombreCompleto);
    printf("Introduce el usario: ");
    gets(usuario);
    printf("Introduce la contrasenia de acceso: ");
    gets(contra);
    //user: Ricardo
    //pass: 1234
    //user: Sergio
    //pass: 9876
    if ((strcmp(usuario,"Ricardo")==0 && strcmp(contra,"1234")==0)||(strcmp(usuario,"Sergio")==0 && strcmp(contra,"9876")==0))
    {
    printf("Accediste al sistema");
    }
    else
    {
    printf("Error vuelve a intentar");
    }
}