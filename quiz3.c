#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//------
int n,i,j,x,d[2000],m=10;
float r,prob=1/2;
FILE *caminantes;
//------

void main()
{
  caminantes = fopen("caminantes.dat","w");
  // printf("Ingrese el numero de pasos que el borracho da: ");
  // scanf("%d",&n);



  for(i=0;i<2000;i++) d[i]=0.;

  for(i=0;i<10;i++)
    {
	srand((long)time((time_t *)(NULL)));
	x=0;
      
	for(j=0;j<2000;j++)

	  {
	    r = rand()/(float)RAND_MAX;

	    if (r < prob)
	      {
		x = x+1;
	      }
	    else {
	      x = x-1;
	    }
	    d[j]=d[j]+x*x;
	//	fprintf(caminantes,"%d %d\n",n,d[i]);
	
      }
      
    }
  for(j=0;j<2000;j++)
    {
      d[j]=d[j]/10;
      fprintf(caminantes,"%d %d\n",j,d[j]);
    }
  fclose(caminantes);
}
