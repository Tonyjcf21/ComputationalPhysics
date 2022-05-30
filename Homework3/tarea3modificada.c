#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i = 1, N, n, it,j=0;
//N numero de particulas totales, n es el numero de particulas en el lado izquierdo.
float r,prob,promedio=0,desv=0,x2;
FILE *datos;

void main()
{
  datos = fopen("datos.dat","w");

  printf("Introduzca numero entero de particulas: ");
    scanf("%d",&N);
 printf("Introduzca numero de iteraciones: ");
    scanf("%d",&it);

  n = N; 
  prob = (float)n/N;

    while (i<=it)
      {
	r = rand()/(float)RAND_MAX;

	if (r <= prob)
	  {
	    n = n-1;
	  }
	else {
	    n = n+1;
	  }
	prob =(float)n/N;

	if(i>2*N)
	  {
	    fprintf(datos,"%d %d\n",N,n-N/2);
	    // desv =desv+fabs(n-N/2);
	    promedio = promedio + n; //parte de calculo para el promedio de n
	    x2 = x2 + n*n; //parte de calculo para el promedio de n^2
	    j++; //denominador para calcular los promedios

	  }
	i++;
	  
      }
    float w=promedio/j,z=x2/j; //calculo de promedios.
    float mrf = pow(z-pow(w,2),1/2)/w; //calculo de magnitud relativa de fluctuaciones.
    fclose(datos);
    // printf("j = %d",j);
    printf("promedio n = %f\n, promedio cuadrado = %f",w,z);
    printf("magnitud relativa de fluctuaciones = %f",mrf); 
    // n = (N/2)*(1+exp((-2*t)/N)); //
}
