#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979
float x = 0.3333;
float y = 0.7453;
float xmax = 0.;
float xmin = 10.;
float ymax = 0.;
float ymin = 10.;
float In = 0,d,m,r, mt = 0,numxcm = 0,numycm = 0,xcm,ycm;

void main()
{

 int  n = 1;
float r0 = pow(x*x+y*y,(double)1/2);
float m0 = pow(fabs(x*y),(double)1.3)*exp(-r0/pow(2,(double)1/2));

 int Valor = 1000;

  while (n <= Valor)
    {
      x = -2.7*x*log(x);//coordenada x de una particula
      y = 0.9*sin(PI*y);//coordenada y de una particula
      r = pow(x*x+y*y,(double)1/2);
      m = pow(fabs(x*y),(double)1.3)*exp(-r/pow(2,(double)1/2));
      numxcm = numxcm + x*m;//numerador para calcular la posicion del CM en X.
      numycm = numycm + y*m;//numerador para calcular la posicion del CM en Y.
      mt = mt + m; // masa total.
      d = fabs(y-x)/pow(2,(double)1/2);//distancia al eje de rotacion.
      In = In + m*pow(d,2);//momento de inercia de cada particula.
      // printf("Valor x = %f e y = %f\n",x,y);
      if (x > xmax) xmax = x;
      if (x < xmin) xmin = x;
      if (y > ymax) ymax = y;
      if (y < ymin) ymin = y;

      //  printf("valor de x=%f,xmax=%f,xmin=%f,y=%f,ymax=%f,ymin=%f\n",x,xmax,xmin,y,ymax,ymin);

	n++;
    ;}
  float mtt = mt + m0;//masa total incluyendo m0 correspondiente a x0,y0.
  float x0cm = 0.3333*m0, y0cm = 0.7453*m0;
      float altura = ymax - ymin;
      float base = xmax - xmin;
      float area = base*altura;
      xcm = (x0cm + numxcm)/mtt;
      ycm = (y0cm + numycm)/mtt;
      float d0 = fabs(y0cm-x0cm)/pow(2,(double)1/2);
  float It = In + m0*pow(d0,2);

  printf("\nPara una cantidad de %d paticulas:\n\n",Valor);
      printf("El area del minimo rectangulo es A = %f\n",area);
      printf("La masa total es Mt = %f\n", mt);
      printf("El centro de masa del sistema esta en Rcm = %f i + %f j\n",xcm,ycm);
      printf("El momento de inercia es I = %f\n\n",It);


}
