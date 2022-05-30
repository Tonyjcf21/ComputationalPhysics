#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//-------
double f1,f2,x,d,a,b;
//------

void funcion1(double y)
{
  f1=8*y-cos(y)-2*y*y;
}

void funcion2(double y)
{
  f2=8*y-cos(y)-2*y*y;
}

void main()
{
  printf("Intervalo inferior = ");
  scanf("%lf",&a);
  printf("Intervalo superior = ");
  scanf("%lf",&b);
  printf("Incremento deseado = ");
  scanf("%lf",&d);

  x=a;
do
  {
    funcion1(x);
    printf("f1 = %lf \n",f1);
    x=x+d;
    funcion2(x);
    printf("f2 = %lf \n",f2);

  }while(f1*f2>0);

 x = (x+(x-d))/2.;

 printf("La raiz esta en el punto %lf con incerteza de %lf \n",x,d/2);
}
