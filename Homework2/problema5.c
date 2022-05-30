#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float c = 0.;
float Io = 1.;
int N;
float rn;
int i,*f,j;

FILE *fp;

void main()
{
  printf("Introduzca la cantidad de numeros aleatorios que desea: ");
  scanf("%d", &N);

  f = (int *)malloc(sizeof(int)*10);
  fp = fopen("data.dat","w");
  for(i=0;i<10;i++) f[i]=0;


  float In = fmod(pow(7,5)*Io,pow(2,31)-1);

    for (int i=0;i<N;i++)
      {
        In = fmod(pow(7,5)*In,pow(2,31)-1);
	rn = In/(pow(2,31)-1);
	j = rn/0.1;
	f[j]+=1;
	//	printf("EL numero aleatorio es %f\n",rn);
	//	fprintf(data,"%d %f\n",j,(double)rn);
      }
 for(j=0;j<10;j++)fprintf(fp,"%f %d\n",j*0.1,f[j]);
 fclose(fp);
}
