#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i = 0, N, n, it;
//N numero de particulas totales, n es el numero de particulas en el lado izquierdo.
float r,prob;
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

    while (i<it)
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
	fprintf(datos,"%d %d\n",i,n);

	i++;
      }
    fclose(datos);

    // n = (N/2)*(1+exp((-2*t)/N)); //
}
