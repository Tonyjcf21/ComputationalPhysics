#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//-------METODO DE NEWTON-RAPSON--------\\

int i=0;
double xr=0,x,f1,f2,error, errorp,f;
 
void funcion1(double y){
  f1=exp(-y)-y;
}

void derivada(double y){
  f2=-exp(-y)-1;
}
void main()
{
  printf("Introduzca un valor inicial para la funcion: ");
  scanf("%lf",&x);
  printf("Introduzca el error porcentual deseado: ");
  scanf("%lf",&errorp);

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

    }while(error>errorp);

  printf("La raiz se encuentra en %lf con un error porcentual de %lf en %d iteraciones \n",xr,error,i);
}
