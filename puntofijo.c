#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//----
int i=0;
double xr,g,f,x,p,error;
//----

void funcion(double y)
{
  g=(cos(y)-2*y*y)/8;
}
void funcion2(double y)
{
  f=pow((8*y-cos(y))/2,1/2);
}


void main()
{
  printf("Indique valor inicial de la funcion = ");
  scanf("%lf",&x);

  funcion(x);

  do
    {
      
      xr=
      x = xr;
      funcion(xr);
      i++;
      
    }while(error>0.00001);

  printf("La raiz esta en %lf con un error de %lf luego de %d iteraciones\n",xr,error,i);
}
