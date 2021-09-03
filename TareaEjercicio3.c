#include <stdio.h>
#include <conio.h>

int main ()
{
  float cal1, cal2,cal3,calfinal,Total = 0;
  printf("Introduce la calificacion 1 : ");
  scanf("%f",&cal1);
  printf("Introduce la calificacion 2 : ");
  scanf("%f",&cal2);
  printf("Introduce la calificacion 1 : ");
  scanf("%f",&cal3);
  printf("Introduce la calificacion final : ");
  scanf("%f",&calfinal);
  Total = (cal1*2 + cal2*2 + cal3*2 + calfinal*4)/10;
  printf("Tu calificacion total es: %.2f",Total);
}