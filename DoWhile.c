#include <stdio.h>
#include <conio.h>

int main ()
{
    int x = 0;
    char usuario[20] = "academico_2021";
    char contra[15] = "AcadEmico@2021";
    char user[20]; char pass[20];
        do
        { 
        printf("introduce el usuario: ");
        gets(user);
        printf("introduce contraseña: ");
        gets(pass);
        if(strcmp(usuario,user)==0 && strcmp(contra,pass)==0)
        {
            printf("accediste\n");
            x=4;
        }
        else
        {
            printf("no accediste: usuario o contraseña erroneos\n");
            x++;
        }
        }
    while (x < 3);//mientras se cumpla la condicion declarada aqui
    if(x==4)
    {
        printf("Bienvenido a classroom");
    }
    else
    {
        printf("usuario bloqueado te has equivocado 3 veces");
    }
}