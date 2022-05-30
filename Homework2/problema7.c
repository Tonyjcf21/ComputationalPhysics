#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a;
float error;

void main()
{

  printf("Introduzca el numero al cual le quiere calcular la raiz cuadrada:");
  scanf("%f",&a);
  printf("Introduzca el error porcentual deseado: ");
  scanf("%f",&error);

  float rn = (a/2 + (a/2)/2)/2;//valor inicial
  float v = sqrt(a);//valor real de la raiz cuadrada.
  float ec = 100;//iterador del error.

  while (ec > error)
    {
      //for (int n=0;n<=10;n++)//iterador para disminuir el error
    
      rn = (rn + a/rn)/2;
      ec = 100-100*(v/rn);
      printf("sqrt = %f y error = %f por ciento\n",rn,ec);

    
    }
}
