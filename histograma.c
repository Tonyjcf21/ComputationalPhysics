#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ndiv, i,N,*f,j;
double xmax, xmin, try;

FILE *fp;

void main ()
{
  printf("Introduzca xmin =");
    scanf("%lf",&xmin);

    printf("Introduzca xmax =");
    scanf("%lf",&xmax);

    printf("Introduzca numero de divisiones =");
    scanf("%d",&ndiv);

    printf("Introduzca numero de valores a generar N =");
    scanf("%d",&N);

    f = (int *)malloc(sizeof(int)*ndiv);

    fp = fopen("datos.dat","w");

    for(i=0;i<ndiv;i++) f[i]=0;

    for(i=0;i<N;i++){
      try = rand()/(double)RAND_MAX;//numero aleatorio entre xmin y xmax.
      try = xmin + try*(xmax-xmin);
      j = (int)(try-xmin)*((ndiv-1)/(xmax-xmin));//ec de una recta. eje vertical es de 0 a ndiv-1 y eje horizontal va de xmin a xmax. el x que se obtiene es try.
      f[j]+=1;

      // printf("%d %d\n",j,f[j]);//este es el que devuelve todo el histograma
    }

    for(j=0;j<ndiv;j++)fprintf(fp,"%d %d\n",j,f[j]);//el ultimo valor
    fclose(fp);
}
