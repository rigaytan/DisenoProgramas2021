#include <stdio.h>
#include <conio.h>
int main ()
{
   //variable tipo char, sirve para guardar caracteres
   char letra; char letra2;
   //Bandera
   int b = 0;
   printf("En que a%co inicio la independencia de Mexico: ",164);
   printf("\na)1932\t\tb)1810\t\tc)2021\t\td)1990\n");
   printf("Escribe tu respuesta: ");
   scanf(" %c",&letra); 
   if (letra == 'b')
   {
       printf("Respuesta correcta la independencia de mexico empezo el 15 de septiembre de 1810");
   }
   else
   {
       printf("Fallaste, lee un libro de historia");
   }
   printf("\nQuien dio el grito de Indepencia de Mexico");
   printf("\na)Miguel Hidalgo\t\tb)Miguel Bose\t\tc)Luis Miguel\t\td)AMLO\n");
   printf("Escribe tu respuesta: ");
   scanf(" %c",&letra2); 
   if (letra2 == 'a')
   {
       printf("Respuesta correcta Miguel Hidalgo realizo el Grito de Dolores");
   }
   else
   {
       printf("Fallaste, lee un libro de historia");
   }
}