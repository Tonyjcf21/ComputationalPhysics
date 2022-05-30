#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//----------------------------------------------------------
//Seccion de variables globables

int i,j,n;
double x, err,aproximacion,serie;
long int f;

//----------------------------------------------------------


void main()
{

  //--------------------------------------------------------
  printf("Indique hasta donde quiere que sume la serie: ");
  scanf("%d",&n);

  printf("Introduzca el valor del coseno en radianes que desea saber: "); 
  scanf("%lf",&x);
  //--------------------------------------------------------
  // 
  //--------------------------------------------------------
  j=0;
  aproximacion=0;
  serie = 0;
  double respuesta_exacta = cos(x); //resultado exacto del coseno de x.

  while(j<=n)  //serie de taylor del coseno y error porcentual.
    {
      f=1;

      if(j==0)
	{
	  f=1; //se inicializa el valor de f para cada iteracion.
	}
      else
	{
	  for (i=1;i<=2*j;i++)    //calculo de factorial de (2n)!
	    {
	      f = f*i;                     
	    }
	}
     
      printf("%ld\n",f); 
      serie = (pow(x,2*j)*pow(-1,j))/f;
      aproximacion = aproximacion + serie;
      err = (fabs(respuesta_exacta - aproximacion)/respuesta_exacta)*100;

      printf("el valor del coseno es %lf con un error porcentual de %lf respecto al valor real %lf radianes\n",aproximacion,err,respuesta_exacta);

      j++;
    }
  //--------------------------------------------------------

}
