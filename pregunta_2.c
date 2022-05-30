#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//float a = pow(7,5);
float c = 0.;
//float M = pow(2,31) -1;
float Io = 1.;
int N;
float rn;

void main()
{
  printf("Introduzca la cantidad de numeros aleatorios que desea: ");
  scanf("%d", &N);

  float In = fmod(pow(7,5)*Io,pow(2,31)-1);

    for (int i=0;i<N;i++)
      {
        In = fmod(pow(7,5)*In,pow(2,31)-1);
	rn = In/(pow(2,31)-1);
	printf("EL numero aleatorio es %f\n",rn);
      }
}
