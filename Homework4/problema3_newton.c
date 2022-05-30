#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//-------METODO DE NEWTON-RAPSON--------\\

int i=0;
double xr=0,x,f1,f2,error, errorp,f;
 
void funcion1(double y)
{
  f1=8*y-cos(y)-2*y*y;
}

void derivada(double y)
{
  f2=8+sin(y)-4*y;
}
void main()
{
  printf("Introduzca un valor inicial para la funcion: ");
  scanf("%lf",&x);

  funcion1(x);
  derivada(x);

  do
    {
      xr =(double)( x - (f1/f2));
      error= fabs((x-xr)/xr)*100;
      x=xr;
      funcion1(xr);
      derivada(xr);
      i++;

    }while(error>0.00001);

  printf("La raiz se encuentra en %lf con un error porcentual de %lf en %d iteraciones \n",xr,error,i);
}
